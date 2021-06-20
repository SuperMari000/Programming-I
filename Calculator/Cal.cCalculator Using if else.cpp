#include<iostream>
using namespace std;
int main(){
    double fir_num;
	double sec_num;
	char ope;
	
    cout<<"simple c++ calculator program\n\n\n";

	cout<<"entre first number:";
	cin>>fir_num;
	cout<<"\n";
	
	cout<<"entre second number:";
	cin>>sec_num;
	cout<<"\n";
	
    cout<<"you can use + for addition \n";
    cout<<"you can use - for subtraction\n";
    cout<<"you can use * for multiplication\n";
    cout<<"you can use / for division\n";
    cout<<"\n";

	cout<<"entre ur operation:";
	cin>>ope;
	cout<<"\n";
    
    if(ope == '+'){
    	cout<<"the result is:"<<fir_num+sec_num<<"\n";
	}else if(ope == '-'){
		cout<<"the result is:"<<fir_num-sec_num<<"\n";
	}else if(ope == '*'){
		cout<<"the result is:"<<fir_num*sec_num<<"\n";
	}else if(ope == '/'){
		if(sec_num == 0){
			cout<<"division by zero\n";
		}else{
			cout<<"the result is:"<<fir_num/sec_num<<"\n";
		}
	}else{
		cout<<"invalid operation\n";
	}
    
    return 0;
}
	
