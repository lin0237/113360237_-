#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float h,w,bmi;
	
	cout << "Please enter your height(m) :" ;
	cin >> h;
	cout << "Please enter your weight(kg) :" ;
	cin >> w;
	bmi = w/pow(h,2);
	cout << "BMI "<<bmi<<endl;
	cout << "Underweight: less than 18.5"<<endl;
	cout << "Normal:      between 18.5 and 24.9"<<endl;
	cout << "Overweight:  between 25 and 29.9"<<endl;
	cout << "Obese:       30 or greater"<<endl; 
	
	return 0; 
}
