#include <iostream>

using namespace std;

int main() {
	const int defaultpin=0000;
	int attempts=0;
	int select;
	float reference;
	char Y;
	char N;	
	int number;
	float amount;
	int pin;
	int c_pin ;
	int new_pin;
	float balance,counter;
	string digits;
	balance=1000;
	 cout<<"Main Menu"<<endl;
	 cout<<"1.Check Balance"<<endl;
	 cout<<"2.Reset/Change Pin"<<endl;
	 cout<<"3.Send"<<endl;
	 cin>>select;
	 if(select==1)
	 {
	 	do{
	 		cout<<"Please enter your 4-digit PIN:"<<endl;
	 		cin>>pin;
	 		attempts++;
	 		if(pin!=defaultpin){
	 			cout<<"	Incorrect PIN.Please try again"<<endl;
			 }
			 else if(pin==defaultpin){
			 	cout<<"Your Balance is 1000";
			 }
		 }while(pin!=defaultpin);
		 if(attempts>3){
		 	cout<<"	Maximum attempts reached.";
		 	cout<<"Existing Programe"<<endl;
		 }
		 switch(pin){
		 	break;
	 }
	 }
	 else if(select==3)
	 {
	 	cout<<"Enter Mobile Number"<<endl;
	 	cin>>number;
	 cout<<"Enter Amount To Transfer"<<endl;
	 	cin>>amount;
	 	cout<<"Transfer"<<amount<<"To"<<number<<endl;
	 	cout<<"Enter Reference"<<endl;
	 	cin>>reference;
	 	cout<<"Please enter your PIN:"<<endl;
	 	cin>>pin;
	 	do{
	 		attempts++;
	 		if(pin!=defaultpin){
	 			cout<<"Incorrect PIN.Please try again"<<endl;
			 }
			 else if(pin==defaultpin){
			 	cout<<"You have successfully sent"<<amount<<"to"<<number<<endl;
			 	cout<<"Your current balance is"<<balance-amount<<endl;
			 }
		 }while(pin!=defaultpin);
		 if(attempts>3){
		 	cout<<"Maximum attempts reached";
		 	cout<<"Existing Program"<<endl;
		 }
		 switch(pin){
		 	break;
		 }
	 }
	 
	 
	return 0;
}
