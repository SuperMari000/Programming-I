#include<iostream>
using namespace std;
int main(){
	double a,b;
	cout<<"Enter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	
	cout<<"\nSum = "<<a+b;
	cout<<"\nSubtract = "<<a-b;
	cout<<"\nMultiplication = "<<a*b;
	if(b==0)
		cout<<"\nEroor !! Division By Zero";
	else
		cout<<"\nDivision = "<<a/b;
	
	return 0;
}
