#include <iostream>
using namespace std;
int main(){
	int shares,service,purchase,selling,invested,amount;
	cout<<"No of shares sold : ";
	cin>>shares;
	cout<<"Purchase price of each shares : ";
	cin>>purchase;
	cout<<"Selling price of each share : ";
	cin>>selling;
	invested=(shares*purchase)+((purchase*1.5)/100);
	service=((purchase*1.5)/100)+((selling*1.5)/100);
	amount=(selling*shares)-((selling*1.5)/100);
	cout<<"Price she invested : "<<invested<<endl;
	cout<<"Total servies charges : "<<service<<endl;
	cout<<"The amount received after selling the stock : "<<amount<<endl;
    
}
