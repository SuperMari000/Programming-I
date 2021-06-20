#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int z[n+1];
	for(int i=0;i<=n;++i)
		z[i]=i;
	int x;
	cout<<"enter max power : ";
	cin>>x;
	for(int h=0;h<=x;++h){
		printf("power %-5d : ",h);
		for(int i=0;i<=n;++i){
			int v=1;
			for(int y=0;y<h;++y)
				v*=z[i];
			printf("%-10d",v);
		}
		cout<<"\n";
	}
	return 0;
}
