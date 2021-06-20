#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Entre a number : ";
	cin>>x;
	cout<<"The divisors are : ";
	for(int y=1;y<=x;y++){
		if(x%y==0)
			cout<<y<<" ";
	}		
}

