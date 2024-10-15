/*write a program to create a class called person that has private memeber variable for name age and country.
implement member funcion to set and get the value of these variable*/

#include<iostream>
using namespace std;

class person
{
	
	         private :
	         	
	         	string name;
	         	int age;
	         	string country;
	         	
	         public :
			 
			void setvalue(string n , int a , string c)
				{
					name = n;
					age = a;
					country = c;
					
				}
			void getvalue()
			{
				
				cout<<"\name  ="<<name;
				cout<<"\nage  ="<<age;
				cout<<"\ncountry ="<<country;
				
			}
					
			
	         	
};

int main()
{
	person p1;
	
	p1.setvalue("mehul",21,"radhanpur");
	p1.getvalue();
	
	
}

            
