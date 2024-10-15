/* 2. define class alled bank account.include the following members :

   3.   data member
   
     - name of the depositer
     - account number
     - type of account
     -balance ammount in the account
     
        member function
     
     - to assign values 
     - to deposited an amount
     - to withdraw an amount after checking balance
     - to display name and balance */
     
 #include<iostream>
 using namespace std;
 
 class bankaccount
 {
 	 private :
 	 	
 	 	  string depositername;
 	 	  int accountnumber;
 	 	  string accounttype;
 	 	  double bankbalance;
 	 
	 public : 	
	 
	     bankaccount(string name,int number,string type,double balance)
	     {
	     	depositername = name;
	     	accountnumber = number;
	     	accounttype = type;
	     	bankbalance = balance;
		 }
		 
		void deposite(double amount)
		{
			if(amount>0)
			{
				bankbalance = bankbalance + amount;
				cout<<"\ndeposit =  "<<amount;
			}
			else
			{
				cout<<"\nno amount";
			}
		 } 
		 
		 void withdraw(double amount)
		 {
		 	if(amount>0 && amount <=bankbalance)
		 	{
		 		bankbalance = bankbalance - amount;
		 		cout<<"\nwithdraw = "<<amount;
		 	}
		 	else if(amount > bankbalance)
		 	 {
		 	 	cout<<"\nvalid amount";
		 		
			 }
			 else
			 {
			 	cout<<"\ninvalid amount";
			 }
		 }
		 
		 void display()
		 {
		 	cout<<"\ndepositer name = "<<depositername;
		 	cout<<"\naccount balance = "<<bankbalance;
		 }
	 
	     
 	
 };
 
 int main()
 
 {
 	 bankaccount b1("mehul",123,"savings",10000);
 	 
 	
 	b1.deposite(1000);
 	b1.display();
 	b1.withdraw(500);
 	b1.display();
 	b1.withdraw(1500);
 	b1.display();
 	 
 	 return 0;
 	 
 	 
 	
 }    
     
