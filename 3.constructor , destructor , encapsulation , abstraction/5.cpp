/*write a c++ program to create a class called triangle that has private member variables for the length of
three sides. implements member function to determine if the triangle is equilateral , isosceles or scalence.*/ 

#include<iostream>
using namespace std;

class triangle

{
	        private :
	        	
	        	double side1;
	        	double side2;
	        	double side3;
	        	
	        public :
			
			    triangle(double s1,double s2,double s3)
				{
					
					side1 = s1;
					side2 = s2;
					side3 = s3;
					
			    }
			    
		double equilateral()
			{
				return (side1 == side2 && side2 == side3);
				
			}
		double isosceles()
			{
			
			    return(side1 == side2 || side2 == side3 || side1 == side3);
		    }
		double scalence()
			{
				
			return(side1 != side2 && side2 != side3 && side1 != side3);
			
         }
};

int main()

{
	double s1,s2,s3;
	
	cout<<"\nenter the first side = ";
	cin>>s1;
	cout<<"\nenter the second side = ";
	cin>>s2;
	cout<<"\nenter the third side = ";
	cin>>s3;
	
	triangle t1(s1,s2,s3);
	
	if(t1.equilateral())
	{
		cout<<"\nthe triangle is equilateral.";
	}
	else if(t1.isosceles())
	{
		cout<<"\nthe triangle is isosceles.";
	}
	else if(t1.scalence())
	{
		cout<<"\nthe triangle is scalence.";
	}
	
	else
	{
		cout<<"\ntriangle is not posible";
	}
	
	return 0;
	
}


