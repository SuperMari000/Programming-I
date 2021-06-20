#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int x;
	cin>>x;
	bool y[x+1]= {1,1};
	//___i*i<=x == i<=sqrt(x)__//
	for(int i=2; i<=sqrt(x); i++) {
		for(int j=i; j<=x/i; j++)
			y[j*i]=1;
	}

	for(int i=x,j=2;i>=1&&j<=x;){
		if(i%j==0 && y[j]==false){
			cout<<j<<" ";
			i=i/j;
		}
		else
			j++;
			
	}
	
	return 0;
}
