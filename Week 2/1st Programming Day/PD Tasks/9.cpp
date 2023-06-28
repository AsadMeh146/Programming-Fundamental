#include <iostream>
using namespace std;
int main(){
	float liter,price,profit;
	float carton,perliter,perprofit;
	cout<<"Enter amount of liter milk : ";
	cin>>liter;
	cout<<"Enter Amount of milk per liter : ";
	cin>>perliter;
	cout<<"Enter Profit per liter : ";
	cin>>perprofit;
	carton=liter/3.78;
	price=liter*perliter;
	profit=liter*perprofit;
	cout<<"Number of carton required : "<<carton<<endl;
	cout<<"Price of producing milk will be : "<<price<<endl;
	cout<<"Total Profit : "<<profit<<endl;
}
