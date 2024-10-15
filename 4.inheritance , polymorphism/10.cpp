/*write a c++ program to concatenate the two string using operator overloading*/

#include<iostream>

using namespace std;

class string
{
	
	        private :
	        	
	        	 char *str;
	        	 int length;
	        	 
	        public :
			
			     string(const char*s=" ")
				 {
				 	length = strlen(s);
				 	str = new char[length + 1];
				 	strcpy(str,s);
				}
				
				~string ()
				{
					delete[]str;
					
			    }
				
				string operator + (const string &s)
				{
					string result;
					
					result.length = length + s.length;
					result.str = new char[result.length + 1];
					
					strcpy(result.str,str);
					strcat(result.str,s.str);
					return result;
					 }	 
					 
					 void display()
					 {
					 	cout<<"\n"<<str;
					 }
 }; 
 
 int main()
 {
 	string s1("hello,");
 	string s2("world");
 	
 	string s3 = s1 + s2;
 	
 	cout<<"concated string = ";
 	s3.display();
 	
 	return 0;
 }
