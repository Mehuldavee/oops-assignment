/*write a c++ program to implement a class called date that has private member variable for day  , month ,,year
  include member function to set and get these variable as well as to validate if the date is valid  */

#include <iostream>
#include <string>
using namespace std;

class date 

{
	          private :
	          	
	          	    int day;
	          	    string month;
	          	    int year;
	          	    int count = 0;
	          	    
	          public :
			  
			        void set(int d,int m,int y)
				{
				   if(m==2 && y%4==0 && (d>=1 && d<=28))
				   {
				   	    day = d;
				   	    month = "february";
				   	    year = y;
				   }
				   else if(m==2 && y%4!=0 && (d>=1 && d<=29))
				   {
				   	    day = d;
				   	    month = "february";
				   	    year = y;

				   	
				   }
				   
				else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
				   {
				   	day =d;
				   	
				   	switch(m)
				   	
				   	{
				   		case 1 :
				   			
				   			    month =  "january";
				   	     break;
							
						case 3 :
				   			
				   			     month = "march";
				   	     break;	
						
						case 5 :
				   			
				   			     month = "may";
				   	     break;	
							
						case 7 :
				   			
				   			     month = "july";
				   	     break;	
							
						case 8 :
							
	                              month = "august";			   			
				   			     
				   	     break;	
							
						case 10:
				   			
				   			     month = "october";
				   	     break;	
							
						case 12:
				   			
				   			      month = "decemmbr";
				   	     break;
						}
				   		
				   		year = y;
					}
					    else if(m==4 || m==6 || m==9 || m==11  && (d>=1 && d<=31))
					    {
						
					    day = d;
					    switch(m)
					    
					    {
					    	case 4 :
					    		 
					    		  month ="april";
					    		  break;
					    		  
					    	case 6 :
					    		 
					    		  month = "june";
					    		  break;
					    		  
					    	case 9 :
					    		 
					    		  month = "september";
					    		  break;
	  
	  
					    	case 11 :
					    		 
					    		  month = "november";
					    		  break;
					    		  
					    }
					    year = y;
					
				   }
				   else
				   {
				   	count++;
				   }
					
					
				}
				
				    void get()
				    {
				      if(count==0)
				      {
				      	cout<<"\n"<<day<< "-" <<month<< "-" <<year; 
					  }
					  else
					  {
					  	cout<<"\ninvalid values";
					  }
					}
							    
};

int main()
{
	int day;
	int month;
	int year;
	
	cout<<"\nenter the day = ";
	cin>>day;
	cout<<"\nenter the month = ";
	cin>>month;
	cout<<"\nenter the year = ";
	cin>>year;
	
	date d1;
	d1.set(day,month,year);
	d1.get();
	
	return 0;
}

