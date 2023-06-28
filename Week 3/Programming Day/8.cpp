#include <iostream>
using namespace std;
int main(){
	string screen;
	int row,columns,totalseats;
	float price;
	cout<<"Enter type of screening : ";
	cin>>screen;
	cout<<"Enter no. of rows : ";
	cin>>row;
	cout<<"Enter no. of columns : ";
	cin>>columns;
	totalseats=row*columns;
	if(screen=="Premier"){
		price=12*totalseats;	
	}
	else if(screen=="Normal"){
		price=7.50*totalseats;	
	}
	else if(screen=="Discount"){
		price=5*totalseats;	
	}
	cout<<"Your total bill will be : "<<price;
}
