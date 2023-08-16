#include <iostream>
using namespace std;


int main() {
	int rooms,days,option,num_rooms;
	float amount;
	string food;
	int cost = 200;
start:
	cout<<"\n--------------- Kofi Sika Hotel -----------------\n\n"
	"\n\n  1.Book a room \n\n"
	"\n  2.Make payment\n"
	"\n  3.Order Food\n"
	"\n  4.Quit\n       Select :  ";
	cin>>option;
		if(option==1){
			cout<<"WELCOME--------------\n       How many rooms do you need??";
			cin>>num_rooms;
			cout<<"A room cost GHS "<<cost<<", DO you want to proceed?"
			"\n\n1. Yes\n2. No\n    Select : ";
			cin>>option;
			if(option==1){
				goto payment;
			}else{
				cout<<"\a\n You've gotta try us again, Bye!!";
				goto start;
			}
		}else if(option==2){
			payment:
			cout<<"\n\n------ Make Payment ------\n\n";
			if(num_rooms<=0){
				cout<<"Enter number of rooms: ";
				cin>>num_rooms;
					cout<<"\n\n\nThe rooms would cost GHS"<<num_rooms*cost<<"!!\n\n";
				cout<<"\n\n\n --------------------------------------\n\n\n";
			}else{
				cout<<"The rooms would cost GHS"<<num_rooms*cost<<"!!\n\n";
				cout<<"\n\n\n --------------------------------------\n\n\n";
				
			}
		}else if(option == 3){
			system("cls");
			cout<<"----------------- Make orders for Foods ------------------"
			"\n\nEnter foood name :";
			cin>>food;
			cout<<"\n\nA plate of "<<food<<" would cost GHS "<<cost;
			goto start;
			
		}
		else if(option==4){
			cout<<"\n\n   --------------- IT WAS NICE HAVING YOU HERE --------------\n\n";
		}else{
			cout<<"\n\n\a\a\a\a\aCome again, I didn't get you!!!";
			goto start;
		}
		
	
	
	return 0;
}

