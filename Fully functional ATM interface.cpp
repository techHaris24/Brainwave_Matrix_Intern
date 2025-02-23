#include<iostream>
using namespace std;
class User{
	
	private:
		string name;
		string PIN;
	public:
		double balance=0;
		User(string n,string P)
		{
			name=n;
			PIN=P;
		}
		bool checkpassword(string pin)
		{
			if(pin==PIN)
			{
				cout<<"Access Granted"<<endl;
				return 1;
			}
			else
			{
				cout<<"Access Denied"<<endl;
				return 0;
			}
		}
		bool checkname(string NAME)
		{
			if(NAME==name)
			{
				cout<<"Name OK"<<endl;
				return 1;
			}
			else
			{
				cout<<"Invalid username"<<endl;
				return 0;
			}
		}
};
int startmenu()
{
	int op;
	cout<<"*********Main Menu*********"<<endl;
	cout<<"1. Balance"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Select your option:";
	cin>>op;
	return op;
}
int main()
{
	User u1("Haris","4006");
	string n,p;
	
	cout<<"***Welcome to ATM Application***"<<endl;
	cout<<"Enter username:";
	cin>>n;
	cout<<"Enter your PIN:";
	cin>>p;
	if(u1.checkname(n)&&u1.checkpassword(p))
	{
		start:
		int i;
		i=startmenu();
		switch(i)
		{
			case 1:
				{
				cout<<"Your Current Account Balance is: "<<u1.balance<<endl;
				break;
			}
			case 2:
			{
				double dep;
				cout<<"Enter the amount to deposit:";
				cin>>dep;
				u1.balance+=dep;
				break;
			}
			case 3:
			{
				double wd;
				cout<<"Enter the amount to withdraw:";
				cin>>wd;
				if(wd>u1.balance)
				{
					cout<<"Insufficient Balance"<<endl;
				}
				else
				u1.balance-=wd;
				break;
			}
			case 4:
				{
					break;
				}
			
		}
		cout<<"Would you like to continue?"<<endl;
			cout<<"1-Yes"<<endl;
			cout<<"2-No"<<endl;
			cout<<"Selection:";
			int in;
			cin>>in;
			if(in==1)
			{
				system("cls");
				goto start;
			}
			
		}
	}

