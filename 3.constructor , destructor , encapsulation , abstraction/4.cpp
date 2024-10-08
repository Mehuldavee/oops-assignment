/*write a c++ program to implement a clas called bank account that has private member variable for account 
number and bankbalance . include member function to deposit and withdraw money from the  account*/


#include<iostream>
using namespace std;


class bankaccount
{
	
	        private :
	        	
 	        	  double accountno;
	        	  double bankbalance;
	        	  
	        public :
			
               void set(double a,double b)
			{
			      
			   accountno  = a;
			   bankbalance = b;			  
	        	  
	        }
	        
	        void deposit(double amount)
	        {
	        	cout<<"\namount = "<<amount<<"rs.credited";
	        	bankbalance = bankbalance + amount;
			}
			
			void withdraw(double amount)
			{
			if(bankbalance>amount)
			{
				cout<<"\namount = "<<amount<<"rs.debited";
				bankbalance = bankbalance - amount;
				
			}
			else
			{
				cout<<"\nyour banakbalance  = "<<bankbalance;
				cout<<"\nyou not withdraw amount = "<<amount;
			}	
		}
			void get()
			{
			
			cout<<"\nyour current bankbalance is = "<<bankbalance;
		}
};
int main()
{
	bankaccount b1;
	
	b1.set(1111,100000);
	b1.get();
	b1.deposit(20000);
	b1.withdraw(70000);
	b1.get();
	
	return 0;
	
	 
	 
	 return 0;
	 
	
}


