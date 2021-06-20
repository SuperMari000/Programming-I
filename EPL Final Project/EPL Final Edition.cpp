//.................................... FCI Menofia University ...............................
//.........................  Submitted To : Dr. Hamdy M. Mousa ..............................
//....................This Application is Developed and Designed By DEV : ...................
//................................Mostafa Mounir Mostafa Shehab....................................
//.............................. Mohaned Yossry Abdulaziz Alfeqy.............................
//.................................. Mostafa Atef Mohamed Ali................................
//.................................Mostafa Abdulqader Al Afifi.............................
//...................................Mostafa Musaad Abdulaziz..............................
//....................................EPL APP Final Edition..................................

                                            
#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
//_____ Arrays Class___//
class classe{
	
      public:
      char pos[25];
      char team_name[25];
      char wins[25];
      char draw[25];
      char lose[25];
      char points[25];
      char opse[25];
      };
      
//________TEAMS_________//
void intro();
void manu_matches();
void manu_info();
void manu_squad();
void premier_league_statics();
//______________________//
//_______Get Date_________//
void date(){
	 time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    cout<< "\t\t\t\t    "<<(now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday;
         
}
//____Report___//
void report(){
	int y=0;
	string x;

    classe sh;
    ifstream table;
    fstream Report_File;
    table.open("Premier_League_Table_new.txt");
    Report_File.open("Report_File.txt", ios::out);
    int a,b,c,d,e,f;
    string k,l,m,n,o,p;
	cout << " \n Enter the Name of The team that You Want to Make Report For :D :";
	cin.ignore();
    getline(cin,x);
    cout<<endl;
   	cout<<"\n\t\t\t\tREPORT ABOUT TEAM\n";
	Report_File<<"\n\t\t\t\tREPORT ABOUT TEAM\n";
	date();
	cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
	Report_File<< "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
    while(!table.eof()){
    	
        table.getline(sh.pos,25,'/');
        table.getline(sh.team_name,25,'/');
        table.getline(sh.wins,25,'/');
        table.getline(sh.draw,25,'/');
        table.getline(sh.lose,25,'/');
        table.getline(sh.points,25,'/');
        table.getline(sh.opse,25);

        k=sh.pos;l=sh.team_name;
		m=sh.wins;n=sh.draw;
		o=sh.lose;p=sh.points;
		
        a=k.length();b=l.length();
        c=m.length();d=n.length();
		e=o.length();f=p.length();
		
        if(x==l){
        	Report_File<<sh.pos;
        	for(int i=0;i<8-a;i++)Report_File<<" ";
            cout<<sh.pos;
	        for(int i=0;i<8-a;i++)cout<<" ";
	        
			Report_File<<sh.team_name;
            for(int i=0;i<32-b;i++)Report_File<<" ";
            cout<<sh.team_name;
            for(int i=0;i<32-b;i++)cout<<" ";
            
            Report_File<<sh.wins;
            for(int i=0;i<8-c;i++)Report_File<<" ";
            cout<<sh.wins;
            for(int i=0;i<8-c;i++)cout<<" ";
            
            Report_File<<sh.draw;
            for(int i=0;i<8-d;i++)Report_File<<" ";
            cout<<sh.draw;
            for(int i=0;i<8-d;i++)cout<<" ";
            
            Report_File<<sh.lose;
            for(int i=0;i<8-e;i++)Report_File<<" ";
            cout<<sh.lose;
            for(int i=0;i<8-e;i++)cout<<" ";
            
            Report_File<<sh.points;
            for(int i=0;i<8-f;i++)Report_File<<" ";
            cout<<sh.points;
            for(int i=0;i<8-f;i++)cout<<" ";
            
            Report_File<<endl<<endl;
            cout<<endl<<endl;
            y=1;
	cout<<"\t\t\t\t  End Of REPORT\n";
	cout<<"\n\n\tYour Report Is Copied In Report File.txt If Want To Print it \n";
    Report_File<<"\t\t\t\t  End Of REPORT\n";
	
            }
	    }
	  
	if(y==0){
		cout << "\n\n\t\t Error There's No Team With this Entry !!!!\n";

        
    }
    Report_File.close();
    table.close();
}

//___Restore___//
void restore(){
	ofstream table1;
    ifstream table2;
    string line;
    
    table1.open("Premier_League_Table_new.txt");
    table2.open("Restore.txt");

    while(getline(table2,line)){

    	table1<<line<<endl;

      }
    table1.close();
    table2.close(); 
	
}
//__search for a team by position__//
void search_team_pos(){
	int x,y=0,z;
    classe sh;
    ifstream table;
      
    table.open("Premier_League_Table_new.txt");
    int a,b,c,d,e,f;
    string k,l,m,n,o,p;
    cout<<"Entre 1 To Search For Particular Team Position\n";
    cout<<"Entre 2 To Search More Than Particular Team Position\n";
    cout<<"Entre 3 To Search less Than Particular Team Position\n";
    cout<<"Entre 4 To Search Special Range\n";
    cin>>z;
    cout<<endl;
    
    if(z==1){
	    cout << " \n enter the Position of the team that You looking For Please :D :";
        cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(k);
		    ss>>num;
            if(x==num){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
    }   
    else if(z==2){
    	cout<<" \n enter the Position That You Want To Show More Than :D :";
    	cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(k);
		    ss>>num;
            if(num>x){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
	}
	else if(z==3){
    	cout<<" \n enter the Position That You Want To Show less Than :D :";
    	cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(k);
		    ss>>num;
            if(num<x){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();	
	}
	else if(z==4){
		int n1,n2;
		cout<<"Please Entre Little Position : ";
		cin>>n1;
		cout<<endl;
		cout<<"Please Entre Greater Position : ";
		cin>>n2;
		cout<<endl;
		if(n2>=n1){
	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(k);
		    ss>>num;
            if(num>n1&&num<n2){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
			}
	    }
	    else{
	    cout<<"\n\aEroor Because "<<"( the less "<<n1<<" > "<<"the more "<<n2<<" )"<<endl;
	    y=1;}
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
		
	}
	else{
	cout<<"\n\t\t\t\t\a   Eroor\n";
	cout<<"\t***********************************************************\n";}
}
//__Search For a team By Team's Name__//
void search_team(){
	int y=0;
	string x;

    classe sh;
    ifstream table;
      
    table.open("Premier_League_Table_new.txt");
    int a,b,c,d,e,f;
    string k,l,m,n,o,p;
	cout << "Enter the Name of the team that you looking For Please :D :";
	cin.ignore();
    getline(cin,x);
    cout<<endl;
    
	cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
    while(!table.eof()){
    	
        table.getline(sh.pos,25,'/');
        table.getline(sh.team_name,25,'/');
        table.getline(sh.wins,25,'/');
        table.getline(sh.draw,25,'/');
        table.getline(sh.lose,25,'/');
        table.getline(sh.points,25,'/');
        table.getline(sh.opse,25);

        k=sh.pos;l=sh.team_name;
		m=sh.wins;n=sh.draw;
		o=sh.lose;p=sh.points;
		
        a=k.length();b=l.length();
        c=m.length();d=n.length();
		e=o.length();f=p.length();
		
        if(x==l){
      	
            cout<<sh.pos;
	        for(int i=0;i<8-a;i++)cout<<" ";
	  
            cout<<sh.team_name;
            for(int i=0;i<32-b;i++)cout<<" ";
        
            cout<<sh.wins;
            for(int i=0;i<8-c;i++)cout<<" ";
        
            cout<<sh.draw;
            for(int i=0;i<8-d;i++)cout<<" ";
        
            cout<<sh.lose;
            for(int i=0;i<8-e;i++)cout<<" ";
        
            cout<<sh.points;
            for(int i=0;i<8-f;i++)cout<<" ";
        
            cout<<endl<<endl;
            y=1;

            }
	    }
	  
	if(y==0){
		cout << "\n\n\t\t Error There's No Team With this Entry !!!!\n";

        table.close();
    }

}
//__search for a team by wins__//
void search_team_wins(){
	int x,y=0,z;
    classe sh;
    ifstream table;
      
    table.open("Premier_League_Table_new.txt");
    int a,b,c,d,e,f;
    string k,l,m,n,o,p;
    cout<<"Entre 1 To Search For Particular Team Wins\n";
    cout<<"Entre 2 To Search More Than Particular Team Wins\n";
    cout<<"Entre 3 To Search less Than Particular Team Wins\n";
    cout<<"Entre 4 To Search Special Range\n";
    cin>>z;
    cout<<endl;
    
    if(z==1){
	    cout << " \n enter the Number of wins For the team that You looking For Please :D :";
        cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(m);
		    ss>>num;
            if(x==num){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
    }
    else if(z==2){
    	cout<<" \n enter the Number of wins To Show More Than :D :";
    	cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(m);
		    ss>>num;
            if(num>x){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
	}
	else if(z==3){
    	cout<<" \n enter the Number of wins To Show less Than :D :";
    	cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(m);
		    ss>>num;
            if(num<x){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();	
	}
	else if(z==4){
		int n1,n2;
		cout<<"Please Entre Little Number Of wins : ";
		cin>>n1;
		cout<<endl;
		cout<<"Please Entre Greater Number Of wins : ";
		cin>>n2;
		cout<<endl;
		if(n2>=n1){
	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(m);
		    ss>>num;
            if(num>n1&&num<n2){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
			}
	    }
	    else{
	    cout<<"\n\aEroor Because "<<"( the less "<<n1<<" > "<<"the more "<<n2<<" )"<<endl;
	    y=1;}
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
		
	}
	else{
	cout<<"\n\t\t\t\t\a   Eroor\n";
	cout<<"\t***********************************************************\n";}
}
//__search for a team by points__//
void search_team_points(){
	int x,y=0,z;
    classe sh;
    ifstream table;
      
    table.open("Premier_League_Table_new.txt");
    int a,b,c,d,e,f;
    string k,l,m,n,o,p;
    cout<<"Entre 1 To Search For Particular Team Points\n";
    cout<<"Entre 2 To Search More Than Particular Team Points\n";
    cout<<"Entre 3 To Search less Than Particular Team Points\n";
    cout<<"Entre 4 To Search Special Range\n";
    cin>>z;
    cout<<endl;
    
    if(z==1){
	    cout << " \n enter the Number of Points of the team that You looking For Please :D :";
        cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(p);
		    ss>>num;
            if(x==num){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
    }
    else if(z==2){
    	cout<<" \n enter the Number of Points To Show More Than :D :";
    	cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(p);
		    ss>>num;
			if(num>x){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
	}
	else if(z==3){
    	cout<<" \n enter the Number of Points To Show less Than :D :";
    	cin>>x;

	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(p);
		    ss>>num;
            if(num<x){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
	    }
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();	
	}
	else if(z==4){
		int n1,n2;
		cout<<"Please Entre Little Number Of Points : ";
		cin>>n1;
		cout<<endl;
		cout<<"Please Entre Greater Number Of Points : ";
		cin>>n2;
		cout<<endl;
		if(n2>=n1){
	    cout << "\n\npos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
        while(!table.eof()){
    	
            table.getline(sh.pos,25,'/');
            table.getline(sh.team_name,25,'/');
            table.getline(sh.wins,25,'/');
            table.getline(sh.draw,25,'/');
            table.getline(sh.lose,25,'/');
            table.getline(sh.points,25,'/');
            table.getline(sh.opse,25);

            k=sh.pos;l=sh.team_name;
		    m=sh.wins;n=sh.draw;
		    o=sh.lose;p=sh.points;
		
            a=k.length();b=l.length();
            c=m.length();d=n.length();
		    e=o.length();f=p.length();
		
		    int num;
		    istringstream ss(p);
		    ss>>num;		    
            if(num>n1&&num<n2){
      	
                cout<<sh.pos;
	            for(int i=0;i<8-a;i++)cout<<" ";
	  
                cout<<sh.team_name;
                for(int i=0;i<32-b;i++)cout<<" ";
        
                cout<<sh.wins;
                for(int i=0;i<8-c;i++)cout<<" ";
        
                cout<<sh.draw;
                for(int i=0;i<8-d;i++)cout<<" ";
        
                cout<<sh.lose;
                for(int i=0;i<8-e;i++)cout<<" ";
        
                cout<<sh.points;
                for(int i=0;i<8-f;i++)cout<<" ";
        
                cout<<endl<<endl;
                y=1;

            }
			}
	    }
	    else{
	    cout<<"\n\aEroor Because "<<"( the less "<<n1<<" > "<<"the more "<<n2<<" )"<<endl;
	    y=1;}
	  
	    if(y==0){
	  	    cout << " \n\n\t\t\t\tnot found !!!!\n";}

        table.close();
		
	}
	else{
	cout<<"\n\t\t\t\t\a   Eroor\n";
	cout<<"\t***********************************************************\n";}
}
      
// _____________ Display League _______//      
void display_table(){
	
    classe sh;
    ifstream table;
      
    table.open("Premier_League_Table_new.txt");
    int a,b,c,d,e,f;
    string k,l,m,n,o,p;
	cout << "pos \tTeam Name \t\t\twins \tdraw \tLoses \tPoints \n\n";
	for(int i=0;i<70;i++)cout<<"-";
	cout<<endl;
    while(!table.eof()){
    	
        table.getline(sh.pos,25,'/');
        table.getline(sh.team_name,25,'/');
        table.getline(sh.wins,25,'/');
        table.getline(sh.draw,25,'/');
        table.getline(sh.lose,25,'/');
        table.getline(sh.points,25,'/');
        table.getline(sh.opse,25);

        k=sh.pos;l=sh.team_name;
		m=sh.wins;n=sh.draw;
		o=sh.lose;p=sh.points;
		
        a=k.length();b=l.length();
        c=m.length();d=n.length();
		e=o.length();f=p.length();
		
      if(!table.eof()){
      	
        cout<<sh.pos;
	    for(int i=0;i<8-a;i++)cout<<" ";
	  
        cout<<sh.team_name;
        for(int i=0;i<32-b;i++)cout<<" ";
        
        cout<<sh.wins;
        for(int i=0;i<8-c;i++)cout<<" ";
        
        cout<<sh.draw;
        for(int i=0;i<8-d;i++)cout<<" ";
        
        cout<<sh.lose;
        for(int i=0;i<8-e;i++)cout<<" ";
        
        cout<<sh.points;
        for(int i=0;i<8-f;i++)cout<<" ";
        
        
        
        cout<<endl;       
        for(int i=0;i<70;i++)cout<<"-";

        cout<<endl;
      }
	  }    
      table.close();
}

// ____ Add Team ____ //
void input_team(){
	int count=0;
	string name;
	
	int x,y,z;

    classe sh;
    ifstream table;
    table.open("Premier_League_Table_new.txt");
    while(!table.eof()){
    	
        table.getline(sh.pos,25,'/');
        table.getline(sh.team_name,25,'/');
        table.getline(sh.wins,25,'/');
        table.getline(sh.draw,25,'/');
        table.getline(sh.lose,25,'/');
        table.getline(sh.points,25,'/');
        table.getline(sh.opse,25);
        count++;
	    }
	    table.close();
	    for(;;){
	    	
		   ofstream myfile;
		   myfile.open("Premier_League_Table_new.txt",ios::app);
		   
		   cin.ignore();
		   cout<<"Enter Team Name :\n";
		   getline(cin,name);
		   cout<<"\nEnter Team Wins :\n";
		   cin>>x;
		   cout<<"\nEnter Team Draw :\n";
		   cin>>y;
		   cout<<"\nEnter Team Lose : \n";
		   cin>>z;
		   int m=(3*x)+y;
		   cout<<"\nNow The points are : "<<m<<" points"<<endl;
		   myfile<<count<<"/"<<name<<"/"<<x<<"/"<<y<<"/"<<z<<"/"<<m<<"/"<<endl;
		   cout << "\n\nThats It !! .. Your Team is added \n";
		   myfile.close();
		   
		   char pol;
		   cout<<"\nIF you want to add team again Entre 1\n";
		   cout<<"IF you want to Return To Main Menu Entre Any Key\n";
		   cin>>pol;
		   if(pol=='1'){
		   	count=count+1;
		    cout<<endl;}
		    
		   else
		    break;
        }

}

// ______ Delete Teams _______//
void delete_team(){

    classe sh;
    string name,A;
    int found=0;
    
    fstream table;
	fstream Delete_File;
    table.open("Premier_League_Table_new.txt", ios::in);
    Delete_File.open("Delete_File.txt", ios::out);
    
    cin.ignore();
    cout << " \n\t enter the Name Of the team That U Want To Delete Please : ";
    getline(cin,name);

    while(!table.eof()){
    	
        table.getline(sh.pos,25,'/');
        table.getline(sh.team_name,25,'/');
        table.getline(sh.wins,25,'/');
        table.getline(sh.draw,25,'/');
        table.getline(sh.lose,25,'/');
        table.getline(sh.points,25,'/');
        table.getline(sh.opse,25);
        A=sh.team_name;
        
        if(name==A)
            found=1;
        else
           	Delete_File<<sh.pos<<"/"<<sh.team_name<<"/"<<sh.wins<<"/"<<sh.draw<<"/"<<sh.lose<<"/"<<sh.points<<"/"<<endl;
	    }
	    
	table.close();
	Delete_File.close();
	    
	string line;    
	table.open("Premier_League_Table_new.txt", ios::out);
    Delete_File.open("Delete_File.txt", ios::in);
        
	while(getline(Delete_File,line)){
    	
        if(line=="//////")
            break;
        else
            table<<line<<endl;
        }
    Delete_File.close();
	table.close();
	remove("Delete_File.txt");
	if(found==1)
	   cout << "\n Now The Team Is Deleted :D \n";
	else
       cout << "\n This Team ( "<<name<<" ) Not Found"<<endl;
}

// ______ Modifiy Teams ______//
void Modifiy_team(){
	
	int found=0;
    classe sh;
    string name,A,B;
    int x,y,z;
    
    fstream table;
	fstream Delete_File;
    table.open("Premier_League_Table_new.txt", ios::in);
    Delete_File.open("Delete_File.txt", ios::out);
    
    cin.ignore();
	cout << " \n\t enter the Name Of the team That U Want To Edit Please : ";
    getline(cin,name);

    while(!table.eof()){
    	
        table.getline(sh.pos,25,'/');
        table.getline(sh.team_name,25,'/');
        table.getline(sh.wins,25,'/');
        table.getline(sh.draw,25,'/');
        table.getline(sh.lose,25,'/');
        table.getline(sh.points,25,'/');
        table.getline(sh.opse,25);
        A=sh.team_name;
        
        if(name==A){
		
           cout << " \n\t Enter New Info Please  \n\n ";
           cout<<"Enter Team Name :\n";
           getline(cin,B);
           cout<<"\nEnter Team Wins :\n";
		   cin>>x;
		   cout<<"\nEnter Team Draw :\n";
		   cin>>y;
		   cout<<"\nEnter Team Lose : \n";
		   cin>>z;
		   int m=(3*x)+y;
		   cout<<"\nNow The points are : "<<m<<" points"<<endl;
		   Delete_File<<sh.pos<<"/"<<B<<"/"<<x<<"/"<<y<<"/"<<z<<"/"<<m<<"/"<<endl;
		   found=1;}

        else
           	Delete_File<<sh.pos<<"/"<<sh.team_name<<"/"<<sh.wins<<"/"<<sh.draw<<"/"<<sh.lose<<"/"<<sh.points<<"/"<<endl;
	    }
	    
	table.close();
	Delete_File.close();
	    
	    
	string line;    
	table.open("Premier_League_Table_new.txt", ios::out);
    Delete_File.open("Delete_File.txt", ios::in);
        
	while(getline(Delete_File,line)){
    	
        if(line=="//////")
            break;
        else
            table<<line<<endl;
        }
    Delete_File.close();
	table.close();
	remove("Delete_File.txt");
	if(found==1)
	   cout << "\n And Here We Go .. You are Done :D \n";
	else
	   cout << "\n This Team ( "<<name<<" ) Not Found"<<endl;
}

//___Main Function_____//
int main(){
		intro();
		string y;
		int modifiy_selction;
		int x;
		int n = 0;
		int team_search_switch;
		int team_selection;
		int do1;
		char restore_selection;
		do{
		
		do {
	            system("cls");
				system("color 71");
				cout << "\n\n\n\tMAIN MENU\n";
				cout << "\n\n\t01. Search For A Fixed Team ";
				cout << "\n\n\t02. Search For Added Team";
				cout << "\n\n\t03. See League Table";
				cout << "\n\n\t04. Add A New Team";
				cout << "\n\n\t05. Modify Team You Have added";
				cout << "\n\n\t06. See Primier League Statistics";
				cout << "\n\n\t07. Make a Report For a Team";
				cout << "\n\n\t08. Restore Default League Table";
				cout << "\n\n\t00. Exit";
				cout << "\n\n\tSelect Your Option (1-8):";

				cin >> x;
				system("cls");
				
				switch (x) {

				case 1:
					{
					cout << "Enter Team Name : \n";
					cin.ignore();
					getline(cin, y);
					if (y == "manchester united" || y == "Manchester United" || y == "man u") {
						cout << "To Show Team Matches Enter 1 \n";
						cout << "To Show Team Information Enter 2 \n";
						cout << "To Show Team Statics and Squad  Enter 3 \n";
						cin >> team_selection;

						switch (team_selection) {
						case 1:
							manu_matches();
							cout<<"\n\n\t\t\t";system("pause");
							break;
						case 2:
							manu_info();
							cout<<"\n\n\t\t\t";system("pause");
							break;
						case 3:
							manu_squad();
							cout<<"\n\n\t\t\t";system("pause");
							break;
						default:{
							cout << "error please enter The Right Number \n ";
							system("pause");
							do1 = 1;
							break;}
						}
					}
					
					else{
						cout<<"\n\t\t\t\aEroor : this team not found!!\n\n";
						cout<<"\n\n\t\t\t";system("pause");
						do1=1;}
					}
					break;
				case 2:
					{
					cout << "Select the Type of Your Search Please : \n\n1-Search By Team Position. \n2-Search By Team Name. \n3-Search By Team wins. \n4-Search By Team points. \n";
					cin >> team_search_switch;
					cout<<endl;
					switch (team_search_switch) {
					case 1:
						search_team_pos();
						cout<<"\n\n\t\t\t";system("pause");
						break;
					case 2:
						search_team();
						cout<<"\n\n\t\t\t";system("pause");
						break;
					case 3:
						search_team_wins();
						cout<<"\n\n\t\t\t";system("pause");
						break;
					case 4:
						search_team_points();
						cout<<"\n\n\t\t\t";system("pause");
						break;
					default:{
						cout << "\nwrong entry :D .. Make Sure that U select The Right Number \n\n";
						system("pause");
						do1=1;
						break;}
					}
					} 
					break;
				case 3:
					display_table();
					cout<<"\n\n\t\t\t";system("pause");
					break;
				case 4:
					{
					input_team();
					do1=1;}
					break;
				case 5:
					{
					cout << "IF U Want To Edit Particular Team Enter 1 and IF U Want To Delete Enter 2 : \n";
					cin >> modifiy_selction;
					switch (modifiy_selction) {
					case 1:
						Modifiy_team();
						cout<<"\n\n\t\t\t";system("pause");
						break;
					case 2:
						delete_team();
						cout<<"\n\n\t\t\t";system("pause");
						break;
					default :{
						cout << "wrong entry :D .. Make Sure that U select The Right Number \n\n";
						system("pause");
						do1=1;
						break;}
					}
					}
					break;
				case 6:
					premier_league_statics();
					cout<<"\n\n\t\t\t";system("pause");
					break;
				case 7:
				    report();
					cout<<"\n\n\t\t\t";system("pause");
					break;
				case 8:{
					cout<< "Becaerful The Default Data Will Be Restore and all Added Data Will Be Deleted Enter 1 \nTo Continue or Enter any Key to Return to Main Menu \n";
					cin>>restore_selection;
					if (restore_selection=='1')	
					    restore();
					else
						do1=1;
				    }
					break;
				case 0:
					exit(0);
					break;

				default:
					cout << "\n\n\twrong entry :D .. Make Sure that U select The Right Number \n";
					break;

				}
			} while (do1 == 1);

				cout << "\n\n\n\tEnter 1 To Return To The Main Menu , Enter Any Key To Quit :";
			    cin >> n;


		} while (n == 1);

                system("cls");
	            cout << "\n\n\n\t\tThanks For Using Our Application!!!\n\n\n";
	            
}


//_______introduction________//
void intro(){
	system ("color 2f");
	cout << "\t\t\tWelcome To Premier League App For Season 2016/2017 \n\n\n";

	string line;
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout<<'\t'<<line<<"\n";
		}
		myfile.close();
	}
	cout<<'\n'<<'\n'<<'\n'<<'\n';
	cout<<"\t\t\t ";system("pause");
		
}

//_______Fixed Teams Functions________//
void manu_matches() {

	string line;
	ifstream myfile("manu_matches.txt");
	if (myfile.is_open())
	{
		cout<<endl;
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

}
void manu_info() {
	string line;
	ifstream myfile("manu_info.txt");
	if (myfile.is_open())
	{
		cout<<endl;
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

}
void manu_squad() {
	string line;
	ifstream myfile("manu_squad.txt");
	if (myfile.is_open())
	{
		cout<<endl;
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

}
void premier_league_statics() {

		string line;
		ifstream myfile("Premier_League_statics.txt");
		if (myfile.is_open())
		{
			cout<<endl;
			while (getline(myfile, line))
			{
				cout << line << '\n';
			}
			myfile.close();
		}
}


