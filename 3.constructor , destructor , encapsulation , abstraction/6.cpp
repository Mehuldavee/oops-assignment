/* write a c++ proogram to  implement class called a employee that has private data memeber variables for name,
employee id, and salary include member fuction to calculate and set salary  based on employee prfomence
 using of constructor*/
 
#include<iostream>
using namespace std;

class employee 
{
	            private :
	            	
	            	string name;
	            	int employeeid;
	            	double salary;
	            	
	            public :
				
				   employee(string empname , int empid , double empsalary)
				   {
				   	 name = empname;
				   	 employeeid   = empid;
				   	 salary = empsalary;
				   	
				   } 	
				   
				void setsalary(char performence)
				{
					
					if(performence == 'A')
					{
						salary *=10;
					}
					
					else if(performence == 'B')
					{
						salary *=5;
					}
					else if(performence == 'c')
					{
						salary *=2;
					}
					else
					{
						cout<<"\nnot good perfomence";
					}
					
					
			    }
			    
			    void displayempinfo()
			    {
			    	cout<<"\nname = "<<name;
			    	cout<<"\nid = "<<employeeid;
			    	cout<<"\nsalary = "<<salary;
				}
			    
	
 }; 
 
 int main()
 {
 	string name;
 	int id;
 	double salary;
 	char perfomence;
 	
 	cout<<"\nenter the name = ";
 	cin>>name;
 	cout<<"\nenter the id = ";
 	cin>>id;
 	cout<<"\nenter the salary = ";
 	cin>>salary;
 	cout<<"\nperfomence (a,b,c)";
 	cin>>perfomence;
 	
 	employee e1(name,id,salary);
 	
 	e1.setsalary(perfomence);
 	e1.displayempinfo();
 	
 	return 0;
 	
 	
 }
