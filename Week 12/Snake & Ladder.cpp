#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
void welcome();
void rules();
bool gameover();
void game();
void score();
void ladder();
void snake();
void displayboard();
void dice1();
void dice2();
int score1=0;
int score2=0;
string value;
string value2;
int row = 0,column = 0;
string num[10][10]={{"100","99","98","97","96","95","94","93","92","91"},
		        {"90","89","88","87","86","85","84","83","82","81"},
		        {"80","79","78","77","76","75","74","73","72","71"},
		        {"70","69","68","67","66","65","64","63","62","61"},
		        {"60","59","58","57","56","55","54","53","52","51"},
		        {"50","49","48","47","46","45","44","43","42","41"},
		        {"40","39","38","37","36","35","34","33","32","31"},
		        {"30","29","28","27","26","25","24","23","22","21"},
		        {"20","19","18","17","16","15","14","13","12","11"},
				{"10","9","8","7","6","5","4","3","2","1"}};
int main(){
	int option;
	while(option!=3){
		welcome();
	    cout<<"1. Rules "<<endl;
	    cout<<"2. Play the game  "<<endl;
	    cout<<"3. Exit "<<endl;
	    cout<<endl;
	    cout<<"Select your option : ";
		cin>>option;
		if(option==1){
			rules();
		}
		if(option==2){
			game();
		} 
	} 
}
void welcome(){
	    cout<<"                   *********************************"<<endl;
		cout<<"                   Welcome to Snake and ladder game "<<endl;
	    cout<<"                   *********************************"<<endl;
	    cout<<endl;
	
}
void displayboard(){
	system("CLS");
	cout<<"Snake and ladder Game"<<endl;
	cout<<endl;
	cout<<"Player 1: #"<<endl;	
	cout<<"Player 2: @"<<endl;
	cout<<endl;	
	cout<<"\t    "<<num[0][0]<<"   "<<num[0][1]<<"   "<<num[0][2]<<"   "<<num[0][3]<<"   "<<num[0][4]<<"   "<<num[0][5]<<"   "<<num[0][6]<<"   "<<num[0][7]<<"   "<<num[0][8]<<"   "<<num[0][9]<<"\n";
	cout<<"\t    "<<num[1][0]<<"   "<<num[1][1]<<"   "<<num[1][2]<<"   "<<num[1][3]<<"   "<<num[1][4]<<"   "<<num[1][5]<<"   "<<num[1][6]<<"   "<<num[1][7]<<"   "<<num[1][8]<<"   "<<num[1][9]<<"\n";
	cout<<"\t    "<<num[2][0]<<"   "<<num[2][1]<<"   "<<num[2][2]<<"   "<<num[2][3]<<"   "<<num[2][4]<<"   "<<num[2][5]<<"   "<<num[2][6]<<"   "<<num[2][7]<<"   "<<num[2][8]<<"   "<<num[2][9]<<"\n";
	cout<<"\t    "<<num[3][0]<<"   "<<num[3][1]<<"   "<<num[3][2]<<"   "<<num[3][3]<<"   "<<num[3][4]<<"   "<<num[3][5]<<"   "<<num[3][6]<<"   "<<num[3][7]<<"   "<<num[3][8]<<"   "<<num[3][9]<<"\n";
	cout<<"\t    "<<num[4][0]<<"   "<<num[4][1]<<"   "<<num[4][2]<<"   "<<num[4][3]<<"   "<<num[4][4]<<"   "<<num[4][5]<<"   "<<num[4][6]<<"   "<<num[4][7]<<"   "<<num[4][8]<<"   "<<num[4][9]<<"\n";
	cout<<"\t    "<<num[5][0]<<"   "<<num[5][1]<<"   "<<num[5][2]<<"   "<<num[5][3]<<"   "<<num[5][4]<<"   "<<num[5][5]<<"   "<<num[5][6]<<"   "<<num[5][7]<<"   "<<num[5][8]<<"   "<<num[5][9]<<"\n";
	cout<<"\t    "<<num[6][0]<<"   "<<num[6][1]<<"   "<<num[6][2]<<"   "<<num[6][3]<<"   "<<num[6][4]<<"   "<<num[6][5]<<"   "<<num[6][6]<<"   "<<num[6][7]<<"   "<<num[6][8]<<"   "<<num[6][9]<<"\n";
	cout<<"\t    "<<num[7][0]<<"   "<<num[7][1]<<"   "<<num[7][2]<<"   "<<num[7][3]<<"   "<<num[7][4]<<"   "<<num[7][5]<<"   "<<num[7][6]<<"   "<<num[7][7]<<"   "<<num[7][8]<<"   "<<num[7][9]<<"\n";
	cout<<"\t    "<<num[8][0]<<"   "<<num[8][1]<<"   "<<num[8][2]<<"   "<<num[8][3]<<"   "<<num[8][4]<<"   "<<num[8][5]<<"   "<<num[8][6]<<"   "<<num[8][7]<<"   "<<num[8][8]<<"   "<<num[8][9]<<"\n";
	cout<<"\t    "<<num[9][0]<<"   "<<num[9][1]<<"   "<<num[9][2]<<"   "<<num[9][3]<<"   "<<num[9][4]<<"   "<<num[9][5]<<"   "<<num[9][6]<<"   "<<num[9][7]<<"   "<<num[9][8]<<"   "<<num[9][9]<<"\n";	
}
void rules(){
	   system("CLS");
	   welcome();
	   cout<<"Following are the rules of game : "<<endl;
	   cout<<endl;
	   cout<<"1. Player 1 or Player 2 will roll the dice and which number appears on dice will be added to his score."<<endl;
	   cout<<"2. If Player 1 or Player 2 touches the bottom of ladder then he will automatically go tu top of ladder. "<<endl;
	   cout<<"3. If Player 1 or Player 2 touches the mouth of snake then we will be taken down to the tail of snake. "<<endl;
	   cout<<"4. If Player 1 or Player 2 scores = 100 then he will win the game ."<<endl;
	   getch();
	   system("CLS");
}
void game(){
	system("CLS");
	welcome();
	score();
	}	
