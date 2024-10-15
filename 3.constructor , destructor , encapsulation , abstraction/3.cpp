/*write a c++ program to create a class called  car that has private member variablle for compny , model , annd year
implement member function to get and set variables*/

#include<iostream>
using namespace std;

class car
{
	
	   private :
	   	
	   	        string compny;
	   	        string model;
	   	        int year;
	   	        
	   public :
	   
	       void setvalue(string c , string m , int y)
		   {
		   	
		   	 compny = c;
		   	 model  = m;
		   	 year   = y;
		   	
		   }	        
		   void getvalue()
		   {
		   	
		   	 cout<<"\ncompny name = "<<compny;
		   	 cout<<"\nmodel name = "<<model;
		   	 cout<<"\nyear = "<<year;
		   }
};

int main()
{
	
	car c1,c2,c3;
	
	c1.setvalue("toyota","topmodel",2023);
	c2.setvalue("honda","base",2020);
	
	c1.getvalue();
	c2.getvalue();
	return 0;
	
}


