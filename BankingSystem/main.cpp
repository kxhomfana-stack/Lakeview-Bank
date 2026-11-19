#include <iostream>

using namespace std;
 double balance[5]={5000,6000,7000,8000,9000};
 double depositAmount;
 double transferAmount;
 double WithdrawAmount;
 int accountTransfer;
 int choice;
 string names[5]={"zinhle","Amo","Lwandle","Alondwe","Imange"};
 int accountNumber[5]={1001,1002,1003,1004,1005};
 int currentUser=-1;// only 1 selected customer uses the banking menu at a time
 string customerName;
 double depositfee;
 double amountCredited;

void login()
{
    cout<< "Enter your name:";
    cin>> customerName;
    for(int i = 0; i<5;i++)
    {
        if(customerName == names[i])
        {
            currentUser=i;
        }
    }
    if(currentUser != -1)
    {
        cout<<"Welcome to Lakeview Bank,"<<names[currentUser]<<"!"<<endl;
        cout<< "What would you like to do today?"<<endl;
    }
    else
    {
        cout<< "Name not found, try again!"<<endl;
    }

}

 void showbalance()
 {
     cout<< "Your balance is :R" <<balance[currentUser]<<endl;
     cout<< "What else would you like to do today?"<<endl;
 }
 void Deposit()
 {
     cout<< "Enter amount to deposit"<<endl;
     cin>> depositAmount;
     if (depositAmount<=0)
     {
         cout<< "Please enter a valid amount!"<<endl;
     }
     else
    {
     depositfee = depositAmount*0.02;
     amountCredited = depositAmount - depositfee;
     balance[currentUser] = balance[currentUser] + amountCredited;
     cout<< "Deposit successful!"<<endl;
     cout<< "******************************************"<<endl;
     cout<< "             Deposit summary              "<<endl;
     cout<< "*******************************************"<<endl;
     cout<< "Deposit amount: R"<<depositAmount<<endl;
     cout<< "Transaction fee (2%): R"<<depositfee<<endl;
     cout<< "Amount Recieved :R"<<amountCredited<<endl;
     cout<< "Your new balance is R"<<balance[currentUser]<<endl;
     cout<< "What else would you like to do today?"<<endl;
    }

 }
 void transfer()
 {
     cout<< "which account would you like to transfer to"<<endl;
     cin>> accountTransfer;
     cout<< "Enter amount to transfer"<<endl;
     cin>> transferAmount;
     if (transferAmount <= 0)
     {
         cout<< "Please enter correct amount"<<endl;
     }
     else if (transferAmount > balance[currentUser])
     {
         cout<< "INSUFFIENT FUNDS!!!!"<<endl;

     }
     else
     {
         balance[currentUser]= balance[currentUser]- transferAmount;
         cout<< "R"<<transferAmount<< "has been sent to account number "<<accountTransfer<< "Successfully!"<<endl;
         cout<< "Your remaining balance is R"<<balance[currentUser]<<endl;
         cout<< "What else would you like to do today?"<<endl;
     }

 }
 void withdraw()
 {
     cout<< "Enter the amount you wish to withdraw:";
     cin>> WithdrawAmount;
     if (WithdrawAmount<=0)
     {
         cout<< "Please enter correct amount"<<endl;
     }
     else if (WithdrawAmount> balance[currentUser])
     {
         cout<< "Insuffiecient funds "<<endl;
     }
     else
    {
        balance[currentUser] = balance[currentUser] - WithdrawAmount;
        cout<< "\nWithdrawal successfull!"<<endl;
        cout<< "Amount withdrawn: R"<<WithdrawAmount<<endl;
        cout<< "Remaining balance: R"<<balance[currentUser]<<endl;
        cout<< "What else would you like to do today?"<<endl;

    }
 }
 void menu()
 {
     cout<< "********************************************"<<endl;
     cout<< "\n             Lakeview Bank                "<<endl;
     cout<< "********************************************"<<endl;
     cout<< "1. Check Balance"<<endl;
     cout<< "2. Deposit"<<endl;
     cout<< "3. Transfer "<<endl;
     cout<< "4. withdraw "<<endl;
     cout<< "5. Exit"<<endl;
     cout<< "Enter your choice:";
     cin>> choice;
     switch (choice)
     {
     case 1:
        showbalance();
        break;
     case 2:
        Deposit();
        break;
     case 3:
        transfer();
        break;
     case 4:
        withdraw();
        break;
     case 5:
        cout<< "Thank you for using Lakewood bank"<<endl;
        break;
     default:
        cout<< "INVALID INPUT!!"<<endl;
     }
 }

int main()
{
    while(currentUser == -1)
    {
    login();
    }
    while (choice != 5)
    {
    menu();
    }
    return 0;
}
