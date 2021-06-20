#include<iostream>
using namespace std;
float fun1(float x,float i){
	float fa;
	if(i==0)
		fa=1;
	else{
		fa=1;
		for(int y=1;y<=i;y++)
			fa=fa*x;
	}
	float v=fa;
return v;
}
float fun2(float x,float i){
	float fa;
	if(i==0)
		fa=1;
	else{
		fa=1;
		for(int y=1;y<=i;y++)
			fa=fa*y;
	}
	float v=fa;
return v;
}


int main(){
	float e,x,i,sum=0,z;

	cout<<"entre x:";
	cin>>x;
	cout<<"entre terms:";
	cin>>z;
	for(i=0;i<z;i++){
		sum=sum+(fun1(x,i)/fun2(x,i));
		
	}
	cout<<"the result="<<sum;
	
}
