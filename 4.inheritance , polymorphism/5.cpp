/*assume that the test results of a batch of students are stored in three different 
  classes.class students are storing the roll number.class test stores the marks obained 
  in two subjects and class result cointains the total marks obtained in the test.th class
  result can inherit the details of the marks obtained in the test and roll number of 
  students.(multilavel inheritance).*/
  
  #include<iostream>
  using namespace std;
  
  class student
  {
  	    protected :
  	    	
  	    	   int rollno;
  	    public : 	   
  	    	   
  	    void setrollno(int r)
		  {
		  	rollno = r;
		  	
		  } 	   
		  
		 void displayrollno()
		 {
		 	
		 	cout<<"\nroll no = "<<rollno;
		  } 
  	
  };
  
  class test : public student
  {
  	   protected :
  	   	
  	   	     float sub1;
  	   	     float sub2;
  	   	     
  	   	public :     
  	   	     
  	   void setmarks(float s1,float s2)
		 {
		 	
		 	sub1 = s1;
		 	sub2 = s2;
		 	
		 }
		 
		 void displaymarks()
		 {
		 	cout<<"\nsub1 = "<<sub1;
		 	
		 	cout<<"\nsub2 = "<<sub2;
		 }
	
	
  };
  
  class result : public test
  {
  	 public :
  	  void displayresult()
  	  {
  	  	
  	  	float total  = sub1 + sub2;
  	  	displayrollno();
  	  	displaymarks();
  	  	
  	  	cout<<"\ntotal marks = "<<total;
  	  	
      }
  	
  };
  
  int main()
  {
  	
  	result r1;
  	r1.setrollno(111);
  	r1.setmarks(78.98,99.0);
  	r1.displayresult();
  	
  	return 0;
  	  	
  	
  	
  }
  
