#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	string word;
	int option;
	char word1;
	int wordlength=0;
	int x=3;
	int i=0;
	cout << endl;
    cout << endl;
    cout << "                 {}    {} {}{}{}{} {}    {}  {}{}{}  {}     {} {}{}{}{} {}    {}      " << endl;
    cout << "                 {}    {} {}    {} {}{}  {} {}       {}{} {}{} {}    {} {}{}  {}      " << endl;
    cout << "                 {}{}{}{} {}{}{}{} {} {} {} {}  {}{} {}  {} {} {}{}{}{} {} {} {}      " << endl;
    cout << "                 {}    {} {}    {} {}  {}{} {}    {} {}     {} {}    {} {}  {}{}      " << endl;
    cout << "                 {}    {} {}    {} {}    {}  {}{}{}  {}     {} {}    {} {}    {}      " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
  
	while(option!=3){
		cout<<"1. Rules "<<endl;
		cout<<"2. Play Game "<<endl;
		cout<<"3. Exit "<<endl;
		cout<<endl;
		cout<<"Select your option : ";
		cin>>option;
	    if(option==1){
		system("CLS");
	    cout << endl;
        cout << endl;
        cout << "                 {}    {} {}{}{}{} {}    {}  {}{}{}  {}     {} {}{}{}{} {}    {}      " << endl;
        cout << "                 {}    {} {}    {} {}{}  {} {}       {}{} {}{} {}    {} {}{}  {}      " << endl;
        cout << "                 {}{}{}{} {}{}{}{} {} {} {} {}  {}{} {}  {} {} {}{}{}{} {} {} {}      " << endl;
        cout << "                 {}    {} {}    {} {}  {}{} {}    {} {}     {} {}    {} {}  {}{}      " << endl;
        cout << "                 {}    {} {}    {} {}    {}  {}{}{}  {}     {} {}    {} {}    {}      " << endl;
        cout << endl;
        cout << endl;
        cout << endl;
	    cout<<" RULES : "<<endl;
	    cout<<" 1. Turn  your capslock on. " << endl;
	    cout<<" 2. In this game 1st player will enter a word. Second player will then have to guess that word."<<endl;
	    cout<<" 3. Second player will have 3 tries to guess that word. If he/she fails to guess the word then the program says you lose the game."<<endl;
		cout<<" 4. If he/she is able to guess the word correctly within 3 tries then the player wins.";
		getch();
		system("CLS");
	}
	if(option==2){
		system("CLS");
		cout << endl;
        cout << endl;
        cout << "                 {}    {} {}{}{}{} {}    {}  {}{}{}  {}     {} {}{}{}{} {}    {}      " << endl;
        cout << "                 {}    {} {}    {} {}{}  {} {}       {}{} {}{} {}    {} {}{}  {}      " << endl;
        cout << "                 {}{}{}{} {}{}{}{} {} {} {} {}  {}{} {}  {} {} {}{}{}{} {} {} {}      " << endl;
        cout << "                 {}    {} {}    {} {}  {}{} {}    {} {}     {} {}    {} {}  {}{}      " << endl;
        cout << "                 {}    {} {}    {} {}    {}  {}{}{}  {}     {} {}    {} {}    {}      " << endl;
        cout << endl;
        cout << endl;
        cout << endl;
	    cout<<"Enter your word : ";
	    cin>>word;
	    string compare=word;
		for(int i=0;word[i] != '\0';i++){
            wordlength++;
        }
        for(int j=0;j < wordlength;j++){
        	compare[j]='_';
		}
		while(x!=0){
		cout<<compare<<endl;
        cout<<"Enter the guess letter : ";
        cin>>word1;
        int counter = 0;
        for (int z = 0; z < wordlength; z++){
            if (word1 == word[z]){
            compare[z] = word1;
            counter = 1;
        }
        }
        if(compare == word){
            cout << compare << endl;
            cout << "You Guessed the word.U played very well...." << endl;
            return 0;
        }
        else if(counter != 1){    
		x--;
		cout<<"Wrong Guess.You have "<<x<<" chances remaining"<<endl;
		}
		if(x==0){
		   cout<<"Try Again.You lose the game.";	
		}
		}
		getch();
		system("CLS");        
		}
	}
	}
	
	

