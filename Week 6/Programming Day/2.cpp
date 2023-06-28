#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int rollDice(int number);
int sum,times;
int main(){
	cout<<"Enter the Sum for two dice : ";
	cin>>sum;
	times=rollDice(sum);
	cout<<"The number of times the dice are roll to get the sum  "<<sum<<" = "<<times;	
}
int rollDice(int number){
	srand(time(0));
	int total;
    int count=0; 
    while(total!=sum){
    int die1 = rand() % 6 +1;
    int die2 = rand() % 6 +1;
	total=die1+die2;
		count++;
    	if(total==sum){
    		break;
		}
	}
	return count++;
}
