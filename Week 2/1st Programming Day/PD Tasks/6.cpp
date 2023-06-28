#include <iostream>
using namespace std;
int main(){
	float price,markup_price,salestax,taxpercentage,finalprice,marketprice;
	float markuppercent;
	cout<<"Enter Original Price : ";
	cin>>price;
	cout<<"Enter Marked Up price of product : ";
	cin>>markup_price;
	cout<<"Enter Sales Tax in percentage : ";
	cin>>salestax;
	markuppercent=(markup_price/price)*100;
	taxpercentage=(price*salestax)/100;
	marketprice=price+markup_price;
	finalprice=marketprice+taxpercentage;
	cout<<"Markup Percentage : "<<markuppercent<<endl;
	cout<<"Total Marketing price : "<<marketprice<<endl;
	cout<<"Final price of product will be : "<<finalprice;
	
	
}
