/* write a c++ program to implement a class called a rectangle that has private member variable for
length and width  implement member function to calculate the rectangle  area and perimeter*/


#include<iostream>
using namespace std;

class rectangle

{
	       private :
	       	
	       	  double length , width;
	       	  
	       public :
		   
		      rectangle(double l, double w)
			 {
			 	length = l;
			 	width = w;
			 	
			 }
			 
			 double area()
			 {
			 	return  length * width; 
			 	
		     
		    }
		    double perimeter()
		    {
		    	return 2 * (length + width);
			}
			 
			 void setlength(double l)
			 {
			 	length = l;
			 	
			 }
			 void setwidth(double w)
			 {
			 	width = w;
			 }
			 
			 double getlength()
			 {
			 	return length;
			 }
			 
			 double getwidth()
			 {
			 	return width;
			 }
			 
			 
			
};

int main()
{
	double l,w;
	
	cout<<"\nenter the value of length of = ";
	cin>>l;
	cout<<"\nenter the value of width = ";
	cin>>l;
	
	rectangle r(l,w);
	
	cout<<"\nrectangle area  is = "<<r.area();
	cout<<"\nrectangle perimeter = "<<r.perimeter();
		
return 0;	
}


