#include<IOSTREAM>
#include <stdlib.h> 
using namespace std;
class battlefeild{
	char x[10][10];
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
		return x[10][10];
	}
	int* shipp1x(){
		static int x1[3];
		int u=0,op=0;
		cout<<"PLAYER1 please enter your cordinates"<<endl;
		for(int k=1;k<4;k++){
		
		while(u<k){
		int op=0;		 				
			cout<<"Enter x cordinate for ship"<<" "<<k<<"="<<endl;
			cin>>x1[k-1];
		    if(x1[k-1]>5){
		    	cout<<"ENTER CORDINATES OF YOUR AREA"<<endl;
			
			if(op==1){
				if(x1[k-1]==x1[k-2]){
					cout<<"SHIPS CANT  BE STACK OVER"<<endl;
				}
			}
		}
			else{
			op=1;
			u++;
		}
		
		}
				
	}
	return x1;
	}
	int* shipp1y(){
	static int y1[3];
		for(int i=0;i<3;i++){
		
		cout<<"Enter y cordinate for ship="<<" "<<i+1<<"="<<endl;
			cin>>y1[i];
		}
			return y1; 
	}
		int* shipp2x(){
		static int x2[3];
		int	l=0,po=0;
		cout<<"PLAYER2 please enter your cordinates"<<endl;
		for(int k=1;k<4;k++){
		while(l<k){		 						
			cout<<"Enter x cordinate for ship"<<" "<<k<<"="<<endl;
			cin>>x2[k-1];
			if(x2[k-1]<5 || x2[k-1]>=10){
			cout<<"ENTER CORDINATES OF YOUR AREA"<<endl;
			 if(po==1){
				if(x2[k-1]==x2[k]){
					cout<<"deploy the fecking ship in your area or Ship can't be stacks'"<<endl;
				}
			}
			} else{
			l++;
			po=1;
		}
		}			
			}
				return x2;
	}
	int* shipp2y(){
	static	int y2[3];
		for(int i=0;i<3;i++){
			cout<<"Enter y cordinate for ship="<<" "<<i+1<<"="<<endl;
			cin>>y2[i];
		}
		return  y2;
	}
	
};


int main(){
	cout<<"WELCOME TO BAST GAME AVAILABLE"<<endl;
	int q=1+rand()%2;
	
    char X[10][10];
	int kill1=0,kill2=0,ap1,tp1,ap2,tp2;
	battlefeild o1;
	X[10][10]=o1.board();
	int *xp1=o1.shipp1x();
	int *yp1=o1.shipp1y();
	int *xp2=o1.shipp2x();
	int *yp2=o1.shipp2y();
	int cho;
	cout<<" TOSS choose your side as PLAYER ONE YOU GO CHOSSE BETWEEN 1 and 2"<<endl;
	cout<<xp2[1];
	cin>>cho;
	if(q==cho){
		
		cout<<"Player 1 please enter the cordinate you want to attack X,Y"<<endl;
		cin>>ap1>>tp1;
		if(ap1==xp2[0]||ap1==xp2[1]||ap1==xp2[2] && tp1==yp2[0]||tp1==yp2[1]||tp1==yp2[2]){
		kill1=kill1+1;
		cout<<"GOTCHA BIACH"<<endl;
		X[ap1][tp1]={'#'};
		for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
				if(i==ap1 &&j==tp1){
					cout<<"#";
				}else if(j==1||j==10){
					cout<<"*";
				}
				if(j==5){
					cout<<"|";
				}
				else cout<<".";
			}
			cout<<endl;
		}
	    
		}else cout<<"HAHA MISS ME MISS ME NOW YOU GOTTA KISS ME"<<endl;
	}
	else{
		cout<<"Player 2 please enter the cordinate you want to attack X,Y"<<endl;
		cin>>ap2>>tp2;
		if(ap2==xp1[0]||ap2==xp1[1]||ap2==xp1[2] && tp2==yp1[0]||tp2==yp1[1]||tp2==yp1[2]){
		cout<<"GOTCHA BIACH"<<endl;
		
		X[ap2][tp2]={'#'};
		kill2=kill2+1;
		for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
				if(i==ap2 &&j==tp2){
					cout<<"#";
				}else if(j==1||j==10){
					cout<<"*";
				}
				if(j==5){
					cout<<"|";
				}
				else cout<<".";
			}
			cout<<endl;
		}		
		}
		else cout<<"HAHA MISS ME MISS ME NOW YOU GOTTA KISS ME"<<endl;
	}
	do{	cout<<"Player 1 please enter the cordinate you want to attack X,Y"<<endl;
		cin>>ap1>>tp1;
		if(ap1==xp2[0]||ap1==xp2[1]||ap1==xp2[2] && tp1==yp2[0]||tp1==yp2[1]||tp1==yp2[2]){
		kill1=kill1+1;
		cout<<"GOTCHA BIACH"<<endl;
		cout<<"SHIP DESTORYED="<<kill1<<endl;
		X[ap1][tp1]={'#'};
		for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
				if(i==ap1 &&j==tp1){
					cout<<"#";
				}else if(j==1||j==10){
					cout<<"*";
				}
				if(j==5){
					cout<<"|";
				}
				else cout<<".";
			}
			cout<<endl;
		}
	    
		}else cout<<"HAHA MISS ME MISS ME NOW YOU GOTTA KISS ME"<<endl;
		
		cout<<"Player 2 please enter the cordinate you want to attack X,Y"<<endl;
		cin>>ap2>>tp2;
		if(ap2==xp1[0]||ap2==xp1[1]||ap2==xp1[2] && tp2==yp1[0]||tp2==yp1[1]||tp2==yp1[2]){
		cout<<"GOTCHA BIACH"<<endl;
		cout<<"SHIP DESTORYED="<<kill2<<endl;
		X[ap2][tp2]={'#'};
		kill2=kill2+1;
		for(int i=1;i<=10;i++){
			for(int j=1;j<=10;j++){
				if(i==ap2 &&j==tp2){
					cout<<"#";
				}else if(j==1||j==10){
					cout<<"*";
				}
				if(j==5){
					cout<<"|";
				}
				else cout<<".";
			}
			cout<<endl;
		}
		
		}else cout<<"HAHA MISS ME MISS ME NOW YOU GOTTA KISS ME"<<endl;
		cho=q;
		
	}

	while(kill1!=3||kill2!=3);{
	
	if(kill1==3) cout<<"CONGRATULATION PLAYER 1 WINS";
	else cout<<"CONGRATULATION PLAYER 2 WINS";
}
}

