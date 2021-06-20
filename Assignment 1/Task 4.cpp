#include<iostream>

using namespace std;

int main(){
	int x;
	cout<<"enter degree : ";
	cin>>x;
	if((x>=85)&&(x<=100)){
		cout<<"x is excellant";
	}else if((x>=75)&&(x<=85)){
		cout<<"x is very good";
	}else if((x>=65)&&(x<=75)){
		cout<<"x is good";
	}else if((x>=50)&&(x<=65)){
		cout<<"x is pass";
	}else if(x<50){
		cout<<"x is fail";
	}else{
		cout<<"degree not define";
	}

	return 0;

}
