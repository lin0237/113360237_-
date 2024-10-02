#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=53;j++)
		{
		   if(i==1 || i==9)
		   {
			  if(j<=9 || (j>=21 && j<=23) || j==37 || j==49)
			  {
			    cout<<"*";
		   	  }
			  else
		 	  {
			    cout<<" ";
			  } 
		   }
		   
		   if(i==2) 
		   {
		   	  if(j==1 || j==9 ||j==19 || j==25 || (j>=36 && j<=38) || j==48 || j==50)
			  {
			  	cout<<"*";
			  }
			  else 
			  {
			  	cout<<" ";
			  }  
		   }
		   
		   if(i==3)
		   {
		   	  if(j==1 || j==9 || j==18 || j==26 || (j>=35 && j<=39) || j==47 || j==51)
		   	  {
		   	  	cout<<"*";
			  }
			  else
			  {
			  	cout<<" ";
			  }
		   }
		   
		   if(i==4 || i==6)
		   {
		   	  if(j==1 || j==9 || j==18 || j==26 || j==37 || j==46 || j==52)
		   	  {
		   	  	cout<<"*";
			  }
			  else
			  {
			  	cout<<" ";
			  }
		   }
		   
		   if(i==5)
		   {
		   	  if(j==1 || j==9 || j==18 || j==26 || j==37 || j==45 || j==53)
		   	  {
		   	  	cout<<"*";
			  }
			  else
			  {
			  	cout<<" ";
			  }
		   }
		   
		   
		   if(i==7)
		   {
		   	  if(j==1 || j==9 || j==18 || j==26 || j==37 || j==47 || j==51)
		   	  {
		   	  	cout<<"*";
			  }
			  else
			  {
			  	cout<<" ";
			  }
		   }
		   
		   if(i==8)
		   {
		   	  if(j==1 || j==9 || j==19 || j==25 || j==37 || j==48 || j==50)
		   	  {
		   	  	cout<<"*";
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
