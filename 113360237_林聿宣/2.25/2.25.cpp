#include <iostream>
using namespace std;

int main(){
   for(int i=1;i<=27;i++)
   {
   	  for(int j=1;j<=13;j++)
   	  {
   	  	 if(i==1)
   	  	 {
   	  	 	if(j<=13)
   	  	 	{
   	  	 	  cout<<"L"; 
			}
		 }
		 
		  if(i>=2 && i<=5)
   	  	 {
   	  	 	if(j<2)
   	  	 	{
   	  	 	  cout<<"L"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		 if(i==7 || i==13)
   	  	 {
   	  	 	if(j==12)
   	  	 	{
   	  	 	  cout<<"Y"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		  if(i==8 || i==12)
   	  	 {
   	  	 	if(j==11)
   	  	 	{
   	  	 	  cout<<"Y"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		  if(i==9 || i==11)
   	  	 {
   	  	 	if(j==10)
   	  	 	{
   	  	 	  cout<<"Y"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		  if(i==10)
   	  	 {
   	  	 	if(j<=9)
   	  	 	{
   	  	 	  cout<<"Y"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		  if(i==15 || i==27)
   	  	 {
   	  	 	if(j==1 || j==13)
   	  	 	{
   	  	 	  cout<<"X"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		 if(i==16 || i==26)
   	  	 {
   	  	 	if(j==2 || j==12)
   	  	 	{
   	  	 	  cout<<"X"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		 if(i==17 || i==25)
   	  	 {
   	  	 	if(j==3 || j==11)
   	  	 	{
   	  	 	  cout<<"X"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		 if(i==18 || i==24)
   	  	 {
   	  	 	if(j==4 || j==10)
   	  	 	{
   	  	 	  cout<<"X"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		 if(i==19 || i==23)
   	  	 {
   	  	 	if(j==5 || j==9)
   	  	 	{
   	  	 	  cout<<"X"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		 if(i==20 || i==22)
   	  	 {
   	  	 	if(j==6 || j==8)
   	  	 	{
   	  	 	  cout<<"X"; 
			}
			else
			{
			  cout<<" ";
			}
		 }
		 
		 
		 if(i==21)
   	  	 {
   	  	 	if(j==7)
   	  	 	{
   	  	 	  cout<<"X"; 
			}
			else
			{
			  cout<<" ";
			}
		 }	 
	  }
	  cout<<endl;  
	} 
	return 0;
}
