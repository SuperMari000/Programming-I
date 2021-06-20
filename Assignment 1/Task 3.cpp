#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"\n Enter Number1: ";
	cin>>a;
	cout<<"\n enter number2:";
	cin>>b;
	if(b>a){
		b=a;
		cout<<endl<<"a="<<a<<endl;
		cout<<endl<<"b="<<b<<endl;
	
	}else{
		a=b;
		cout<<endl<<"a="<<a<<endl; 
		cout<<endl<<"b="<<b<<endl;
	}

	return 0;
}
//WRITE ASINGLE IF THAT EXAMINES TWO INTEGER VARIABLES AND CHANGES THE LARGER TO SMALLER , USING ONLY ONE ELSE CLAUSE.
