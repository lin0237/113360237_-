#include <iostream>   
#include <iomanip>  
using namespace std; 

int main() { 
    int i,a,b;
    cout << setw(8) <<"number  ";
    cout << setw(8) <<"square   ";
    cout << setw(4) <<"cube\n" ;
    
    for(i=0;i<11;i++)
	{
     a=i*i;
     b=i*i*i;
     cout<<std::left<<setw(9)<<i;
     cout<<std::left<<setw(9)<<a;
     cout<<std::left<<setw(9)<<b<<"\n";
    }
    return 0; 
}
