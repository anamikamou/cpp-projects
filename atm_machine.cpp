#include <iostream>
#include <string>
using namespace std;
float initial_amount=0.0;

void machine_mechanism()
{
    cout << "Welcome to UCBL" << endl;
cout << "Please press any option following to choose services" << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Cash Withdrawal" << endl;
    cout << "3. Balance Inquiry" << endl;
    cout << "\n";
    
    int option;
    cin>> option;
    float deposit, withdraw;
    string proceed;
    switch(option)
    {
        case 1:
        cout << "\nEnter the amount to deposit: ";
        cin>> deposit;
        initial_amount= initial_amount+deposit;
        cout << "Your current balance is: " << initial_amount<< "Tk. Thanks for depositing!" << endl;
         cout << "Do you want to proceed? \nPress y to 'proceed' and n to 'exit' from here\n" << endl;
            cout << "Your option: "<< proceed;
            cin>> proceed;
            if(proceed=="y")
            {
                machine_mechanism();
            }
            break;
            
        case 2:
        cout << "\nPlease enter amount to withdraw: ";
            cin >> withdraw;
            if(withdraw>initial_amount)
            {
                cout<< "insufficient balance"<<endl;
                cout << "Do you want a new transaction?\nPress y to 'proceed' and n to 'exit' from here\n" << endl;
                cout << "Your option: ";
                cin >> proceed;
                if(proceed=="y")
                {
                    machine_mechanism();
                }
            }
            else
            {
                initial_amount = initial_amount - withdraw;

                cout << "You have withdrawn: " << withdraw<< "Tk. and your remaining balance is: " << initial_amount << "Tk."<< endl;

                cout << "Do you want a new transaction? \nPress 1 to 'proceed' and 0 to 'exit' from here\n" << endl;
                cout << "Your option: ";

                cin >> proceed;
                 if (proceed == "y"){
                 machine_mechanism();

                }
            }
            break;
            
            case 3:
            cout << "Your current account balance is: " << initial_amount <<"Tk."<< endl;

            cout << "Do you want a new transaction?\nPress y to 'proceed' and n to 'exit' from here\n" << endl;

            cout << "Your option: ";
            cin>>proceed;
            if(proceed=="y")
            {
                machine_mechanism();
            }
            break;

    }
}

int main()
{
    
 machine_mechanism();
 cout << "Thank you for choosing us!";

    return 0;
}
