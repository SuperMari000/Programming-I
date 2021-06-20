#include<iostream>
using namespace std;
int main(){
	for(int i=100;i<=1000;i+=100){
		if(i == 300 || i == 500)
			continue;
		cout<<i<<" ";
			
	}
}

// print 100 200 400 600 700 800 900 1000
