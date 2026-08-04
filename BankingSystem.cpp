#include<iostream>
using namespace std;

int main()
{
    int option;
    int balance = 50000, withdraw, deposit;


    do
    { 
        cout << "=========== BANK MENU ===========" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "================================" << endl;
        cout << "Select an option: ";
        cin >> option;

        switch (option)                   
        {
            case 1:
                {
                    cout << "Enter amount to withdraw: ";
                    cin >> withdraw;
                    if (withdraw > balance)       
                        {
                            cout << "Insufficient balance!" << endl;                  
                            break;
                        }
                    else
                        {
                            balance -= withdraw;
                            cout << "Withdrawal successful!" << endl;
                            cout << "Remaining balance: " << balance << endl;
                        break;
                        }  
                }   
           
        
            case 2:
                {
                    cout << "Enter amount to deposit: ";
                    cin >> deposit;
                    balance += deposit;
                    cout << "Deposit successful!" << endl;
                    cout << "Updated balance: " << balance << endl;
            
                    break; 
                }

            case 3:
                {
                    cout << "Your current balance is: " << balance << endl;
                    break;
                }

            case 4:
                {
                    cout << "Exiting the program. Thank you for using our services!" << endl;
                    break;
                }

            default:
                {
                    cout <<"Invalid option! Please try again." << endl;
                    break;                      
                } 
        }


    } while (option != 4); 

return 0;
}
