#include<iostream>
using namespace std;
int main(){
	int y,x,total=0;
	cout<<"etre number:";
	cin>>y;
	
	for(x=1;x<=y;x++){
		if(x%2==1)
			total=total+x;
	}
	cout<<"total="<<total;
	
	return 0;
}
