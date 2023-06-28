#include <iostream>
using namespace std;
int main(){
	int hours;
	float pay,totalpay,paytax,clothes,remaining,school,bonds,addbonds;
	cout<<"Enter pay per hour : ";
	cin>>pay;
	cout<<"Enter Hours you work per week : ";
	cin>>hours;
	totalpay=5*(pay*hours);
	paytax=totalpay - ((totalpay*14)/100);
	clothes=(paytax*10)/100;
	remaining=paytax-clothes; 
	school=(remaining*1)/100;
	remaining=remaining-school;
	bonds=(remaining*25)/100;
	addbonds=bonds*0.50;
	cout<<"Pay before paying tax : "<<totalpay<<endl;
	cout<<"Pay After paying tax : "<<paytax<<endl;;
	cout<<"Money spent on buying clothes and other accessories : "<<clothes<<endl;
    cout<<"Money spent on buying school supplies : "<<school<<endl;
    cout<<"Money spent to buy saving bonds : "<<bonds<<endl;
    cout<<"Money spent by parents to buy saving bonds : "<<addbonds<<endl;
}
