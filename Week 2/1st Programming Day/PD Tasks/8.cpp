#include <iostream>
using namespace std;
int main(){
	float liter,price,profit;
	float carton;
	cout<<"Enter amount of liter milk : ";
	cin>>liter;
	carton=liter/3.78;
	price=liter*0.38;
	profit=liter*0.27;
	cout<<"Number of carton required : "<<carton<<endl;
	cout<<"Price of producing milk will be : "<<price<<endl;
	cout<<"Total Profit : "<<profit<<endl;
}
