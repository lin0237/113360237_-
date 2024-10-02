#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout << "Please enter three integers" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	 
	if(a>=b && a>=c)
	{
	   if(b>=c)
	   {
	   	 cout<<"The largest integers in the group is "<<a<<" and the smallest integers in the group is "<<c;
	   }
	   else 
	   {
	     cout<<"The largest integers in the group is "<<a<<" and the smallest integers in the group is "<<b;
	   }  
	}
	
	if(b>=a && b>=c)
	{
	   if(a>=c)
	   {
	   	 cout<<"The largest integers in the group is "<<b<<" and the smallest integers in the group is "<<c;
	   }
	   else 
	   {
	     cout<<"The largest integers in the group is "<<b<<" and the smallest integers in the group is "<<a;
	   }  
	}
	
	if(c>=a && c>=b)
	{
	   if(a>=b)
	   {
	   	 cout<<"The largest integers in the group is "<<c<<" and the smallest integers in the group is "<<b;
	   }
	   else 
	   {
	     cout<<"The largest integers in the group is "<<c<<" and the smallest integers in the group is "<<a;
	   }  
	}
 return 0;	
}
