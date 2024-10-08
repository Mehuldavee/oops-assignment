//WAP TO CREATE SIMPLE CALCULATOR USING CLASS.

#include<iostream>
using namespace std;

class calculator
{
	
	         public :
	         	
	         double addition(double a, double b)
	         {
	         	return a + b;
			 }
			 
			 double subtraction(double a, double b)
			 {
			 	return a - b;
			 }
			 
			 double multiplication(double a, double b)
			 {
			 	return a * b;
			 }
			 double division(double a , double b)
			 {
			 	
			 		return a/b;
				
			 }
	         	
				 	
};

int main()
{
	calculator c;
	double num1,num2;
	char operation;
	
	cout<<"\nenter value of num1 =";
	cin>>num1;
	cout<<"\nenter the value or num 2 = ";
	cin>>num2;
	cout<<"\choice operation (+,-,*,/) = ";
	cin>>operation;
	
	switch(operation)
	{
	case '+' :
		
		  cout<<"\nresult = "<<c.addition(num1,num2);
		  break;
		  
	case '-' :
		 cout<<"\nresult = "<<c.subtraction(num1,num2);
		 break;
		 
	case '*' :
	     cout<<"\nresult = "<<c.multiplication(num1,num2);
		 break;
		 
	case '/' :
	     cout<<"\nresult = "<<c.division(num1,num2);
		 break;	 	  
		
	}
	return 0;
	
}
