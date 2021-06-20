#include<iostream>
using namespace std;


int main() {
	string x;
	getline(cin,x);
	bool flage[x.length()];
	for(int i=0; i<x.length(); i++)flage[i]=true;

	for(int i=0; i<x.length(); i++) {
		if(flage[i]==true) {
			int count=0;
			for(int j=0; j<x.length(); j++) {
				if(x.at(i)==x.at(j)) {
					count++;
					flage[j]=false;
				}
			}
			cout<<x.at(i)<<" count number is : "<<count<<endl;

		}
	}

}
