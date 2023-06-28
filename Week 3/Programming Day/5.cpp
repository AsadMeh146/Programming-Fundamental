#include <iostream>
using namespace std;
int main(){
    int side1,side2,side3,sum;
    cout<<"Enter length of side : ";
    cin>>side1;
    cout<<"Enter length of side : ";
    cin>>side2;
    cout<<"Enter length of side : ";
    cin>>side3;
    if(side1==side2 && side1==side3){
    	cout<<"Your triangle is equilateral ....";
	}
	else if(side1==side2 || side1==side3){
		cout<<"Your triangle is isosceles.....";
	}
	else if(side1!=side2 && side1!=side3){
		cout<<"Your triangle is scalene.....";
	}
}
