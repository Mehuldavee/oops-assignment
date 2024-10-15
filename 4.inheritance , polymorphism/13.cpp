/*write a program to find max number from given two numbers using friend function*/

#include<iostream>
using namespace std;

class number 
{
	   private :
	   	
	   	   int num;
	   	   
	   public :
	   
	       number(int n) : num(n)
	       {
		   }
		   friend int max(number n1,number n2);
		   	   
};

int max(number n1,number n2)
{
	return (n1.num>n2.num) ? n1.num : n2.num;
}

int main()
{

      int a,b;
      
      cout<<"\nenter value of a = ";
      cin>>a;
      cout<<"\nenter value of b = ";
      cin>>b;
      
      number num1(a),num2(b);
      
      int maxnumber = max(num1,num2);
      
      cout<<"\nmax number is = "<<maxnumber;
      
      return 0;
}

