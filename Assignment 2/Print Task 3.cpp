#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	for(int i=1;i<n;++i){
		for(int j=i;j<n;++j)
			cout<<" ";
		for(int j=n-i+1;j<n;++j)
			cout<<"*";
		cout<<"*";
		for(int j=n-i+1;j<n;++j)
			cout<<"*";
		cout<<"\n";
	}
	for(int i=1;i<2*n;++i)
		cout<<"*";
	cout<<"\n";
	for(int i=n-1;i>0;--i){
		for(int j=i;j<n;++j)
			cout<<" ";
		for(int j=n-i+1;j<n;++j)
			cout<<"*";
		cout<<"*";
		for(int j=n-i+1;j<n;++j)
			cout<<"*";
		cout<<"\n";
	}
   	
	system("pause");
	return 0;
}
