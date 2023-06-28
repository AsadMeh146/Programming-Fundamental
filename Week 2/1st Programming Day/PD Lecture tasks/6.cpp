#include <iostream>
using namespace std;
int main(){
	float price1,price2,price3,price4,price5,totalprice,newprice;
	cout<<"Enter price of 1st product : ";
	cin>>price1;
	cout<<"Enter price of 2nd product : ";
	cin>>price2;
	cout<<"Enter price of 3rd product : ";
	cin>>price3;
	cout<<"Enter price of 4th product : ";
	cin>>price4;
	cout<<"Enter price of 5th product : ";
	cin>>price5;
    totalprice=price1+price2+price3+price4+price5;
    if(totalprice>=1 && totalprice<=1000){
    	newprice=totalprice- (totalprice * 0.01);
    	cout<<"Your actual bill : "<<totalprice<<endl;
    	cout<<"Your discounted bill : "<<newprice<<endl;
	}
	else if(totalprice>=1000 && totalprice<=10000){
		newprice=totalprice- (totalprice * 0.05);
    	cout<<"Your actual bill : "<<totalprice<<endl;
    	cout<<"Your discounted bill : "<<newprice<<endl;
	}
	else if(totalprice>=10000 && totalprice<=10000){
		newprice=totalprice- (totalprice * 0.1);
    	cout<<"Your actual bill : "<<totalprice<<endl;
    	cout<<"Your discounted bill : "<<newprice<<endl;
	}
}
