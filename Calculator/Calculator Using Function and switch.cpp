#include <iostream>
using namespace std;

double addition (double x,double y){
	return x+y;
}
double subtraction (double x,double y){
	return x-y;
}
double division (double x,double y){
	if(y==0){
		
		cout<<"error division by zero";
		return 0;
    }
    else
    	return x/y;
}
double multiplication (double x,double y){
	return x*y;
}


int main (){
	
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

	
	switch (ope){
		
		case'+':
		 	cout<<"the result is:"
		      	<<addition (fir_num,sec_num);
		
			break;
		
		case'-':
		 	cout<<"the result is:"
		      	<<subtraction (fir_num,sec_num);
	 
	    	break;
	    
	    case'*':
		 	cout<<"the result is:"
			  	<<multiplication (fir_num,sec_num);
		
			break;
		
		case'/':
		 	cout<<"the result is:"
			  	<<division (fir_num,sec_num);
		
			break;
		
		default:
		 	cout<<"sorry ur operation is wrong";
		

	}

}

