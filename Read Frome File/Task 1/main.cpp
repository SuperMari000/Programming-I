#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
 	char pos[15],name[15],math[15],prog[15];

	ifstream file;
	file.open("data.txt");
	
	while (!file.eof()){
		file.getline(pos,15,'#');
		file.getline(name,15,'#');
		file.getline(math,15,'#');
		file.getline(prog,15);
		
		if(!file.eof())
			cout<<pos<<"\t"<<name<<"\t\t"<<math<<"\t"<<prog<<endl;

	}
	
	file.close();
	return 0;
}
