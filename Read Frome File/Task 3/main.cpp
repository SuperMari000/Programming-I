#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<memory>
#include<iomanip>
using namespace std;
using std::shared_ptr;

struct play {
	int pos;
	string name;
	int win;
	int draw;
	int lose;
	int points;
};

void struct_vector_stringstream() {
	vector <shared_ptr<play>>players;
	ifstream file;
	file.open("Restore.txt");
	string line;

	while(getline(file,line)) {
		shared_ptr<play> play_(new play());
		string token;
		stringstream ss(line);

		getline(ss,token,'/');			//for pos
		istringstream pos_(token);
		pos_>>play_->pos;

		getline(ss,token,'/');			//for name
		stringstream name_(token);
		play_->name=name_.str(); 			//haaaaam

		getline(ss,token,'/');			//for win
		istringstream win_(token);
		win_>>play_->win;

		getline(ss,token,'/');			//for draw
		istringstream draw_(token);
		draw_>>play_->draw;

		getline(ss,token,'/');			//for lose
		istringstream lose_(token);
		lose_>>play_->lose;

		getline(ss,token,'/');			//for points
		istringstream points_(token);
		points_>>play_->points;


		players.push_back(play_);
	}



	file.close();
	system("color 71");
	cout<<"pos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
	for(auto val:players) {
		cout<<setw(8)<<setiosflags(ios::left)<<val->pos
		    <<setw(32)<<val->name
		    <<setw(8)<<val->win
		    <<setw(8)<<val->draw
		    <<setw(8)<<val->lose
		    <<setw(8)<<val->points
			<<endl<<endl;
	}
	//__*****print
	
	cout<<"pos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
	for(auto val:players) {
		printf("%-8d",val->pos);
		cout<<setw(32)<<setiosflags(ios::left)<<val->name;
		printf("%-8d%-8d%-8d%-8d\n\n",val->win,val->draw,val->lose,val->points);

	}	
	
	//__******************print
	cout<<"pos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
	for(auto val:players) {
		cout<<std::left
			<<setw(8)<<val->pos
		    <<setw(32)<<val->name
		    <<setw(8)<<val->win
		    <<setw(8)<<val->draw
		    <<setw(8)<<val->lose
		    <<setw(8)<<val->points
			<<endl<<endl;
	}
	
	
	
}


int main () {
	struct_vector_stringstream();
}
