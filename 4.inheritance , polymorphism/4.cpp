/* write a c++ program to display student mark sheet using multiple inheritance .*/

#include<iostream>
using namespace std;

class student 
{
	
	       protected :
	       	
	       	int roll;
	       	string name;
	       	
	       	public :
	       		
	       		void studentdetail(int r,string n)
	       		
	       	{
	       	    roll = r;
	       		name = n;
	       		
	        }	
	        
	        
};

class mark
{
	
	    protected :
	    	
	         int math;
	         int science;
	         int english;
	       
		 void setmarks(int m1,int s2,int e3)
		 {
		 	
		 	
		 	math = m1;
			science = s1;
			english = e1;  
		 	 
		 	
		 }
		 
		 	        
	        
};


class marksheet : public student,public mark

{
	void  display()
	{
		cout<<"\nname = "<<name;
		cout<<"\nroll no = "<<roll;
		cout<<"\nmath = "<<math;
		cout<<"\nscience = "<<science;
		cout<<"\nenglish = "<<english;
		
		int total = math + science + english;
		float percentage = total / 3;
		
		cout<<"\ntotal mark = "<<total;
		
		cout<<"\npercentage = "<<percentage;
		
		
	 } 
};

int main()
{
	student s1;
	
	
	
	return 0;
	
}
