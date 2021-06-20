#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int z[n+1],count;
	bool h[n+1];
	for(int i=0;i<n;i++){
		cin>>z[i];
		h[i]=true;
	}
	
	for(int i=0;i<n;i++){
		if(h[i]==true){
			count=0;
			for(int j=0;j<n;j++){
				if(z[i]==z[j]){
					count++;
					h[j]=false;
				}
			}
			cout<<z[i]<<" count is "<<count<<endl;
		}
	}

}

