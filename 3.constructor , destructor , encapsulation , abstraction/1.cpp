/*write a program find the multiplication values ises inline function to find the multiplication 
and cubic values.*/

#include<iostream>
using namespace std;



 inline int multiplication(int a , int b)
 {
 	return a * b;
 }
 
   inline int cube(int a)
   {
   	  return a*a*a;
   	
   }



int main()
{
   int num1 , num2;
   
   cout<<"\nenter value num1  = ";
   cin>>num1;
    cout<<"\nenter value num2  = ";
   cin>>num2;
   cout<<"multiplication is = "<<multiplication(num1,num2)<<endl;
   
   cout<<"\nener the value you want to cube = ";
   cin>>num1;
   cout<<num1<<"cube is"<<cube(num1)<<endl;
   
   return 0;
}

 
