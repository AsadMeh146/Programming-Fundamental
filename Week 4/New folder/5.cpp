#include <iostream>
using namespace std;
int main(){
	int number;
	int unit,tens,hundred;
	int total;
	cout<<"Enter your number : ";
	cin>>number;
	hundred=number/100;
	tens=(number%100)/10;
	unit=number%10;
    hundred=hundred*hundred*hundred;
    tens=tens*tens*tens;
    unit=unit*unit*unit;
    total=hundred+unit+tens;
    if(total==number){
    	cout<<"It is Armstrong number .....";
	}
	else {
		cout<<"It is not an armstrong number .....";
	}
}
