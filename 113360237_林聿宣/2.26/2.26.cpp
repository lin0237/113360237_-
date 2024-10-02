#include <iostream>
using namespace std;

int main(){
	int a,b;
	
	cout << "Please enter two integers" << endl;
	cin >> a;
	cin >> b;
	
	if(a%b == 0)
	{
       cout<< "The first number is a multiple of the second number." ;
	}
	else
	{
	   cout<< "The first number is not a multiple of the second number." ;
	} 
	return 0;
}
