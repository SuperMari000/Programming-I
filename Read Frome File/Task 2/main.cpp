#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;


int main(){
	fstream myfile;
	myfile.open("data.txt",ios::out|ios::in|ios::app);	
	
	int pos,win,draw,lose,points;
	string name;
	
	while(myfile>>pos>>name>>win>>draw>>lose>>points){
		cout<<setw(8)<<std::left<<pos
			<<setw(32)<<std::left<<name;
		printf("%-8d%-8d%-8d%-8d\n",win,draw,lose,points);
	}
	myfile.close();
}
