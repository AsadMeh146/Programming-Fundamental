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
int score1=0;
int score2=0;
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
	cout<<"Press enter for Player 2 turn  "<<endl;
	getch();
	cout<<endl;	
	int die2 = rand() % 6 +1;
	cout<<"No. on dice is : "<<die2<<endl;
	score2+=die2;
	getch();
	cout<<"Score of Player 2  is now  : "<<score2<<endl;
	getch();
	if((score2==14) || (score2==29) || (score2==51)  || (score2==64)){
		ladder();
	}
	if((score2==22) || (score2==49) || (score2==75)  || (score2==93)){
		snake();
	}
	cout<<"Press enter for Player 1 turn  "<<endl;
	getch();
	cout<<endl;
	
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
