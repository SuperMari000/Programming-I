#include<iostream>
using namespace std;

double fun1(double x,double i){
	double fa=1;
	for(int z=1;z<=(i+1);z++){
		fa=fa*(-1);
	}
	return fa;
}
double fun2(double x,double i){
	double fa=1;
	if(i != 1){
		for(int z=1;z<=(2*i-2);z++)
		    fa=fa*x;
	}
	return fa;
}
double fun3(double x,double i){
	int fa=1;
	if(i != 1){
	    for(int z=1;z<=(2*i-2);z++)
		    fa=fa*z;
	}
	return fa;
}

int main(){
    double sum=0,x,n,i;
    cout<<"entre x:";
    cin>>x;
    cout<<"entre n:";
    cin>>n;
	for(i=1;i<=n;i++){
		sum=sum+(fun1(x,i)*(fun2(x,i)/fun3(x,i)));
	}
	
	cout<<"COS "<<x<<" = "<<sum;
}


