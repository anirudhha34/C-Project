#include<IOSTREAM>
#include <stdlib.h> 
using namespace std;
class battlefeild{
	char x[11][11];
	 int x2[3],y2[3];
	 int x1[3],y1[3];
public:
	int board(){
		for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
				if(j==1||j==10){
					x[i][j]='*';
					cout<<"*";
				}
				if(j==5){
					x[i][j]='|';
					cout<<"|";
				}
				else{
				x[i][j]='.' ;
				cout<<".";
			}
			}
			cout<<endl;
		}
		
	}
	int* shipp1(){
		 for(int i=0;i<3;i++){
	    	cout<<"Player 1 enter X cordinates for ship "<<i+1<<" ";
	    	cin>>x1[i];
	    	cout<<"Player 1enter Y cordinates for ship "<<i+1<<" ";
	    	cin>>y1[i];	    	
		} 				
	}
	
	int* shipp2(){		
	    for(int i=0;i<3;i++){
	    	cout<<"Player 2 enter X cordinates for ship "<<i+1<<" ";
	    	cin>>x2[i];
	    	cout<<"Player 2 enter Y cordinates for ship "<<i+1<<" ";
	    	cin>>y2[i];	    	
		} 				
	}
	
	int check(int p,int x3,int y3){
		if(p==1){
			for(int i=0;i<3;i++){
				if(x2[i]==x3 && y2[i]==y3){
					x[x3][y3]='#';
					cout<<"ship destroyed"<<endl;
					x2[i]=-1;
					y2[i]=-1;
					return 1;
				}
			}
			return 0;
		}else{
			for(int i=0;i<3;i++){
				if(x1[i]==x3 && y1[i]==y3){
					x[x3][y3]='#';
					cout<<"ship destroyed"<<endl;
					x1[i]=-1;
					y1[i]=-1;
					return 1;
				}
			}
			return 0;	
		}
	}
		
	void print(){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				cout<<x[i][j];
			}
			cout<<endl;
		}
	}
	void show(){
		for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
				if(i==x1[0] && j==y1[0])cout<<"$";
				else if(i==x1[1] && j==y1[1])cout<<"$";
				else if(i==x1[2] && j==y1[2])cout<<"$";
				else if(i==x2[0] && j==y2[0])cout<<"$";
				else if(i==x2[1] && j==y2[1])cout<<"$";
				else if(i==x2[2] && j==y2[2])cout<<"$";
			    else cout<<x[i][j];
			}
			cout<<endl;
		}
	}
	
	void test1(){
		for(int i=0;i<3;i++){
			cout<<x1[i]<<" "<<y1[i]<<" ";
		}
	}
	
		void test2(){
		for(int i=0;i<3;i++){
			cout<<x2[i]<<" "<<y2[i]<<" ";
		}
	}
	
};


int main(){
battlefeild obj;

int toss=1+rand()%2;
int cnt1=0,cnt2=0,chos;
cout<<"Its toss time player 1 please choose number 1 or 2"<<endl;
cin>>chos;
if(toss=chos){
	cout<<"YEPPII player 1 you won the TOSS please enter your ship coadinates RANGES BETWEEN 1-5"<<endl;
	obj.shipp1();
	cout<<"OKAY NOW PLAYER 2 YOUR TURN please enter your ship coadinates RANGES BETWEEN 6-10"<<endl;
	obj.shipp2();
}else{
	cout<<"YEPPII player 2 you won the TOSS please enter your ship coadinates RANGES BETWEEN 6-10"<<endl;
	obj.shipp2();
	cout<<"OKAY NOW PLAYER 1 YOUR TURN please enter your ship coadinates RANGES BETWEEN 1-5"<<endl;
	obj.shipp1();	
}
int a,b;
cout<<"LETS GET STARTED ATTACK TIMEEEEE!!!!!!"<<endl;
do{	
obj.board();
cout<<"Player 1 goes first enter the coadinates you want to attack!!"<<endl;
cin>>a>>b;
if(obj.check(1,a,b)==1){
	obj.print();
	cnt1++;
	if(cnt1==3)break;
}else{
	cout<<"You Missed"<<endl;
}
cout<<"PLAYER 2 Get readyyyyyyyyy select coardinates"<<endl;
cin>>a>>b;
if(obj.check(2,a,b)==1){
	cnt2++;
	obj.print();
	if(cnt2==3)break;
}else{
	cout<<"you missed BETTER LUCK NEXT TIME"<<endl;
}

}while(cnt1!=3 || cnt2!=3);
if(cnt1==3)cout<<"Lets GOOOO Player 1 Cnngratss";
else cout<<"Lets GOOOO Player 1 Cnngratss";
obj.show();

cout<<"THANKS FOR PLAYING!!";
}

