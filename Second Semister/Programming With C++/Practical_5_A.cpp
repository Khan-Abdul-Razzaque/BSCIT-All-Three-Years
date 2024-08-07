/*
Write a c++ program to design a bank structure with data members customer name, account no, type of account, balance amount in the account.
to assign initial values.
to deposit an amount.
to withdraw the amount after checking the minimum.
to display the customer details.
*/

#include <iostream>
using namespace std;

class Bank
{
    string custName, accountNo, accountType;
    int accBalance;

public:
    Bank()
    {
        setData();
    }
    void setData()
    {
        accountNo = "981702901882";
        accountType = "saving account";
        custName = "K.A.Razzaque";
        accBalance = 500;
    }
    void deposit()
    {
        int deposit;
        cout << "\nEnter the amount to deposit to your account: ";
        cin >> deposit;
        accBalance += deposit;
        cout << "The total amount in your account is: " << accBalance << endl << endl;
    }
    void withdraw()
    {
        int withdraw;
        cout << "\nEnter the amount to withdraw from your account: ";
        cin >> withdraw;
        if (accBalance - withdraw >= 500)
        {
            accBalance -= withdraw;
            cout << "You have withdraw " << withdraw << "rs from your account." << endl;
            cout << "The total amount in your account after withdrawal is: " << accBalance << endl << endl;
        }
        else
        {
            cout << "You can withdraw upto " << accBalance - 500 << "rs only !!" << endl << endl;
        }
    }
    void display()
    {
        cout << "\nThe Name of the customer is: " << custName << endl;
        cout << "The account number is: " << accountNo << endl;
        cout << "The account type is: " << accountType << endl;
        cout << "The Total amount in the account is: " << accBalance << endl << endl;
    }
};

int main()
{
    Bank b1;
    int choice;
    while (1)
    {
        cout << "Press 1 to deposite amount or\nPress 2 to withdraw amount or\nPress 3 to display the data or\nPress 0 to quit the program: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "\nOk, The program is going to exit, Thanks for using it !!\n\n";
            goto finish;
        case 1:
            b1.deposit();
            break;

        case 2:
            b1.withdraw();
            break;

        case 3:
            b1.display();
            break;

        default:
            cout << "Invalid choice!!" << endl << endl;
            break;
        }
    }
    finish:
    return 0;
}