/*write a c++ program to mathematic operation like addition,subtraction,multiplication,
division of two nverumbers using different paraqmeters and function overloding.*/

#include<iostream>
using namespace std;

    int operation(int a,int b)
    {
    	return a + b;
	}
	
	int operation(int a,int b,char c)
	{
		if(c=='-')
		{
			return a - b;
		}
		return 0;
	}
	
	double operation(double a,double b)
	{
		return a * b;
	}
	
	double operation(double a,int b,char c)
	{
		if(c==0)
		{
			if(b!=0)
			{
				return a/b;
			}
			else
			{
				cout<<"\devide by zero !";
			}
		}
		return 0;
	}
	
	int main()
	{
		int a = 5,b = 20;
		double x = 10.0,y=5.0;
		
		cout<<"\naddition is = "<<a<<"and"<<b<<"is"<<operation(a,b);
		
		cout<<"\nsubtraction is = "<<a<<"and"<<b<<"is"<<operation(a,b,'-');
		
		cout<<"\nmultiplication is = "<<x<<"and"<<y<<"is"<<operation(x,y);
		
		cout<<"\ndivision is = "<<x<<"and"<<y<<"is"<<operation(x,y,'/');
		
		return 0;
	}

