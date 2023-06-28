#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;
//Variables
string guess_word , original_word , user;
int i , j , wrong  , p = 0 , score = 0;
char c , x , X;
int a , b;

//Functions
void header();  // that will display welcome header
void rules();   // that function is to display game rules 
void showmap(); // that will display hang map 
void hangman();  // that will display hangman
void user_info();  // that will take user info (name)
void random_word(); // that will generate random word which is to guess
void guess();      // that will check if user is guessing correct word or not
char check_answer();  // that will check if word is correct or not. 
void print_score(); // that will print total score
void gotoxy(short a, short b);

//2d Array
char map[18][32] = {
    "+#############################+",
    "                               ",
    "                               ",
    "                               ",
    "     ________                  ",
    "     |       )                 ",
    "     |                         ",
    "     |                         ",
    "     |                         ",
    "     |                         ",
    "     |                         ",
    "   __|__________               ",
    "     |                         ",
    "                               ",
    "                               ",
    "                               ",
    "                               ",
    "+#############################+"};
string words[4][4] = {{"PAKISTAN", "SHIELD", "MJOLNIR", "WORTHY"},
                      {"BLUSHING", "DYNAMIC", "DELIGHT", "STRAWBERRY"},
                      {"THOR", "SPARKLE", "DARK", "CAPTAIN"},
                      {"GROOT", "ROGERS", "WATCH", "SENORITTA"}};

int main()
{
  system("cls");
  rules();
  user_info();
  system("cls");
  header();
  showmap();
  wrong = 0;
  random_word();
    while (guess_word.compare(original_word) != 0 && wrong < 5)
    {
      guess();
    }
  check_answer();   
  print_score();
} 

void header()           // that will display welcome header
{
  cout << "***********************" << endl;
  cout << "Welcome to HANGMAN game" << endl;
  cout << "***********************" << endl;
  cout << endl;
}
void showmap()           // that will display hanging map
{
  for (int i = 0; i < 18; i++)
  {
    for (int j = 0; j < 32; j++)
    {
      cout << map[i][j];
    }
    cout << endl;
  }
}
void user_info()  // that will take user info
{
  cout << "\n\n\t\t Enter Your Name : ";
  cin>>user;
  cout << "\n\n\t\t HELLO " << user << "\n\n\n\t\t *** PLEASE TURN ON CAPSLOCK *** " << endl;
}
void rules()
{
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
  cout << endl;
  cout << "                      ~~~~~~~~~~~~~~~THINK BEFORE YOU GUESS~~~~~~~~~~~~" << endl;
  cout << endl;
  cout << "                                       ******RULES*****" << endl;
  cout << endl;
  cout<<" 1. Turn  your capslock on. " << endl;
  cout<<" 2. In this game 1st player will enter a word. Second player will then have to guess that word."<<endl;
  cout<<" 3. Second player will have 3 tries to guess that word. If he/she fails to guess the word then the program says you lose the game."<<endl;
  cout<<" 4. If he/she is able to guess the word correctly within 3 tries then the player wins.";
}
void random_word()           // this function will use for generating random word
{
   srand(time(0));
   original_word = words[rand() % 4][rand() % 4];
   guess_word = original_word; 
  for (int i = 0; i < guess_word.length(); i++)
    guess_word[rand() % ((guess_word.length()) / 2)] = '*';
} 
void guess()
{
  cout << "\n\n\t\t GUESS CHARACTER IN : " << endl;
  for (int j = 0; j < guess_word.length(); j++)
  {
    cout << guess_word[j];
  }
  cout << "     \t";
  cin >> c;
  for (int j = 0; j < guess_word.length(); j++)
  {
    if (original_word[j] == c)
    {
      gotoxy(5, 22);
      p++;
      if (guess_word[j] == c)
      {
      	cout<<" ";
        gotoxy(5, 22);
        break;
      }
      else
      {
        guess_word[j] = c;
      }
    }
  }
  if (p == 0)
  {
    wrong++;
    hangman();
    gotoxy(5, 22);
  }
  p = 0;
}
char check_answer()
{
  if (guess_word.compare(original_word) == 0)
  {
    score = score + 10;
    cout << "\n\n\t\t  Well Done  \t The original word is :";
    for (i = 0; i < guess_word.length(); i++)
    {
      cout << original_word[i];
    }
    cout << " \n\n\t\t Did you enjoy playing it (y/n) : ";
    cin >> x;
    X = ((x == 'y' || x == 'Y' || x == 'n' || x == 'N'));
  }
  else
  {
    cout << "\n\n\n";
    cout << "              *************OH NOOOO!! GAME OVER ********* ";
    cout << "                 The Original Word was : ";
    for (i = 0; i < guess_word.length(); i++)
    cout << original_word[i];
    cout << " \n\n\t\t Did you enjoy playing it (y/n) : ";
    cin >> x;
    X = ((x == 'y' || x == 'Y' || x == 'n' || x == 'N'));
  }
  return X;
}
void print_score()
{
  system("cls");
  cout << endl;
  cout << endl;
  cout << "            Thanks for playing " << user << ". Your final score is " << score << ".";
}
void hangman()
{
  if (wrong == 1)
  {
    gotoxy(13, 10);
    cout << "O";
  }
  if (wrong == 2)
  {
    gotoxy(13, 11);
    cout << "|";
  }
  if (wrong == 3)
  {
    gotoxy(12, 12);
    cout << "/|\\";
  }
  if (wrong == 4)
  {
    gotoxy(12, 13);
    cout << "/|\\";
  }
}
void gotoxy(short a, short b)
{
  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD position = {a, b};
  SetConsoleCursorPosition(hStdout, position);
}
