#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"entre x:";
	cin>>x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++)
			cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		cout<<"============="<<endl;
	}
	
	return 0;
}
