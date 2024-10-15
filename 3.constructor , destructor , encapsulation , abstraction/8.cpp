/* write a c++ program to implements a class called student that has private memeber
   variable for name,class ,roll no ,and marks .include member function to calaculate 
   the grade based on the marks and display the students informations.accept address
  from each student implimenets using of aggregation.*/
  
#include<iostream>
using namespace std;

class address
{
	    private :
	     
		    string city;
			string state;
			string pincode;
			
		public :
		
		address(string c,string s,string p)
		{
			 city = c;
			 state = s;
			 pincode = p;
			
		}
};

class student 
{
	  private :
	  	
	  	 string name;
	  	 string studentclass;
	  	 int rollno;
	  	 float marks;
	  	 Address* address;
	  	 
	  public :
	  
	     student(string n,string sc,int r,float m ,Address* a)
		 {
		 	name = n;
		 	studentclass = sc;
		 	rollno = r;
		 	marks = m;
		 	address = a;
		 	
	     }	 
	     
	     char calgrade()
	     {
	     	if(marks>90)
	     	{
	     		cout<<"A";
	     		
			}
			else if(marks>=80)
			{
				cout<<"B";
			}
			else if(marks>=70)
			{
				cout<<"C";
			}
			else if(marks>=60)
			{
				cout<<"D";
			}
			else
			{
				cout<<"E";
			}
		 }
		 
		 void display()
		 {
		 	cout<<"\nname = "<<name;
		 	cout<<"\nclass = "<<studentclass;
		 	cout<<"\nroll no = "<<rollno;
		 	cout<<"\nmarks = "<<marks;
		 	cout<<"\ngrade = "<<calgrade();
		 	cout<<"\nAddress = "<<address->state<<" "<<address->pincode;
		 }
	  	 
};

int main()
{
	Address* a1 = new Address("123 mainbajar","gujrat","675489");
	
	student s1("mehul","11th",111,85.2,a1);
	s1.display();
	
	
	return 0;
	
	
}
   
  
