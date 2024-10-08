/* write a program to calulate the area of circle , rectangle and triangle
   using function overloading
   rectangle : area * breadth
   triangle : area 1/2 * area * breadth
   circle : pi*area * area */
   
#include<iostream>
using namespace std;

class areacount
{
	
	    public :
	    	
	    	 double area(double length,double breadth)
	    	 {
	    	 	return length * breadth;
			 }
			 
			 double area(double base,double height,bool triangle)
			 {
			 	return 0.5 * base * height;
			 }
			 
			 double area(double radius)
			 {
			 	const double pi = 3.14;
			 	return pi * radius * radius;
			 }
	    	 
	};
	
int main()
{
	areacount c1;
	double  length,breadth,base,height,radius;
	
	cout<<"\nenter length and breadth of rectangle = ";
	cin>>length>>breadth;
	cout<<"\narea of rectangle = "<<c1.area(length,breadth);
	
	cout<<"\nenter base and height of triangle = ";
	cin>>base>>height;
	cout<<"\narea of triangle ="<<c1.area(base,height); 
	
	
	
	cout<<"\nenter the area of  circle = ";
	cin>>radius;
	cout<<"\narea of circle  = "<<c1.area(radius);
	
	return 0;
	
}	    
