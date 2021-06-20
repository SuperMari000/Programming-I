#include<iostream>
using namespace std;
int main(){
	int n,d,x,y;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>d;
		if(i==0){
			x=d;
			y=d;
		}else{
			if(d>x)
				x=d;
			if(d<y)
				y=d;
		}
	}
	
	cout<<"the largest numbre "<<x<<endl;
	cout<<"the smallest numbre "<<y<<endl;
}
