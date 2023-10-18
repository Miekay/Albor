#include<iostream>
using namespace std;

int main()
{
	int choose;
	while(true){
	cout<<endl;
	cout<<"-----CHOOSE A SCENARIO-----"<<endl;
	cout<<"1.) Albor Scenario "<<endl;
	cout<<"2.) Paullo Scenario "<<endl;
	cout<<"3.) Exit"<<endl;
    cout<<"choose:"<<endl;
	cin>>choose;
	
	
	if( choose == 1){
		system("cls");
		
		string num;
		
		cout<<"-----ALBOR SCENARIO 1-----"<<endl;
		cout<<"(Ask the User for their cellphone number)"<<endl;
		a:
			
			cout<<"\nEnter your Cellphone Number: "<<endl;
			cin>>num;
			if(num.size()<= 11){
				cout<<endl;
				cout<<"--------------------------------"<<endl;
				cout<<endl;
				cout<<"User's Number: "<<num;
				cout<<endl;
				cout<<endl;
				cout<<"--------------------------------"<<endl;
				cout<<endl;
			}
			else{
				cout<<"\nInvalid Input!\n";
				goto a;
			}
				
	}	
		else if( choose == 2){
			system("cls");
			
			int num1, num2, sum;
			
				cout<<"-----PAULLO SCENARIO 2-----"<<endl;
				cout<<"(Enter two numbers:)"<<endl;
				
				cout<<endl;
				cout<<"Enter First Number:"<<endl;
				cin>>num1;
				cout<<"Enter Second Number:"<<endl;
				cin>>num2;
				
				sum = num1 + num2;
			   
			    cout<<endl;
				cout<<"--------------------------------"<<endl;
				cout<<endl;
			    cout<<num1 << " + " << num2 << " = " << sum ;
			  	cout<<endl;
			  	cout<<endl;
				cout<<"--------------------------------"<<endl;
	}
		}
}