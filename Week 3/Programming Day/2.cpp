#include <iostream>
using namespace std;
int main(){
    int sqlength,area,reclength,rectwidth,radius,base,heigth;
    string figure;
    cout<<"Enter the shape of figure : ";
    cin>>figure;
    if(figure=="Square"){
    	cout<<"Enter the length : ";
    	cin>>sqlength;
    	area=sqlength*sqlength;
    	cout<<"Area of square will be : "<<area<<endl;
	}
	else if(figure=="Rectangle"){
    	cout<<"Enter the length : ";
    	cin>>reclength;
    	cout<<"Enter the width : ";
    	cin>>rectwidth;
    	area=reclength*rectwidth;
    	cout<<"Area of rectangle will be : "<<area<<endl;
	}
	else if(figure=="Circle"){
    	cout<<"Enter the radius : ";
    	cin>>radius;
    	area=2*3.14*radius;
    	cout<<"Area of circle will be : "<<area<<endl;
	}
	else if(figure=="Triangle"){
    	cout<<"Enter the length of base : ";
    	cin>>base;
    	cout<<"Enter the length of heigth : ";
    	cin>>heigth;
    	area=0.5*base*heigth;
    	cout<<"Area of triangle will be : "<<area<<endl;
	}
}
