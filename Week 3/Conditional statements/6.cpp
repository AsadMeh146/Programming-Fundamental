#include<iostream>
using namespace std;
int main(){
    int units;
    float price,unitprice,totalprice;
    cout<<"Enter your units : ";
    cin>>units;
    if(units<=50){
    	price=units*0.50;
    	unitprice=price*0.2;
	    totalprice=price+unitprice;
	}
	else if(units>=50 && units<=150){
    	price=units*0.75;
    	unitprice=price*0.2;
	    totalprice=price+unitprice;
    	
	}
	else if(units>=150 && units<=250){
    	price=units*1.20;
    	unitprice=price*0.2;
	    totalprice=price+unitprice;
    	
	}
	else if(units>=250){
    	price=units*1.50;
    	unitprice=price*0.2;
	    totalprice=price+unitprice;
	}
	cout<<"Your total bill : "<<totalprice;
}
