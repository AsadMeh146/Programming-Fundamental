#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
using namespace std;
void displayboard();
void playerturn();
void gameover();
void moveLeft();
void moveRight();
void moveDown();
void moveUp();
void move();
void player();
int pmanx=10;
int pmany=10;
void gotoxy(short x, short y);
int gameRunning = true;
bool draw = false;	
char turn = 'X';	
char num[3][3]={{'1','2','3'},
		        {'4','5','6'},
		        {'7','8','9'}};;   
int main()
{
	while(gameRunning){
	displayboard();
	move();
	gameover();
    if(turn == 'X' && draw == false){
    	gotoxy(15,15);
		cout<<"Player 2[O] Wins"<<endl;
	}
	else if(turn =='O' && draw == false){
		gotoxy(15,15);
		cout<<"Player 1[X] Wins"<<endl;
}
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
void gameover(){
    	for(int i=0;i<3;i++)
    		if(num[i][0] == num[i][1] && num[i][0] == num[i][2]){	 
		    gameRunning = false;	
			}
			if(num[0][0] == num[1][1] && num[1][1] == num[2][2]){
		     gameRunning = false;
			}
			if(num[0][2] == num[1][1] && num[1][1] == num[2][0]){
			gameRunning = false;
		}
	   	for(int j=0;j<3;j++)
    		if(num[0][j] == num[1][j] && num[0][j] == num[2][j]){
    		gameRunning =  false;	
			}
		for (int i=0;i<3;i++)
		for (int j=0;j<3;j++)
				if(num[i][j]!='X' && num[i][j]!='O')
				gameRunning = true;
			    draw = true;
			    gameRunning = false;
}	
void move(){
	if (GetAsyncKeyState(VK_LEFT))
        { //ascii LEFT arrow
            moveLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        { //ascii right arrow
            moveRight();
        }

        if (GetAsyncKeyState(VK_UP))
        { // up arrow key
            moveUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        { //down arrow key
            moveDown();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            player();
		}
    Sleep(100);
}
void moveUp(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  if(pmany>5){ // this condition stop to cross the boundaries.
    pmany=pmany-3;
  }
}
void moveDown(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  if(pmany<10){
  pmany=pmany+3;	
  }
}
void moveRight(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  if(pmanx<22){
  pmanx=pmanx+6;	
  }
}
void moveLeft(){
  gotoxy(pmanx,pmany);
  cout<<" ";
  if(pmanx>13){ // this condition used to stop to cross the boundaries.
    pmanx=pmanx-6;
  }
}
void player(){
	if(turn == 'X' ){
	gotoxy(pmanx,pmany);
	cout<<"X";
	}
	if(turn == 'O'){
	gotoxy(pmanx,pmany);
	cout<<"O";
	}
	if(turn=='O'){
		turn='X';
	}
	else if(turn=='X'){ 
		turn='O';
	}
	if (turn == 'X'){
	if (pmanx == 10 && pmany == 4){
	   num[0][0] = 'O';	
	}
	if (pmanx == 16 && pmany == 4){
	   num[0][1] = 'O';	
	}
	if (pmanx == 22 && pmany == 4){
	   num[0][2] = 'O';	
	}
	if (pmanx == 10 && pmany == 7){
	   num[1][0] = 'O';	
	}
	if (pmanx == 16 && pmany == 7){
	   num[1][1] = 'O';	
	}
	if (pmanx == 22 && pmany == 7){
	   num[1][2] = 'O';	
	}
	if (pmanx == 10 && pmany == 10){
	   num[2][0] = 'O';	
	}
	if (pmanx == 16 && pmany == 10){
	   num[2][1] = 'O';	
	}
	if (pmanx == 22 && pmany == 10){
	   num[2][2] = 'O';	
	}
}
	if(turn == 'O'){
	if (pmanx == 10 && pmany == 4){
	   num[0][0] = 'X';	
	}
	if (pmanx == 16 && pmany == 4){
	   num[0][1] = 'X';	
	}
	if (pmanx == 22 && pmany == 4){
	   num[0][2] = 'X';	
	}
	if (pmanx == 10 && pmany == 7){
	   num[1][0] = 'X';	
	}
	if (pmanx == 16 && pmany == 7){
	   num[1][1] = 'X';	
	}
	if (pmanx == 22 && pmany == 7){
	   num[1][2] = 'X';	
	}
	if (pmanx == 10 && pmany == 10){
	   num[2][0] = 'X';	
	}
	if (pmanx == 16 && pmany == 10){
	   num[2][1] = 'X';	
	}
	if (pmanx == 22 && pmany == 10){
	   num[2][2] = 'X';	
	}
	}
}
void gotoxy(short x, short y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
    SetConsoleCursorPosition(hStdout, position);
}
