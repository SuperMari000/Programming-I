#include<iostream>
using namespace std;
int main()
{
	int x,sum=0,count=0;
	double avg;
	cout<<"please entre numbers:";
	while(true){
	    cin>>x;
		if(x>=0){
			sum=sum+x;
			count++;
		}
		else
			break;
	}
	avg=1.0*sum/count;
	cout<<"avg="<<avg;
	return 0;
}

/*
	Get all number and Terminate in negtave number and print avreage
*/
