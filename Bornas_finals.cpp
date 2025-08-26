#include<iostream>
#include<stdlib.h>
#include<iomanip>



using namespace std;


	string pinCode = "000000", accountNum = "000001", validAccount = "999999", accountName = "JUAN S. DELA CRUZ", mobileNum = "09000000000", address = "MAKATI CITY";
	double Balance = 10000.00;
	

	void Menu1();

	void startMenu1();

	void balance();

	void deposit();

	void cash_deposit();

	void check_deposit();

	void withdrawal();

	void cash_transfer();

	void statement();

	void billTransfer();

	void mobileRecharge();

	void details();



int main(){

    startMenu1();
    Menu1();

    return 0;
}


void startMenu1(){

	char choice = 'Y';
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	
	do{
        string accNum, pin;
		cout<<"ENTER YOUR ACCOUNT NUMBER: ";
		cin>>accNum;	
		cout<<"ENTER YOUR PIN CODE: ";
		cin>>pin;
		if (accNum != accountNum && pin != pinCode)
		{
		    cout<<"ACCOUNT DOES NOT EXIST!\n";
		    cout<<"DO YOU WANT TO TRY AGAIN[Y/N]?";
		    cin>>choice;
		    choice = toupper(choice);
		}
        else
        {
        cout<<"complete";
        choice = 'N';
        system("cls"); 
        }
	} 
    while (choice == 'Y');
}


