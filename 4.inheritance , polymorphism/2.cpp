/*write a c++ program to find area of rectangle using inheritance */

#include<iostream>
using namespace std;

class shape
{
	  
	         public :
	         	int width,height;
	         	
	         	void data()
	         	{
				 
	         	cout<<"\nenter the width = ";
	         	cin>>width;
	         	cout<<"\nenter the height = ";
	         	cin>>height;
	         }
	         	
};

class rectangle : public shape
 
{
	public :
		
		
		   int calarea()
		{
		      
		   return  width * height;

}
   
         void display()
         {
         	cout<<"\nthe area of the recangle is = "<<calarea();
		 }
	         
};

int main()
{
	rectangle r1;
	r1.data();
	r1.display();
	return 0;
	 
	
		
	return 0;
}

   
