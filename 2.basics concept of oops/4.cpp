/* write a c++ program to implement a class called a circle that has private member variable for radius.
inludemember function to calculate the circle's arey and circumference */

#include<iostream>
using namespace std;

class circle

{
	       private :
	       	
	       	  double radius;
	       	  
	       public :
		   
		      circle(double r)
			 {
			 	radius = r;
			 	
			 }
			 
			 double area()
			 {
			 	return 3.14 * radius * radius; 
			 	
		     } 	 
		     double circumference()
		     {
		     	return 2 *3.14 * radius;
		     	
			 }
			 
			 void setradius(double r)
			 {
			 	radius = r;
			 }
			 
			 double  getradius()
			 {
			 	return radius;
			 }
			 
			 
};

int main()

{
	double r;
	cout<<"\nenter the radius of circle = ";
	cin>>r;
	
	circle c1(r);
	
	cout<<"\narea of the cirle = "<<c1.area();
	cout<<"\ncircumference of the circlle = "<<c1.circumference();
	
return 0;	
}


