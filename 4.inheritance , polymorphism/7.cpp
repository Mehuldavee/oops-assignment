/*write a c++ program to illustrates the use of constructor in multilavel inheritance*/

#include<iostream>
using namespace std;

class base 
{
	
	  public :
	  	
	  	  base()
	  	  {
	  	  	cout<<"\nbase class constructor is called";
			}
};

class derived1 : public base
{
	  public :
	  	
	  	
	  	 derived1()
	  	 {
	  	 	cout<<"\nderived 1 class called";
		   }
};

class derived2 : public derived1
{
	 public :
	 	  derived2()
	 	  {
	 	  	cout<<"\nderived 2 class constructor called";
		   }
};

int main()
{
	//base b1;
	//derived1 d1;
	derived2 d2;
	return 0;
}
