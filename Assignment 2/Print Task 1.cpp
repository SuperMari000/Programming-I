#include<iostream>
using namespace std;
int main(){
	int h=0;
	for(int x=0;x<5;x++){
		for(int y=4;y>x;y--)cout<<"*";
		cout<<"*";
		if(x>0){
		for(int y=0;y<=h;y++)cout<<" ";
		cout<<"*";
		h=h+2;}		
		for(int y=4;y>x;y--)cout<<"*";

	cout<<endl;
	}
	h=5;
	for(int x=3;x>=0;x--){
		for(int y=4;y>x;y--)cout<<"*";
		cout<<"*";
		if(x>0){
		for(int y=0;y<h;y++)cout<<" ";
		cout<<"*";
		h=h-2;}	
		for(int y=4;y>x;y--)cout<<"*";

	cout<<endl;
	}

}
