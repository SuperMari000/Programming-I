#include<iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"Enter Number 1 : ";
	cin>>x;
	cout<<"Enter Number 2 : ";
	cin>>y;
	if(x>y)
		cout<<x<<" > "<<y;
	else if(x<y)
		cout<<x<<" < "<<y;
	else
		cout<<x<<" = "<<y;
	return 0;
}
