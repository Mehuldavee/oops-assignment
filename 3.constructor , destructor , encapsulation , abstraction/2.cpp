/*write a c program of addition , subtraction , division, multiplication using constructor*/

#include<iostream>
using namespace std;

class calculator
{
	
	  private :
	  	
	  	  double num1,num2;
	  	  
	  public :
	  	
		
	    
		  calculator(double n1 , double n2)
		{
		    
		    num1 = n1;
		    num2 = n2;
		}
		
		double addition()
		{
			return num1 + num2;
		}
		double subtraction()
		{
			return num1 - num2;
		}
		double division()
		{
		
			
			return num1 / num2;
	    }
	    
	    double multiplication()
	    {
	    	return num1 * num2;
		}
	
			
};

int main()

{
	double a,b;
	
	
	cout<<"\nenter the value of num1  = ";
	cin>>a;
	cout<<"\nenter the value of num2 = ";
	cin>>b;
	calculator c1(a,b);
	cout<<"\naddttion       = "<<c1.addition();
	cout<<"\nsubtraction    ="<<c1.subtraction();
	cout<<"\ndivision = "<<c1.division();
	cout<<"\nmultiplication = "<<c1.multiplication();
	
	return 0;
}

