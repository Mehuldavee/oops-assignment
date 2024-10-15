/* create a class personn having members name and age. derived a class  student having member percentage.derive another class having
   member percentage.derive another class having member function to initialize , read and write data write also main function
   (multiple inheritance)*/
   
 #include<iostream>
 using namespace std;
 
 class person
 {
 	
 	          protected :
 	          	
 	          	string name;
 	          	int age;
 	          	
 	          public :	
 	          	
 	          	void persondata()
 	          	{
 	          		cout<<"\nenter person name = ";
 	          		cin>>name;
 	          		cout<<"\nenter person age = ";
 	          		cin>>age;
 	          		
				}
				
				void displaypdata()
				{
					cout<<"\nname ="<<name;
					cout<<"\nage = "<<age;
					 
				}
 };
 
 class student : virtual public person
 {
 	
 	          protected :
 	          	
 	          	float percentage;
 	          	
 	          public :
			   	
 	          	
 	          void studentdata()
 	          {
			   
 	          persondata();
 	          
			   
			   	cout<<"\nenter the percentage = ";
			   	cin>>percentage;
			   	
			   }
			   void displaysdata()
			   {
			   	cout<<"\nstudent percentage = "<<percentage;
			   	
			   } 	
 };
 
 class teacher : virtual public person
 {
 	
 	        protected :
 	        	
 	        	float salary;
 	        	
 	        public :
			 
			 void techerdata()
			 {
			 
			 persondata();
			 
			 
			 	cout<<"\nenter  salary = ";
			 	cin>>salary;
			 	
			 }	
			 void displaytdata()
			 {
			 	displaypdata();
			 	cout<<"\nsalary is = "<<salary;
			 }
			 
			 
			 
			 
 };
 class workingstudent :  public student,public teacher 
 
 {
 	public :
	  
	         void workingstudentdata()
	         {
	         	persondata();
	         	
	         	cout<<"\nenter percentage = ";
	         	cin>>percentage;
	         	cout<<"\nenter salary= ";
	         	cin>>salary;
			 }
			 
			 void displaywstudent()
			 {
			 	displaypdata();
			 	cout<<"\npercentage = "<<percentage;
			 	cout<<"\nsalary = "<<salary;
			 }
 		
 		
 };
 
 int main()
 {
 	workingstudent w1;
 	w1.workingstudentdata();
 	w1.displaywstudent();
 	
 	return 0;
 	
 	
 }
 
 
 
 	
     
