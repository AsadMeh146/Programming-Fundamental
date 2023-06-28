#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void mainadmin();
void adminwelcome();
void addemployee();
void viewemployee();
void deleteemployee();
void viewstock();
void mainemployee();
void employeewelcome();
void additems();
void viewitems();
void pricechange();
void maincustomer();
void customerwelcome();
void stock();
void placeorder();
void feedback();
void bill();
void interface();
int option;
int totaluser=0;
string admin,pass;
string employee[3];
string pin[3];
string item[3];
string employeecnic[3];
string name[3];
int price[3];
int stockquan[3];
int pay[3];
int price1[10];
int quantity[3];
int newprice[3];
int num[3];
string fdback[3];
string changename[3];
string changepass[3];
string orderitems[3];
int t=0;
int i=0;
int j=0;
int k=0;
int a=0;
int e=0;
int w=0;
int m=0;
int n=0;
int s=0;
int d=0;
int z=0;
int y=0;
int r=0;
string user[3];
string password[3];
string userName="Asad";
string userPass="12345";
int main(){	
    system("CLS");
    interface();
	while(option!=-1){
		cout<<"1. Admin "<<endl;
		cout<<"2. Employee "<<endl;
		cout<<"3. Customer "<<endl;
		cout<<"-1. Exit "<<endl;
		cout<<endl;
		cout<<"Enter your option : ";
		cin>>option;	
		if(option==1){
		mainadmin();
	}
	if(option==2){
        mainemployee();	 
    }
    if(option==3){
        maincustomer();
}
}
}
void interface(){
	cout<<"**********************"<<endl;
	cout<<"Welcome to Snake Sales "<<endl;
	cout<<"**********************"<<endl;
	cout<<endl;
}
void mainadmin(){
	system("CLS");
	cout<<"Enter admin name : ";
	cin>>admin;
	cout<<"Enter admin password : ";
	cin>>pass;	
	if(admin==userName && pass==userPass){
	cout<<"Logged In Successfully....."<<endl;
	cout<<"Press any key to continue.."<<endl;
	getch();
	system("CLS");
	while(option!=5){
	system("CLS");
	adminwelcome();
	cout<<"1. Add an employee  "<<endl;
	cout<<"2. View all employees "<<endl;
	cout<<"3. Delete an employee "<<endl;
	cout<<"4. View All Stock "<<endl;
	cout<<"5. Logout "<<endl;
	cout<<endl;
	cout<<"Enter your option : ";
	cin>>option;
	if (option==1){
		addemployee();
	}
	if(option==2){
		viewemployee();
	}
	if(option==3){
		deleteemployee();
	}
	if(option==4){
		viewstock();
	}
	if(option==5){
		system("CLS");
	}
	}
    }
    else {
	cout<<"Invalid admin username or password.."<<endl;
	cout<<"Press any key to continue..";
	getch();
	system("CLS");
	}
}
void adminwelcome(){
	cout<<"*********************"<<endl;
	cout<<"Welcome to admin page"<<endl;
    cout<<"*********************"<<endl;
}
void addemployee(){
	system("CLS");
	adminwelcome();
	cout<<"Enter Name of employee : ";
	cin>>employee[i];
	cout<<"Enter Employee's CNIC Number : ";
    cin>>employeecnic[i];
    cout<<"Enter Employee's Password : ";
    cin>>pin[i];
    j=i;
    i++;
    cout<<"Employee Has Been Added Successfully..."<<endl;
	getch();
    system("CLS");
}
void viewemployee(){
    system("CLS");
    adminwelcome();
	cout<<"Employee Name"<<"\t"<<"CNIC Number"<<"\t"<<"Password"<<endl;
    for(int k=0;k<=j;k++){	
    cout<<employee[k]<<"\t"<<employeecnic[k]<<"\t"<<pin[k]<<endl;
    getch();  
    system("CLS");
	}      
}
void deleteemployee(){
	system("CLS");
	adminwelcome();
	cout<<"Enter employee name : ";
	cin>>changename[a];
	cout<<"Enter employee password : ";
	cin>>changepass[a];
	cout<<"User deleted successfully...."<<endl;
	if(changename[a]==employee[j] && changepass[a]==pin[j]){
	employee[j]=" ";
	employeecnic[j]=" ";
	pin[j]=" ";
	}
}
void viewstock(){
	system("CLS");
	adminwelcome();
    cout<<"Name Of Items"<<"\t"<<"Price"<<"\t"<<"Quantity"<<endl;
    for(int d=0;d<=n;d++){	
	cout<<item[d]<<"\t"<<price[d]<<"\t"<<stockquan[d]<<endl;
	getch();
	system("CLS");
}
}
void mainemployee(){
	system("CLS");
	cout<<"Enter Your Username : ";
    cin>>user[w];
    cout<<"Enter Your Password : ";
    cin>>password[w];
    e=w;
    w++;
    if(user[e]==employee[j] && password[e]==pin[j]){
        cout<<"Logged In Successfully....."<<endl;
        getch();
        system("CLS");
		while(option!=4){	
		employeewelcome();
		cout<<"1 : Add items in Menu"<<endl;
		cout<<"2 : View items in Menu"<<endl;
		cout<<"3 : Change the price of item"<<endl;
		cout<<"4 : Logout "<<endl;
		cout<<"Select Your Option : ";
		cin>>option;
		system("CLS");
		if(option==1){
		additems();
		}
        if(option==2){
        viewitems();
	}
	    if(option==3){
         pricechange();
	}
	    if(option==4){
	    	system("CLS");
		}
	}
    }
 	else{
	cout<<"Invalid Manager username or password.."<<endl;
	cout<<"Press any key to continue..";
	getch();
	system("CLS");
	}
}
void employeewelcome(){
	cout<<"***********************"<<endl;
	cout<<"Welcome to emloyee page"<<endl;
	cout<<"***********************"<<endl;
}
void additems(){
	 system("CLS");
	 employeewelcome();
	    cout<<"Enter Name of item : ";
	    cin>>item[m];
	    cout<<"Enter The price of item : ";
	    cin>>price[m];
	    cout<<"Enter the quantity : ";
	    cin>>stockquan[m];
		n=m;
	    m++;
	    cout<<"Item Has Been Added Successfully..."<<endl;
	    getch();
	    system("CLS");
}
void viewitems(){
	system("CLS");
    employeewelcome();    
	cout<<"Name Of Items"<<"\t"<<"Price"<<"\t"<<"Quantity"<<endl;
	for(int d=0;d<=n;d++){	
	cout<<item[d]<<"\t"<<price[d]<<"\t"<<stockquan[d]<<endl;
	getch();
	system("CLS");
}
}
void pricechange(){
	system("CLS");
    employeewelcome();
	cout<<"Enter Name of item : ";
	cin>>changename[s];
	cout<<"Enter The old price of item : ";
	cin>>pay[s];
	z=s;
	s++;
    if(changename[z]==item[n]){
	cout<<"Enter the new price of item : ";
	cin>>newprice[z];
	price[n]=newprice[z];
	cout<<"Price Has Been Changed Successfully...."<<endl;
	cout<<"Press any key to continue....."<<endl;
	getch();
	system("CLS");
	}	
}
void maincustomer(){
	system("CLS");
		while(option!=5){
		customerwelcome();	
		cout<<"1 : View the Stock"<<endl;
	    cout<<"2 : Place your order"<<endl;
	    cout<<"3 : Feedback"<<endl;
	    cout<<"4 : View and pay the Bill"<<endl;
	    cout<<"5 : Exit"<<endl;
		cout<<"Select Your Option : ";
		cin>>option;
		system("CLS");
		if(option==1){
		stock();
	}
	if(option==2){
	placeorder();
	}
	if(option==3){
	feedback();
	}
	if(option==4){
	bill();			
	}
	}
}
void customerwelcome(){
	cout<<"************************"<<endl;
	cout<<"Welcome to customer page"<<endl;
    cout<<"************************"<<endl;
}
void stock(){
	system("CLS");
    customerwelcome();    
	cout<<"Name Of Items"<<"\t"<<"Price"<<"\t"<<"Quantity"<<endl;
	for(int d=0;d<=n;d++){	
	cout<<item[d]<<"\t"<<price[d]<<"\t"<<stockquan[d]<<endl;
	getch();
	system("CLS");
	}
}
void placeorder(){
	system("CLS");
	customerwelcome();
	cout<<"Enter Your Item : ";
	cin>>orderitems[r];
	cout<<"Enter The Quantity : ";
	cin>>quantity[r];
	if(quantity[y]<stockquan[d]){
		cout<<"Your order is placed successfully.....";
	    stockquan[d]=stockquan[d]-quantity[y];
	y=r;
	r++;
	system("CLS");
	}
	else if(quantity[y]>stockquan[d]){
		cout<<"Sorry The item is not available in stock .....";
	    getch();
	    system("CLS");
	}
}
void feedback(){
	system("CLS");
	customerwelcome();
	cout<<"Enter Your Name : ";
	cin>>name[r];
	cout<<"Enter Your Contact Number : ";
	cin>>num[r];
	cout<<"Give Your Feedback : ";
	cin>>fdback[r];
    cout<<endl;
    cout<<"Thanks For Your Feedback....."<<endl;
    getch();
    system("CLS");
	
}
void bill(){
		system("CLS");
	    customerwelcome();
	if(quantity[y]<stockquan[d]){
	cout<<"Name Of Items"<<"\t"<<"Quantity"<<"\t"<<"Price"<<endl;
	price1[t]=quantity[y]*price[n];
	for(int t=0;t<=y;t++){	
	cout<<orderitems[t]<<"\t"<<quantity[t]<<"\t"<<price1[t]<<endl;
    getch();
    system("CLS");
	}
    }
	else{
		cout<<"Name Of Items"<<"\t"<<"Quantity"<<"\t"<<"Price"<<endl;
	    getch();
        system("CLS");
	}
}
