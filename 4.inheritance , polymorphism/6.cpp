/*write a c++ program to show access to privare public and protected using inheritance*/

#include<iostream>
using namespace std;

class first
{
	private :
		int privatevar;
		
    public :
	    int publicvar;
		
	protected :
	    int protectedvar;
		
	first()
	{
	
	    privatevar = 1;
		publicvar  = 2;
		protectedvar = 3;
	}
	
	int getprivatevar()
	{
		return privatevar;
	}
};

class second : public first
{
	public :
		
		 void display()
		 {
		 	
		 	cout<<"\nprivate variable = "<<privatevar;
		 	cout<<"\npublic variable = "<<publicvar;
		 	cout<<"\nprotected variable = "<<protectedvar;
		 	cout<<"\nprivate variable "<<getprivatevar();
		 }
};

int main()

{
	second s1;
	
	s1.display();
	cout<<"\nprotected variable  "<<s1.protectedvar;
	cout<<"\npublic variable "<<s1.publicvar;
	
	return 0;
	
}