void score(){
	srand(time(0));
	while(gameover()){
	   dice1();
	   dice2();
	  	if(score1>=100){
		cout<<endl;
		cout<<"Congrats ....Player 1 won the game .... "<<endl;
		break;
	}
	else if(score2>=100){
		cout<<endl;
		cout<<"Congrats ....Player 2 won the game .... "<<endl;
		break;
}
}
    getch();
    system("CLS");
}
void dice1(){
    displayboard();
	int die1 = rand() % 6 +1;
	cout<<"No. on dice is : "<<die1<<endl;
	score1+=die1;
	getch();
	cout<<"Score of Player 1  is now  : "<<score1<<endl;
	getch();
	if((score1==14) || (score1==29) || (score1==51)  || (score1==64)){
		ladder();
	}
	if((score1==22) || (score1==49) || (score1==75)  || (score1==93)){
		snake();
	}
	switch(score1){			
	case 100:row=0; column=0;break; 
	case 99:row=0; column=1;break;
	case 98:row=0; column=2;break;
	case 97:row=0; column=3;break;
	case 96:row=0; column=4;break;
	case 95:row=0; column=5;break;
	case 94:row=0; column=6;break;
	case 93:row=0; column=7;break;
	case 92:row=0; column=8;break;
	case 91:row=0; column=9;break;
	case 90:row=1; column=0;break; 
	case 89:row=1; column=1;break;
	case 88:row=1; column=2;break;
	case 87:row=1; column=3;break;
	case 86:row=1; column=4;break;
	case 85:row=1; column=5;break;
	case 84:row=1; column=6;break;
	case 83:row=1; column=7;break;
	case 82:row=1; column=8;break;
	case 81:row=1; column=9;break;
	case 80:row=2; column=0;break; 
	case 79:row=2; column=1;break;
	case 78:row=2; column=2;break;
	case 77:row=2; column=3;break;
	case 76:row=2; column=4;break;
	case 75:row=2; column=5;break;
	case 74:row=2; column=6;break;
	case 73:row=2; column=7;break;
	case 72:row=2; column=8;break;
	case 71:row=2; column=9;break;
	case 70:row=3; column=0;break; 
	case 69:row=3; column=1;break;
	case 68:row=3; column=2;break;
	case 67:row=3; column=3;break;
	case 66:row=3; column=4;break;
	case 65:row=3; column=5;break;
	case 64:row=3; column=6;break;
	case 63:row=3; column=7;break;
	case 62:row=3; column=8;break;
	case 61:row=3; column=9;break;
	case 60:row=4; column=0;break; 
	case 59:row=4; column=1;break;
	case 58:row=4; column=2;break;
	case 57:row=4; column=3;break;
	case 56:row=4; column=4;break;
	case 55:row=4; column=5;break;
	case 54:row=4; column=6;break;
	case 53:row=4; column=7;break;
	case 52:row=4; column=8;break;
	case 51:row=4; column=9;break;
	case 50:row=5; column=0;break; 
	case 49:row=5; column=1;break;
	case 48:row=5; column=2;break;
	case 47:row=5; column=3;break;
	case 46:row=5; column=4;break;
	case 45:row=5; column=5;break;
	case 44:row=5; column=6;break;
	case 43:row=5; column=7;break;
	case 42:row=5; column=8;break;
	case 41:row=5; column=9;break;
	case 40:row=6; column=0;break; 
	case 39:row=6; column=1;break;
	case 38:row=6; column=2;break;
	case 37:row=6; column=3;break;
	case 36:row=6; column=4;break;
	case 35:row=6; column=5;break;
	case 34:row=6; column=6;break;
	case 33:row=6; column=7;break;
	case 32:row=6; column=8;break;
	case 31:row=6; column=9;break;
	case 30:row=7; column=0;break; 
	case 29:row=7; column=1;break;
	case 28:row=7; column=2;break;
	case 27:row=7; column=3;break;
	case 26:row=7; column=4;break;
	case 25:row=7; column=5;break;
	case 24:row=7; column=6;break;
	case 23:row=7; column=7;break;
	case 22:row=7; column=8;break;
	case 21:row=7; column=9;break;
	case 20:row=8; column=0;break; 
	case 19:row=8; column=1;break;
	case 18:row=8; column=2;break;
	case 17:row=8; column=3;break;
	case 16:row=8; column=4;break;
	case 15:row=8; column=5;break;
	case 14:row=8; column=6;break;
	case 13:row=8; column=7;break;
	case 12:row=8; column=8;break;
	case 11:row=8; column=9;break;
	case 10:row=9; column=0;break; 
	case 9:row=9; column=1;break;
	case 8:row=9; column=2;break;
	case 7:row=9; column=3;break;
	case 6:row=9; column=4;break;
	case 5:row=9; column=5;break;
	case 4:row=9; column=6;break;
	case 3:row=9; column=7;break;
	case 2:row=9; column=8;break;
	case 1:row=9; column=9;break;
	}
	value=num[row][column];
	num[row][column]="#";
	displayboard();
	num[row][column]=value;
	cout<<"Press enter for Player 2 turn  "<<endl;
	getch();
	cout<<endl;	
}
void dice2(){
    int die2 = rand() % 6 +1;
	cout<<"No. on dice is : "<<die2<<endl;
	score2+=die2;
	getch();
	cout<<"Score of Player 2  is now  : "<<score2<<endl;
	getch();
	switch(score2){			
	case 100:row=0; column=0;break; 
	case 99:row=0; column=1;break;
	case 98:row=0; column=2;break;
	case 97:row=0; column=3;break;
	case 96:row=0; column=4;break;
	case 95:row=0; column=5;break;
	case 94:row=0; column=6;break;
	case 93:row=0; column=7;break;
	case 92:row=0; column=8;break;
	case 91:row=0; column=9;break;
	case 90:row=1; column=0;break; 
	case 89:row=1; column=1;break;
	case 88:row=1; column=2;break;
	case 87:row=1; column=3;break;
	case 86:row=1; column=4;break;
	case 85:row=1; column=5;break;
	case 84:row=1; column=6;break;
	case 83:row=1; column=7;break;
	case 82:row=1; column=8;break;
	case 81:row=1; column=9;break;
	case 80:row=2; column=0;break; 
	case 79:row=2; column=1;break;
	case 78:row=2; column=2;break;
	case 77:row=2; column=3;break;
	case 76:row=2; column=4;break;
	case 75:row=2; column=5;break;
	case 74:row=2; column=6;break;
	case 73:row=2; column=7;break;
	case 72:row=2; column=8;break;
	case 71:row=2; column=9;break;
	case 70:row=3; column=0;break; 
	case 69:row=3; column=1;break;
	case 68:row=3; column=2;break;
	case 67:row=3; column=3;break;
	case 66:row=3; column=4;break;
	case 65:row=3; column=5;break;
	case 64:row=3; column=6;break;
	case 63:row=3; column=7;break;
	case 62:row=3; column=8;break;
	case 61:row=3; column=9;break;
	case 60:row=4; column=0;break; 
	case 59:row=4; column=1;break;
	case 58:row=4; column=2;break;
	case 57:row=4; column=3;break;
	case 56:row=4; column=4;break;
	case 55:row=4; column=5;break;
	case 54:row=4; column=6;break;
	case 53:row=4; column=7;break;
	case 52:row=4; column=8;break;
	case 51:row=4; column=9;break;
	case 50:row=5; column=0;break; 
	case 49:row=5; column=1;break;
	case 48:row=5; column=2;break;
	case 47:row=5; column=3;break;
	case 46:row=5; column=4;break;
	case 45:row=5; column=5;break;
	case 44:row=5; column=6;break;
	case 43:row=5; column=7;break;
	case 42:row=5; column=8;break;
	case 41:row=5; column=9;break;
	case 40:row=6; column=0;break; 
	case 39:row=6; column=1;break;
	case 38:row=6; column=2;break;
	case 37:row=6; column=3;break;
	case 36:row=6; column=4;break;
	case 35:row=6; column=5;break;
	case 34:row=6; column=6;break;
	case 33:row=6; column=7;break;
	case 32:row=6; column=8;break;
	case 31:row=6; column=9;break;
	case 30:row=7; column=0;break; 
	case 29:row=7; column=1;break;
	case 28:row=7; column=2;break;
	case 27:row=7; column=3;break;
	case 26:row=7; column=4;break;
	case 25:row=7; column=5;break;
	case 24:row=7; column=6;break;
	case 23:row=7; column=7;break;
	case 22:row=7; column=8;break;
	case 21:row=7; column=9;break;
	case 20:row=8; column=0;break; 
	case 19:row=8; column=1;break;
	case 18:row=8; column=2;break;
	case 17:row=8; column=3;break;
	case 16:row=8; column=4;break;
	case 15:row=8; column=5;break;
	case 14:row=8; column=6;break;
	case 13:row=8; column=7;break;
	case 12:row=8; column=8;break;
	case 11:row=8; column=9;break;
	case 10:row=9; column=0;break; 
	case 9:row=9; column=1;break;
	case 8:row=9; column=2;break;
	case 7:row=9; column=3;break;
	case 6:row=9; column=4;break;
	case 5:row=9; column=5;break;
	case 4:row=9; column=6;break;
	case 3:row=9; column=7;break;
	case 2:row=9; column=8;break;
	case 1:row=9; column=9;break;
	}
	value2=num[row][column];
	num[row][column]="@";
	displayboard();
	num[row][column]=value2;
	if((score2==14) || (score2==29) || (score2==51)  || (score2==64)){
		ladder();
	}
	if((score2==22) || (score2==49) || (score2==75)  || (score2==93)){
		snake();
	}
	cout<<"Press enter for Player 1 turn  "<<endl;
	getch();
	cout<<endl;
}
void ladder(){
	if(score1 == 14){
		score1 = score1 + 7;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score1<<endl;
	}
	if(score2 == 14){
		score2 = score2 + 7;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score2<<endl;
	}
	if(score1 == 29){
		score1 = score1 + 8;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score1<<endl;
	}
	if(score2== 29 ){
		score2 = score2 + 8;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score2<<endl;
	}
	if(score1 == 51){
		score1 = score1 + 16;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score1<<endl;
	}
	if(score2== 51 ){
		score2 = score2 + 16;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score2<<endl;
	}
	if(score1== 64){
		score1 = score1 + 7;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score1<<endl;
	}
	if(score2 == 64){
		score2 = score2 + 7;
		cout<<"Wow..You touched the ladder.Your score is now : "<<score2<<endl;
	}
}
void snake(){
	if(score1 == 22){
		score1 = score1 - 5;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score1<<endl;
	}
	if(score2 == 22){
		score2 = score2 - 5;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score2<<endl;
	}
	if(score1 == 49){
		score1 = score1 - 16;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score1<<endl;
	}
	if(score2 == 49){
		score2 = score2 - 16;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score2<<endl;
	}
	if(score1 == 75){
		score1 = score1 - 13;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score1<<endl;
	}
	if(score2 == 75){
		score2 = score2 - 13;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score2<<endl;
	}
	if(score1 == 93){
		score1 = score1 - 25;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score1<<endl;
	}
	if(score2 == 93){
		score2 = score2 - 25;
		cout<<"OOPS..You touched the snake.Your score is now : "<<score2<<endl;
	}
}
bool gameover(){
	if((score1>=100) || (score2>=100)){
		return false;
	}
	else if(score1!=100 || score2!=100){
		return true;
	}
}
