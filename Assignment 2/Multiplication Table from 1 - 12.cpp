#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	for(int i=0;i<70;i++)cout<<"-";
	cout<<endl<<"\t\t   Multiplication Table from 1 - 12 "<<endl;
	for(int i=0;i<70;i++)cout<<"-";
	cout<<endl<<"\t";
	for(int i=1;i<=10;i++)cout<<setw(5)<<i;
	cout<<endl;
	for(int i=0;i<70;i++)cout<<"-";
	cout<<endl;
	for(int i=1;i<=12;i++){
		cout<<setw(5)<<i<<"  |";
		for(int j=1;j<=10;j++)
			cout<<setw(5)<<i*j;
			
		cout<<endl;
	}
	for(int i=0;i<70;i++)cout<<"-";
	cout<<endl;
}

