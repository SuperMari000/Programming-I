#include<iostream>
using namespace std;
int main()
{
	long long x,factorial=1;
	cout<<"plase entre x:";
	cin>>x;
	
	for(int num=1;num<=x;num++)
		factorial=factorial*num;
	
	cout<<"factorial = "<<factorial;

	return 0;
}
