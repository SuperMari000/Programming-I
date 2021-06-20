#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool y[n+1]= {1,1};
	//___i*i<=x == i<=sqrt(x)__//
	for(int i=2;i<=sqrt(n);i++) 
		for(int j=i;j<=n/i;j++)
			y[j*i]=1;
	for(int i=0;i<=n;++i)
		if(y[i]==0)
			cout<<i<<" ";
	
	return 0;
}