void Menu1(){
    system("cls");
	char choice;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	
	cout<<"[A] Account Balance Details\n";
	cout<<"[B] Deposits\n";
	cout<<"[C] Withdrawal\n";
	cout<<"[D] Cash Transfer\n";
	cout<<"[E] Mini statement\n";
	cout<<"[F] Bills payment\n";
	cout<<"[G] Mobile Recharge\n";
	cout<<"[H] Account Details Management\n";
	cout<<"[Q] Quit\n\n";
	
	cout<<"ENTER YOUR CHOICE:";
	cin>>choice;
	choice = toupper(choice);
	
    while(choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D' && choice != 'E' && choice != 'F' && choice != 'G' && choice != 'H' && choice != 'Q')
    {
    cout<<"ENTER YOUR CHOICE:";
	cin>>choice;
	choice = toupper(choice);
    }   

    switch(choice){
        case 'A':
            system("cls");
            balance();
            break;
        case 'B':
            system("cls");
            deposit();
            break;
        case 'C':
            system("cls");
            withdrawal();
            break;
        case 'D':
            system("cls");
            cash_transfer();
            break;
        case 'E':
            system("cls");
            statement();
            break;
        case 'F':
            system("cls");
            billTransfer();
            break;
        case 'G':
            system("cls");
            mobileRecharge();
            break;
        case 'H':
            system("cls");
            details();
            break;            
        default :
            system("cls");
            break;

    }
}


void whatsNext(){
    char choice;
    cout<<"What do you want to next?\n";
	cout<<"[A] Return to Main Menu\n";
	cout<<"[B] Exit from the system\n";
	cin>>choice;
	choice = toupper(choice);
	
	switch(choice){
	case 'A':
		Menu1();
		break;
	case 'B':
		system("cls");
		break;
	default :
			cout<<"Invalid input";	
	}
	system("cls");
}


void balance(){
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"     ACCOUNT BALANCE\n";
	cout<<"============================\n";
	cout<<"   Your account balance is\n";
	cout<<"       Php "<<fixed<<setprecision(2)<<Balance<<"\n";
	cout<<"     as of 10/19/2003\n";
	cout<<"============================\n";
    whatsNext();
    system("cls");
}


void deposit(){
	char choice;
	cout<<"\n         WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"     ATM online service\n\n\n";
	cout<<"      ACCOUNT BALANCE\n";
	cout<<"       DEPOSIT MENU\n";
	cout<<"============================\n";
	cout<<"[A] Cash\n";
	cout<<"[B] Checks\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	choice = toupper(choice);
	
	switch(choice){
	case 'A':
		system("cls");
		cash_deposit();
		break;
	case 'B':
	system("cls");
		check_deposit();
		break;
	default :
			cout<<"Invalid input";	
	}
	system ("cls");
}


void cash_deposit(){
	char choice;
	int oneK, fiveT, twoH, oneH, fifty  ;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"       CASH DEPOSIT\n";
	cout<<"============================\n";
	cout<<"DATE: 10/19/2003 TIME: 12:00\n";
	cout<<"Enter the quantity of each note:\n";
	cout<<"Php 1,000 : ";
	cin>>oneK;
	cout<<"Php 500 : ";
	cin>>fiveT;
	cout<<"Php 200 : ";
	cin>>twoH;
	cout<<"Php 100 : ";
	cin>>oneH;
	cout<<"Php 50 : ";
	cin>>fifty;
	
	double total = (oneK * 1000) + (fiveT * 500) + (twoH * 200) + (oneH * 100) + (fifty + 50);
	cout<<"TOTAL DEPOSIT : "<<fixed<<setprecision(2)<<total<<endl;
	Balance =  Balance + total;
	cout<<"YOUR CURRENT BALANCE : "<<fixed<<setprecision(2)<<Balance<<endl;	
	cout<<"============================\n";
	cout<<"What do you want to next?\n";
	cout<<"[A] Return to Main Menu\n";
	cout<<"[B] Exit from the system\n";
	cin>>choice;
	choice = toupper(choice);
	
	switch(choice){
	case 'A':
		Menu1();
		break;
	case 'B':
		system("cls");
		break;
	default :
			cout<<"Invalid input";	
	}
	system("cls");
	
}


void check_deposit(){
    int numCheck, checkAmount, total = 0;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"       CASH DEPOSIT\n";
	cout<<"============================\n";
	cout<<"DATE: 10/19/2003 TIME: 12:00\n";
	cout<<"Number of checks: ";
    cin>>numCheck;

    for(int ctr = 1; ctr <= numCheck; ctr++){
        cout<<"Check Number ["<<ctr<<"]: 00"<<ctr;
        cout<<"\nAmount of check: ";
        cin>>checkAmount;
        total = total + checkAmount;
    }
	cout<<"============================\n";
	cout<<"Total Deposit : "<<fixed<<setprecision(2)<<total;
	cout<<"\n============================\n";
    whatsNext();
}

void withdrawal(){
    double withdraw;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"     ACCOUNT BALANCE\n";
	cout<<"       CASH WITHDRAWAL\n";
	cout<<"============================\n";
	cout<<"DATE: 1/26/2003 TIME: 12:00\n";
	cout<<"Your current balance is "<<fixed<<setprecision(2)<<Balance<<".\n";
    cout<<"Enter amount to withdraw: ";
    cin>>withdraw;
    if( withdraw > Balance)
    {
        cout<<"Withdraw Unsuccesful\n";
        whatsNext();
    }
    else
    {
        Balance = Balance - withdraw;
        cout<<"Withdrawal Succesful!\n";
        cout<<"YOUR CURRENT BALANCE: "<<fixed<<setprecision(2)<<Balance<<endl;
        cout<<"============================\n";
        whatsNext();
    }
}
void cash_transfer(){
    double withdraw, amount, recipient;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"       CASH TRANSFER\n";
	cout<<"============================\n";
    cout<<"Date: 1/26/2023 Time: 12:00nn\n";
    cout<<"How much do you want to transfer?\n";
    cout<<"Amount: ";
    cin>>amount;
    cout<<"RECEPIENT ACCOUNT: ";
    cin>>recipient;
    if (amount < Balance && recipient != 999999 )
        cout<<"Im sorry I cannot proceed with the transaction.";
    else
    {
        cout<<"Transfer Successful!\n";
        Balance = Balance-amount;
        cout<<"Current Balance"<<Balance;
        whatsNext();
    }
}


void statement(){
	char choice;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"       MINI STATEMENT\n";
	cout<<"============================\n";
	cout<<"Date: 10/19/2023 TIME: 12:00\n";
	cout<<"Transaction: T102323\n";
	cout<<"ACCOUNT NUMBER: : 00XXX01 \n";
	cout<<"   BANK STATEMENT\n";
    cout<<"10/10/2023 DEP 10000.00\n";
    cout<<"11/10/2003 DEP 3300.00\n";
    cout<<"19/10/2003 TRANSFER 10000.00\n\n";
    cout<<"YOUR CURRENT BALANCE: 3300.00\n";
	cout<<"============================\n";
    whatsNext();
}


void billTransfer(){
	char choice;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"       BILL TRANSFER\n";
	cout<<"============================\n";
	cout<<"Sorry, this service is under\n";
	cout<<"        maintenance.\n";
    cout<<"============================\n";
    whatsNext();
}


void mobileRecharge(){
	char choice;
	cout<<"\n        WELCOME TO\n";
	cout<<"   AM5 RURAL BANK SERVICE\n";
	cout<<"    ATM online service\n\n\n";
	cout<<"       MOBILE RECHARGE\n";
	cout<<"============================\n";
	cout<<"Sorry, this service is under\n";
	cout<<"        maintenance.\n";
    cout<<"============================\n";
    whatsNext();
}





void details(){
    char choice;
    string newPin, oldPin;
    cout<<"       CHANGE DETAILS\n";
    cout<<"============================\n";
    cout<<"DATE: 1/26/2003 TIME: 12:00\n\n";
    cout<<"Which among the following details\n";
    cout<<"you want to change?\n\n";
    cout<<"[A] Pin Code\n";
    cout<<"[B] Mobile Number\n";
    cout<<"[C] Address\n\n";
    cout<<"Enter your choice: ";
    cin>>choice;
	choice = toupper(choice);
	if (choice != 'A' && choice != 'B' && choice !='C')
	{
		cout<<"INPUT INVALID\n";
		whatsNext();
	}
	else if (choice == 'A')
	{
		cout<<"\nEnter your new Pin Code: ";
    	cin>>newPin;
    	cout<<"\nEnter your old Pin Code: ";
    	cin>>oldPin;
   		if (pinCode == oldPin)
    	{
       		cout<<"\nChanges has been made.\n";
        	pinCode = newPin;
			cout<<"============================\n";
        	whatsNext();
    	}
    	else
    	{
        	cout<<"Pin code mismatch. I cannot proceed with the changes.\n";
    	}
    	cout<<"============================\n";
    	whatsNext();	
	}
	else if (choice == 'B')
	{
		cout<<"Enter your new Mobile Number: ";
		cin>>mobileNum;
		cout<<"\nMobile number has been changed\n";
		cout<<"============================\n";
    	whatsNext();	
	}
	else if (choice == 'C')
	{
		cout<<"Enter your new Address: ";
		cin>>address;
		cout<<"\nAddress has been changed\n";
		cout<<"============================\n";
    	whatsNext();
	}
}
