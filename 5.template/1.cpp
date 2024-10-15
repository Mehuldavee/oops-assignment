/*write a program to swap to values using templates*/

#include<iostream>
using namespace std;
template<typename m>

void swapvalues(m &a ,m &b)
{
	
	 m temp = a;
	 a = b;
	 b = temp;
}

int main()

{
	  int a=10,b=20;
	  
	  cout<<"\nbefore swapping values of a = "<<a;
	  cout<<"\nbefore swapping values of b = "<<b;
	  
	  swapvalues(a,b);
	  
	  cout<<"\nafter swapping value of a = "<<a;
	  cout<<"\nafter swapping value of b = "<<b;
	  
	  return 0;
}


