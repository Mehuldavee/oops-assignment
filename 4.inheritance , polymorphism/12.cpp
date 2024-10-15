/*write a c++ programto swap 2 number using friend function witout using third variable*/


#include<iostream>
using namespace std;

class number
{
	    private :
	    	 int a;
	    	 int b;
	    	 
	    public :
		
		      number(int x,int y)   : a(x),b(y) {}
		     
			  
		void display()
		{
			
			cout<<"\nA = "<<a;
			cout<<"\nB = "<<b;
			
			
	    }
		
		friend void swap(number &num);	  
			  	 
};

void swap(number & num)
{
	num.a = num.a + num.b;
	num.b = num.a - num.b;
	num.a = num.a - num.b;
}

int main()
{
	number n1(5,10);
	
	cout<<"\nbefore swaping = ";
	n1.display();
	
	swap(n1);
	
	
	cout<<"\nafter swaping = ";
	n1.display();
	
	return 0;
}
