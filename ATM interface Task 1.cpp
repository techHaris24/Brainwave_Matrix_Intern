
#include <iostream>
#include<string>
using namespace std;
struct bankinfo{
    string name;
    int accnumber;
    char type[10];
	};
	bankinfo b;
    int amount = 0;
    int  total = 0;
void setvalue()
    {
        cout << "Enter name\n";
        cin>>b.name;
        cout << "Enter Account number\n";
        cin >>b.accnumber;
        cout<<"Enter Account type\n";
        cin >>b.type;
        cout<<"Enter Balance\n";
        cin>>total;
    }
 
    // Function to display the required data
    void showdata()
    {
        cout << "Name:" <<b.name << endl;
        cout << "Account No:" <<b.accnumber << endl;
        cout << "Account type:" <<b.type << endl;
        cout << "Balance:" <<total<< endl;
    }
 
    // Function to deposit the amount in ATM
    void deposit()
    {
        cout << "\nEnter amount to Deposit\n";
        cin >> amount;
    }
 
    // Function to show the balance amount
    void showbal()
    {
        total = total;
        cout << "\nTotal balance is: " << total<<endl;
    }
 
    // Function to withdraw the amount in ATM
    void withdrawl()
    {
        int a, avail_balance;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        avail_balance = total - a;
        cout << "Available Balance is" << avail_balance<<endl;
    }

 
int main()
{
    int choice;
    while (1) {
        cout<< "\t\t\tATM INTERFACE"<<endl;;
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account number, Account type"<<endl;
        cout << "\t2. Balance Enquiry"<<endl;
        cout << "\t3. Deposit Money"<<endl;
        cout << "\t4. Show Total balance"<<endl;
        cout << "\t5. Withdraw Money"<<endl;
        cout << "\t6. Cancel"<<endl;
        cin >> choice;
 
        // Choices to select from
        switch (choice) {
        case 1:
            setvalue();
            break;
        case 2:
            showdata();
            break;
        case 3:
            deposit();
            break;
        case 4:
            showbal();
            break;
        case 5:
            withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
    }
}
