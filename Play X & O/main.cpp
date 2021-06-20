#include<iostream>
#include<iomanip>
using namespace std;

string player[2];
string array[3][3];
bool exp[3][3]={0};


void print(string x[][3]){
	int n=25;
	for(int i=0;i<3;i++){
			
		cout<<"\t\t\t ";
		for(int l=0;l<74;l++)
			cout<<"-";
			
		for(int l=0;l<3;l++)
			cout<<"\n\t\t\t|"<<setw(n-1)<<" "<<"|"<<setw(n-1)<<" "<<"|"<<setw(n-1)<<" "<<"|";

		cout<<endl;
		cout<<"\t\t\t|";
		for(int k=0;k<3;k++){
		
			int h=n-x[i][k].length();
			cout<<setw(h/2)<<" "<<x[i][k]<<setw(h/2)<<" "<<"|";
			
		}
		
		for(int l=0;l<3;l++)
			cout<<"\n\t\t\t|"<<setw(n-1)<<" "<<"|"<<setw(n-1)<<" "<<"|"<<setw(n-1)<<" "<<"|";
		cout<<endl;
	}
	
	cout<<"\t\t\t ";
	for(int l=0;l<74;l++)
		cout<<"-";
	cout<<endl;
	
}

void print_final(int n){
	system("cls");
	cout<<"\n\n\n";
	print(array);
	cout<<"\n\n\n\n"<<setw(50)<<" ";
	int h=25-player[n-1].length();
	cout<<setw(h/2)<<" "<<player[n-1];
	cout<<"\n\n\n\n"<<setw(50)<<" ";
	cout<<"\tYOU WINER!!!!";
	cout<<"\n\n\n\n";
	exit(0);
}

void fun_for(string play[2],string x[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0)
				x[i][j]=play[i];
			if(i==1)
				x[i][j]="\0";
			if(i==2)
				x[i][j]=play[i-1];
		}
			
	}
	
}

int ReadInt(int low, int high) {
  int value;
  cin >> value;

  if (cin.fail()) {
    cout << "\n\n" << setw(78) << "ERROR: Expected integer input.." << "\n"
		 << setw(75) << "Try again - Enter number :";
    cin.clear();
    cin.ignore(10000,'\n');
    return ReadInt(low, high);
  }

  if (low <= value && value <= high)
    return value;

  cout << "\n\n" << setw(70)<< "ERROR: Expected range is low = " << low << ", high = " << high << "...\n\t\t\t\t\t\t Try again - Enter number :";
  return ReadInt(low, high);
}

bool dir(int n,int r,int c,int dd,int arr_r[],int arr_c[]){
	for(int i=0;i<3;i++){
		if(player[n-1]!=array[r][c])
			return false;
		r=r+arr_r[dd];
		c=c+arr_c[dd];
	}
	return true;
}

void test(int n){
	enum asd {down=0,right,down_right,down_left};
	int dir_r[4]={1     ,0    ,1         ,1       };
	int dir_c[4]={0     ,1    ,1         ,-1       };
	bool boolean_exp=0;
	if(n==1)
		boolean_exp=(exp[0][0]&&exp[0][1]&&exp[0][2]);
	else
		boolean_exp=(exp[2][0]&&exp[2][1]&&exp[2][2]);
		
	for(int i=0;i<3;i++){
		if(dir(n,0,i,down,dir_r,dir_c)&&boolean_exp)
			print_final(n);
		if(dir(n,i,0,right,dir_r,dir_c)&&boolean_exp)
			print_final(n);	
	}
	if(dir(n,0,0,down_right,dir_r,dir_c)&&boolean_exp)
		print_final(n);
	if(dir(n,0,2,down_left,dir_r,dir_c)&&boolean_exp)
		print_final(n);	

}

bool swaping(int n,int i,int j){
	bool boolean=player[n-1]==array[(i-1)/3][(i-1)%3]&&array[(j-1)/3][(j-1)%3]=="";
	if(boolean){
		swap(array[(i-1)/3][(i-1)%3],array[(j-1)/3][(j-1)%3]);
		exp[(i-1)/3][(i-1)%3]=1;
	}

	return boolean;
}

void fun1(string x[]){
	
	cout<<"please enter name of player one :";
	cin>>x[0];
	cout<<"\nplease enter name of player two :";
	cin>>x[1];
	x[0]=x[0].substr(0,20);
	x[1]=x[1].substr(0,20);
	if(x[0]==x[1]){
		cout<<"\n\n\t\t\t"<<x[0]<<" equal "<<x[1]<<endl;
		exit(0);
	}
	
	if(x[0].length()%2!=0)
		x[0]=x[0]+" ";
	if(x[1].length()%2!=0)
		x[1]=x[1]+" ";
}

void fun2(int n){
	
	cout<<"\n\n\n\n"<<setw(50)<<" ";
	int h=25-player[n-1].length();
	cout<<setw(h/2)<<" "<<player[n-1];
	
	cout<<"\n\n\n\t\t\t\t   "<<n<<" :please enter number square ele ayez tmasheh :";
	int i=ReadInt(1,9);
	
	cout<<"\n\n\n\t\t\t\t   "<<n<<" :please enter number square ele ayez thotfeh :";
	int j=ReadInt(1,9);

	if(swaping(n,i,j))
		test(n);
	else{
		system("cls");
		cout<<"\n\n\t\t\t\t\t\t\t  ERROR!!\n";
		cout<<"\n\t\t\t\t\t\t\t Try again\n\n\n";
		print(array);
		fun2(n);
	}
		
}

int main(){
	
	system("color 71");

	fun1(player);		//fun1
	
	fun_for(player,array);

	int ran=rand()%2+1;

	
	while(true){	
		system("cls");
		print(array);		//print
		if(ran==1){
			fun2(ran);
			ran=2;
			continue;
		}
	
		if(ran==2){
			fun2(ran);
			ran=1;
		}
	}
		
}
