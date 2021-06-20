#include<iostream>

using namespace std;

int main(){
		
	float celsius,fahrenheit;
	
	cout<<"Write The Fahrenheit Degree : ";
	cin>>fahrenheit;
	
	celsius=(5.0/9)*(fahrenheit-32);
	
	cout<<"The Celsius Degree = "<<celsius;
	
	return 0;
}
