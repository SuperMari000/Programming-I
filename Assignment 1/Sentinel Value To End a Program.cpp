#include<iostream>
using namespace std;

int main(){
	int my_number;
	cout<<"Enter Number : ";
	cin>>my_number;
	
	if(my_number == 0){
		return 0;
	}else{
		int answer=2*my_number;
		cout<<"Answer = "<<answer<<"\n";
		return 0;
	}
}
