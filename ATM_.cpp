#include <iostream>
using namespace std;
// variables 
double balance = 1000;
int deposit = 0;
int withdraw = 0;
int password = 1234;
int choice;
void show()
{
    cout << "***** Menu ***** " << endl;
    cout << "1 : balance " << endl;
    cout << "2 : withdraw " << endl;
    cout << "3 : deposit " << endl;
    cout << "4 : Exit " << endl;
    cout << "****************" << endl;
}
void process()
{
    cout << "Enter your password : " << endl;
    cin >> password;

    do {
        if (password == 1234)
        {
            cout << "Enter your choice : " << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "your balance is : " << balance << endl;
                break;
            case 2:
                cout << "Note : your balance is : " << balance << endl;
                cout << "Enter your amount : " << endl;
                cin >> withdraw;
                if (withdraw > balance)
                {
                    cout << "sorry you can't withdraw this ammount " << endl;
                }
                else
                {
                    balance -= withdraw;
                    cout << "Now : your balance is : " << balance << endl;
                }
                break;
            case 3:
                cout << "Your current balance : " << balance << endl;
                cout << "Enter your deposit money : " << endl;
                cin >> deposit;
                balance += deposit;
                cout << "Now : your balance is : " << balance << endl;
                break;
            case 4:
                cout << "Thank you" << endl;
                break;
            }
        }
        else
        {
            string cond;
            cout << "Password is incorrect , Do you want to try again > Enter [Yes] or [No] " << endl;
            cin >> cond;
            if (cond == "Yes" || "yes")
            {
                cout << "Enter your password : " << endl;
                cin >> password;
            }
            else
            {
                choice == 4;
            }
        }
    } while (choice < 4);
}

int main()
{
    show();
    process();


}