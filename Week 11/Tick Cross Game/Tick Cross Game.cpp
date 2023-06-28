#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
void displayboard();
void playerturn();
bool gameover();
int place;
bool draw = false;	
char num[3][3]={{'1','2','3'},
		        {'4','5','6'},
		        {'7','8','9'}};
char turn = 'X';	
int row = 0,column = 0;	        
int main()
{
	while(gameover()){
    displayboard();
    playerturn();
    gameover();
}
    if(turn == 'X' && draw == false){
    	cout<<"Player 2[O] Wins"<<endl;
	}
	else if(turn =='O' && draw == false){
		cout<<"Player 1[X] Wins"<<endl;
	}
	else{
		cout<<"Game Draw..."<<endl;
	}
}

void displayboard(){
	system("CLS");
	cout<<"Tick Cross Game"<<endl;
	cout<<endl;
	cout<<"Player 1:X"<<endl;	
	cout<<"Player 2:O"<<endl;
	cout<<"\t       |     |     \n";	
	cout<<"\t    "<<num[0][0]<<"  |  "<<num[0][1]<<"  |  "<<num[0][2]<<"\n";
	cout<<"\t  _____|_____|_____ \n";
	cout<<"\t       |     |      \n";	
	cout<<"\t    "<<num[1][0]<<"  |  "<<num[1][1]<<"  |  "<<num[1][2]<<"\n";
	cout<<"\t  _____|_____|_____ \n";
	cout<<"\t       |     |      \n";	
	cout<<"\t    "<<num[2][0]<<"  |  "<<num[2][1]<<"  |  "<<num[2][2]<<"\n";
	cout<<"\t       |     |      \n";
}
void playerturn(){
	if(turn == 'X' ){
	cout<<"Player 1 [X] turn: ";
	cin>>place;
	}
	if(turn == 'O'){
	cout<<"Player 2 [0] turn: ";
	cin>>place;
	}
	switch(place){			
	case 1:row=0; column=0;break; 
	case 2:row=0; column=1;break;
	case 3:row=0; column=2;break;
	case 4:row=1; column=0;break;
	case 5:row=1; column=1;break;
	case 6:row=1; column=2;break;
	case 7:row=2; column=0;break;
	case 8:row=2; column=1;break;
	case 9:row=2; column=2;break;
	default:
	cout<<"Invalid Choice..";
	break;  
	}
	if(turn=='O'){
		num[row][column]='O';
		turn='X';
	}
	else if(turn=='X'){
		num[row][column]='X'; 
		turn='O';
	}
}
    bool gameover(){
    	for(int i=0;i<3;i++)
    		if(num[i][0] == num[i][1] && num[i][0] == num[i][2]){
    		return false;	
			}
			if(num[0][0] == num[1][1] && num[1][1] == num[2][2]){
				return false;
			}
			if(num[0][2] == num[1][1] && num[1][1] == num[2][0]){
				return false;
			}
	   	for(int j=0;j<3;j++)
    		if(num[0][j] == num[1][j] && num[0][j] == num[2][j]){
    		return false;	
			}
		for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
				if(num[i][j]!='X' && num[i][j]!='O')
				return true;
			    draw = true;
			    return false;
		
	}
