#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
// Functions 
void main_menu();                   // to view the main menu(front of program)
void admin(int option);            // that function is for entire admin portion 
void admin_welcome();              // this function ss to display admin welcome     
void add_employee();               // this function add employees
void view_employee();             // this function view added employees
void delete_employee();           // this function delete added employee
void view_stock();                // this function show stock added by employee
void employee(int option);        // this function is used to view entire employee portion
void employee_welcome();          // this function is used to view employee welcome
void add_items();                 // this function is used to add stock by employee
void view_items();               // this function is used to view stock added by employee
void price_change();             // this function is used to change prices of products 
void sorting();     // this function sort all the prodoucts in order
void password_change();         // this function is used to change password of employee account
void customer(int option);     // this function is for entire customer portion
void customer_welcome();      // this function is to display customer welcome
void place_the_order(string select);   // this function will take the order from customer
void pay_the_bill();         // this function will pay the customer bill
void add_computer();
void add_laptop();
string getrecord(string record, int x_1);
string getrecord2(string record_2, int x_2);
string getrecord3(string record_3, int x_3);
void read_employee(); // this function will read entered employee from file.
void read_items();
void read_items2();
// Arrays 

string employee_name[10];      
string employee_pass[10];
string employee_cnic[10];
string employee_name2[10];      
string employee_pass2[10];
string employee_cnic2[10];
string computer_items[10];
int computer_price[10];
int computer_quantity[10];
string computer_items2[10];
int computer_price2[10];
int computer_quantity2[10];
string laptop_items[10];
int laptop_price[10];
int laptop_quantity[10];
string laptop_items2[10];
int laptop_price2[10];
int laptop_quantity2[10];
string computerorder[10];
int computerquantity[10];
string laptoporder[10];
int laptopquantity[10];

// Counters and variables
int i=0;
int q=0;
int r=0;
int t=0;
int a=0;
int s=0;
int id3=0;
int id5=0;
int s1=0;
int idx_1=0;
int s2=0;
int idx_2=0;
int s_3=0;
int idx_3=0;
int s_2=0;
int a_2=0;
string select;
string computer_order_item;
string laptop_order_item;
int computer_order_quantity;
int laptop_order_quantity;
fstream newfile;
fstream newfile2;
fstream newfile3;

int main(){
	main_menu();
	int option;
	while(option!=-1){
		cout<<"1. Admin "<<endl;
		cout<<"2. Employee "<<endl;
		cout<<"3. Customer "<<endl;
		cout<<"-1. Exit "<<endl;
		cout<<endl;
		cout<<"Select your option : ";
		cin>>option;
		if(option==1){
			admin(option);     // this will call the admin function
	}
	    if(option==2){
	    	employee(option);   // this will call employee function
	}
		if(option==3){
			customer(option);   // this will call customer function
	}
	}
    }
void main_menu(){
	cout<<"************************************************************"<<endl;
	cout<<"Welcome to Computer and Laptop Accessories Management System"<<endl;
    cout<<"************************************************************"<<endl;
    }
void admin_welcome(){
	cout<<"**********************"<<endl;
	cout<<"Welcome to admin page "<<endl;
    cout<<"**********************"<<endl;
    }
void admin(int option){
    system("CLS");
	string user="Asad";    // admin fixed username
	string pass="12345";   // admin fixed password
	string userName;     
	string userPass;
	main_menu();
	cout<<"Enter your name : ";
	cin>>userName;              
	cout<<"Enter your password : ";
	cin>>userPass;
	if(userName==user && userPass==pass){ // this will check admin name and pass is correct or not
		cout<<"Logged in successfully.........."<<endl;
		cout<<"Press any key to continue....... "<<endl;
		getch();
		system("CLS");
		admin_welcome();
        while(option!=5){
     	cout<<"1. Add an employee "<<endl;
     	cout<<"2. View an employee "<<endl;
     	cout<<"3. Delete an employee "<<endl;
     	cout<<"4. View the availabe stock "<<endl;
     	cout<<"5. Exit "<<endl;
     	cout<<endl;
     	cout<<"Select any option : ";
     	cin>>option;
     	if(option==1){
     		add_employee();        // this will call add employee function
		    read_employee();
		}
		if(option==2){
			view_employee();      // this will call view employee function
			getch();
			system("CLS");
			admin_welcome();
		}
		if(option==3){
			delete_employee();   // this will call delete the employee function
			getch();
			system("CLS");
			admin_welcome();
		}
		if(option==4){
			view_stock();       // this will call view stock function
			getch();
			system("CLS");
			admin_welcome();
		}
		if(option==5){
			system("CLS");
		    main_menu();
		}
	}
	}
	else{
		cout<<"Invalid uername or password......."<<endl;
		cout<<"Try again ....."<<endl;
	    getch();
	    system("CLS");
		main_menu();
    }
    }
void add_employee(){
       system("CLS"); 	
       string agree;
	   admin_welcome();
	   cout<<"There are some rules for the job.  "<<endl;
       cout<<"1. You have to come on time which is 9'o clock. "<<endl;
       cout<<"2. Your job time will be 8 hours. "<<endl;
       cout<<"3. You will get salary on 5 of every month and your salary will be fixed which is 15000. "<<endl;
       cout<<endl;
       cout<<"Are you agree to all the terms and conditions : ";
       cin>>agree;
       cout<<endl;
       if(agree=="Yes"){
       	newfile.open("admin.txt",ios::out);
		cout<<"Enter your name : ";
       	cin>>employee_name[i];    
       	newfile<<employee_name[i]<<",";
		cout<<"Enter your CNIC number : ";
       	cin>>employee_cnic[i];
       	newfile<<employee_cnic[i]<<",";
		cout<<"Enter your password : ";
       	cin>>employee_pass[i];
       	newfile<<employee_pass[i]<<","<<endl;
		cout<<"Congratulations!!!You are hired....... "<<endl;    // employee will be added one by one
       	getch();
       	q=i;               // this counter will take index value
       	i++;       
		system("CLS");
       	admin_welcome();
	    newfile.close();
	   }
	   if(agree=="No"){
	   	cout<<"Hope for your better future.Have a nice day "<<endl;
	   	getch();
		system("CLS");
		admin_welcome();
		
	}
    }
void read_employee(){
	newfile.open("admin.txt", ios::in);
	string record;
	while (getline(newfile, record))
	{
        employee_name2[idx_1] = (getrecord(record, 0));
		employee_cnic2[idx_1] = (getrecord(record, 1));
		employee_pass2[idx_1] = (getrecord(record, 2));
		s1=idx_1;
		idx_1++;
	}
	newfile.close();	
}
void view_employee(){
	   system("CLS"); 	
	   admin_welcome();
	   cout<<"Employee Name"<<"\t"<<"CNIC Number"<<"\t"<<"Password"<<endl;
	   for(int k1=0;k1<=q;k1++){	
       cout<<employee_name2[k1]<<"\t"<<employee_cnic2[k1]<<"\t"<<employee_pass2[k1]<<endl;  
    }
    }
void delete_employee(){
	   system("CLS");
	   string name,cnic,password; 	
	   admin_welcome();
       cout<<"Enter your name : ";
       cin>>name;
       cout<<"Enter your CNIC number : ";
       cin>>cnic;
       cout<<"Enter your password : ";
       cin>>password;
       for(int w=0;w<=q;w++){
       if(name==employee_name2[w] && cnic==employee_cnic2[w] && password==employee_pass2[w]){
         cout<<"User deleted successfully ......"<<endl;
		 employee_name2[w]=" ";
		 employee_cnic2[w]=" ";      	   	
		 employee_pass2[w]=" ";
	}
	   else if(name!=employee_name2[w] && cnic!=employee_cnic2[w] && password!=employee_pass2[w]) {
	   	cout<<"User is not available....."<<endl;
	}	
	} 
    }
void view_stock(){
	system("CLS"); 	
    admin_welcome();
	cout<<"Enter the category : ";
    cin>>select;                       
    if(select=="Computer"){
    cout<<"Item Name "<<"\t"<<"Price "<<"\t"<<"Quantity"<<endl;
	for(int y=0;y<=t;y++){	
    cout<<computer_items2[y]<<"\t"<<computer_price2[y]<<"\t"<<computer_quantity2[y]<<endl;
    }	
	}
	if(select=="Laptop"){
	cout<<"Item Name "<<"\t"<<"Price "<<"\t"<<"Quantity"<<endl;
	for(int y2=0;y2<=s_2;y2++){	
    cout<<laptop_items2[y2]<<"\t"<<laptop_price2[y2]<<"\t"<<laptop_quantity2[y2]<<endl;
    } 
    }
    }    
string getrecord(string record, int x_1)
{
	int commas = x_1;
	int commasfound = 0;
	string store_1 = "";
	int f_1 = 0;
	while (commasfound < 3 && f_1 < record.length())
	{
		char c_1 = record[f_1];
		if (c_1 == ',')
		{
			commasfound = commasfound + 1;

		}
		else if (commasfound == x_1)
		{
			store_1 = store_1 + c_1;
		}
		f_1 = f_1 + 1;
	}
	return store_1;
}
void employee_welcome(){
      cout<<"**************************"<<endl;
	  cout<<"Welcome to employee page "<<endl;	
      cout<<"**************************"<<endl; 
    }
void employee(int option){
    system("CLS");
	string emp_Name;
	string emp_Pass;
	main_menu();
	cout<<"Enter your name : ";               
	cin>>emp_Name; 
	cout<<"Enter your password : ";
	cin>>emp_Pass;	
	for(int e=0;e<=q;e++){
		if(emp_Name==employee_name2[e] && emp_Pass==employee_pass2[e]){   // this will check employee username and password and then log in
		cout<<"Logged in successfully.........."<<endl;
		cout<<"Press any key to continue....... "<<endl;
		getch();
		system("CLS");
		employee_welcome();
		while(option!=6){
			cout<<"1. Add items "<<endl;
			cout<<"2. View items "<<endl;
			cout<<"3. Change the price of items "<<endl;
			cout<<"4. Sort the items "<<endl;
			cout<<"5. Change the password of account "<<endl;
			cout<<"6. Exit "<<endl;
			cout<<endl;
			cout<<"Select Your option : ";
			cin>>option;
			if(option==1){
				add_items();
				getch();
	            system("CLS");
	            employee_welcome();           // this will call add items function
			}
			if(option==2){
				view_items();        // this will call view items function
				getch();
			    system("CLS");
			    employee_welcome();
			}
			if(option==3){
				price_change();      //  this will call price change function
			}
			if(option==4){
				sorting();     // this will call sorting of items function
				getch();
			    system("CLS");
			    employee_welcome();
			}
			if(option==5){
				password_change();   // this will call password change function
			}
			if(option==6){
				system("CLS");
				main_menu();
			}
	}
	}
	else if(emp_Name!=employee_name2[e] && emp_Pass!=employee_pass2[e]){
		cout<<"Invalid username or password......."<<endl;
		getch();
		system("CLS");
		main_menu();
	}
	}
    }
void add_items(){
	system("CLS");
	employee_welcome();
	string category;
	cout<<"Enter the category : ";
	cin>>category;
	if(category=="Computer"){
	add_computer();
	read_items(); 
	}
	if(category=="Laptop"){
	add_laptop();
	read_items2();
}
}
void add_computer(){
	string computeritem1;
	int computerprice1,computerquantity1;
	newfile2.open("items.txt",ios::out);
	cout<<"Enter the item : ";
	cin>>computeritem1;
	cout<<"Enter the price of item : ";
	cin>>computerprice1;
	cout<<"Enter the quantity : ";
	cin>>computerquantity1;
	if(computerprice1>0 && computerquantity1>0){
	computer_items[r]=computeritem1;	
	newfile2<<computer_items[r]<<",";
	computer_price[r]=computerprice1;
	newfile2<<computer_price[r]<<",";
	computer_quantity[r]=computerquantity1;
	newfile2<<computer_quantity[r]<<","<<endl;
	t=r;                          // this will store index value
	r++;
	cout<<"Item added successfully ....."<<endl;	// items will be added one by one	
	}
	else if(computerprice1<0 || computerquantity1<0){
	cout<<"You enter invalid value....."<<endl;	
	}
	newfile2.close();
}
void add_laptop(){
	string laptopitem_1;
	int laptopprice_1,laptopquantity_1;
	newfile3.open("laptop.txt",ios::out);
	cout<<"Enter the item : ";
	cin>>laptopitem_1;
	cout<<"Enter the price of item : ";
	cin>>laptopprice_1;
	cout<<"Enter the quantity : ";
	cin>>laptopquantity_1;
	if(laptopprice_1>0 && laptopquantity_1>0){
	laptop_items[a_2]=laptopitem_1;	
	newfile3<<laptop_items[a_2]<<",";
	laptop_price[a_2]=laptopprice_1;
	newfile3<<laptop_price[a_2]<<",";
	laptop_quantity[a_2]=laptopquantity_1;
	newfile3<<laptop_quantity[a_2]<<","<<endl;
	s_2=a_2;                          // this will store index value
	a_2++;
	cout<<"Item added successfully ....."<<endl;	// items will be added one by one	
	}
	else if(laptopprice_1<0 || laptopquantity_1<0){
	cout<<"You enter invalid value....."<<endl;	
	}
	newfile3.close();
}
void read_items(){
	newfile2.open("items.txt", ios::in);
	string record_2;
	while (getline(newfile2, record_2))
	{
        computer_items2[idx_2] = (getrecord(record_2, 0));
		computer_price2[idx_2] = stoi(getrecord(record_2, 1));
		computer_quantity2[idx_2] = stoi(getrecord(record_2, 2));
		s2=idx_2;
		idx_2++;
	}
	newfile2.close();	
}    
void read_items2(){
	newfile3.open("laptop.txt",ios::in);
	string record_3;
	while (getline(newfile3, record_3))
	{
        laptop_items2[idx_3] = (getrecord(record_3, 0));
		laptop_price2[idx_3] = stoi(getrecord(record_3, 1));
		laptop_quantity2[idx_3] = stoi(getrecord(record_3, 2));
		s_3=idx_3;
		idx_3++;
	}
	newfile3.close();	
}    

void view_items(){
	system("CLS"); 	
    employee_welcome();
	cout<<"Enter the category : ";
    cin>>select;
    if(select=="Computer"){
    cout<<"Item Name "<<"\t"<<"Price "<<"\t"<<"Quantity"<<endl;
	for(int y_01=0;y_01<=t;y_01++){	
    cout<<computer_items2[y_01]<<"\t"<<computer_price2[y_01]<<"\t"<<computer_quantity2[y_01]<<endl;
    }	
	}
	if(select=="Laptop"){
	cout<<"Item Name "<<"\t"<<"Price "<<"\t"<<"Quantity"<<endl;
	for(int y_2=0;y_2<=s_2;y_2++){	
    cout<<laptop_items2[y_2]<<"\t"<<laptop_price2[y_2]<<"\t"<<laptop_quantity2[y_2]<<endl;
    } 
	}
}
string getrecord_3(string record_3, int x_3)
{
	int commas_3 = x_3;
	int commasfound_3 = 0;
	string store_3 = "";
	int f_3 = 0;
	while (commasfound_3 < 3 && f_3 < record_3.length())
	{
		char c_3 = record_3[f_3];
		if (c_3 == ',')
		{
			commasfound_3 = commasfound_3 + 1;
		}
		else if (commasfound_3 == x_3)
		{
			store_3 = store_3 + c_3;
		}
		f_3 = f_3 + 1;
	}
	return store_3;
}
string getrecord_2(string record_2, int x_2)
{
	int commas_2 = x_2;
	int commasfound_2 = 0;
	string store_2 = "";
	int f_2 = 0;
	while (commasfound_2 < 3 && f_2 < record_2.length())
	{
		char c_2 = record_2[f_2];
		if (c_2 == ',')
		{
			commasfound_2 = commasfound_2 + 1;

		}
		else if (commasfound_2 == x_2)
		{
			store_2 = store_2 + c_2;
		}
		f_2 = f_2 + 1;
	}
	return store_2;
}
void price_change(){
	system("CLS"); 	
    employee_welcome();
    int newprice;
    int old_price;
    string item_name;
    cout<<"Enter the category : ";
    cin>>select;
    if(select=="Computer"){
    cout<<"Enter name of item : ";
	cin>>item_name;
	cout<<"Enter price of old price of item : ";
	cin>>old_price;
	for(int u=0;u<=t;u++){
		if(item_name==computer_items2[u] && old_price==computer_price2[u]){ // this will check entered name and price is same as added
			cout<<"Enter the new price of item : ";
			cin>>newprice;
			cout<<"Price of item is changed successfully...."<<endl;
			getch();
			computer_price2[u]=newprice;
			getch();
		    system("CLS");
	}
	}
    }
	if(select=="Laptop"){
	cout<<"Enter name of item : ";
	cin>>item_name;
	cout<<"Enter price of old price of item : ";
	cin>>old_price;
	for(int o=0;o<=s_2;o++){
		if(item_name==laptop_items2[o] && old_price==laptop_price2[o]){
			cout<<"Enter the new price of item : ";
			cin>>newprice;
			cout<<"Price of item is changed successfully...."<<endl;
			getch();
			laptop_price2[o]=newprice;
			getch();
		    system("CLS");
	}
	}
	}	
    }
void sorting(){
	system("CLS"); 	
    employee_welcome();
	int newarray[10];
	for(int f=0;f<=t;f++){
		newarray[f]=computer_price2[f];
	}
	int largesti=0;
	int largest=0;
	int copyarray[10];
	largest=newarray[0];
	for(int v=0;v<=t;v++){
		for(int x=1; x<=t; x++){
		if(largest<newarray[x]){
			largest=newarray[x];
			largesti=x;
	}
	}
	copyarray[v]=largesti;
	newarray[largesti]=-1;
	largest=newarray[0];
	largesti=0;
	}
	int newarray2[10];
	for(int f2=0;f2<=s_2;f2++){
		newarray2[f2]=laptop_price2[f2];
	}
	int largesti2=0;
	int largest2=0;
	int copyarray2[10];
	largest2=newarray2[0];
	for(int v2=0;v2<=s_2;v2++){
		for(int x2=1; x2<=s_2; x2++){
		if(largest2<newarray2[x2]){
			largest2=newarray2[x2];
			largesti2=x2;
	}
	}
	copyarray2[v2]=largesti2;
	newarray2[largesti2]=-1;
	largest2=newarray2[0];
	largesti2=0;
	}
	cout<<"           Following are the computer items "<<endl;
	cout<<"Item Name "<<"\t"<<"Price "<<"\t"<<"Quantity"<<endl;
	for(int m=0;m<=t;m++){
	int id=copyarray[m];
	cout<<computer_items2[id]<<"\t"<<computer_price2[id]<<"\t"<<computer_quantity2[id]<<endl;
	}
	cout<<"           Following are the laptop items "<<endl;
	cout<<"Item Name "<<"\t"<<"Price "<<"\t"<<"Quantity"<<endl;
	for(int m2=0;m2<=s_2;m2++){
	int id2=copyarray2[m2];
	cout<<laptop_items2[id2]<<"\t"<<laptop_price2[id2]<<"\t"<<laptop_quantity2[id2]<<endl;
	}
    }	
void password_change(){
	system("CLS"); 	
    employee_welcome();
    string check_pass;
    string new_pass;
    cout<<"Enter your previous password : ";
    cin>>check_pass;
    for(int id1=0;id1<=q;id1++){
    if(check_pass==employee_pass2[id1]){
    	cout<<"Enter your new password : ";
    	cin>>new_pass;
    	employee_pass2[id1]=new_pass;
    	cout<<"Your password is changed successfully....."<<endl;
	    getch();
        system("CLS");
        employee_welcome();
	}
	else if(check_pass!=employee_pass2[id1]){
		cout<<"Wrong password ......"<<endl;
        getch();
        system("CLS");
        employee_welcome();
	}	
	}
    }
void customer_welcome(){
	cout<<"*************************"<<endl;
	cout<<"Welcome to customer page "<<endl;
	cout<<"*************************"<<endl;
    }
void customer(int option){
	system("CLS");
	customer_welcome();
	while(option!=4){
	cout<<"1. View the items  "<<endl;
	cout<<"2. Place your order "<<endl;
	cout<<"3. Pay your bill "<<endl;
	cout<<"4. Exit "<<endl;
	cout<<endl;
	cout<<"Select your option : ";
	cin>>option;
	if(option==1){
		view_stock();           // this will call view stock function
		getch();
		system("CLS");
		customer_welcome();
	}
	if(option==2){
		place_the_order(select);  // this will call place the order function
	}
	if(option==3){
		pay_the_bill();             // this will call pay the bill function
		getch();
        system("CLS");
	    customer_welcome();
	}
	if(option==4){
		system("CLS");
		customer_welcome();
	}
	}	
    }
void place_the_order(string select){
	system("CLS");
	customer_welcome();
	cout<<"Select your category : ";
	cin>>select;
	if(select=="Computer"){
	cout<<"Enter Your Item : ";
	cin>>computer_order_item;
	cout<<"Enter The Quantity : ";
	cin>>computer_order_quantity;
	for(int idx1=0;idx1<=t;idx1++){
		if(computer_order_item==computer_items[idx1]){
		if(computer_quantity2[idx1]==0 || computer_quantity2[idx1]<computer_order_quantity){
	        cout<<"Sorry product is not available......";
		}
		else if(computer_order_quantity<=computer_quantity2[idx1]){
			cout<<"Your order is added successfully......";
			computerorder[idx1]=computer_order_item;
			computerquantity[idx1]=computer_order_quantity;
			computer_quantity2[idx1]= computer_quantity2[idx1]-computer_order_quantity;
		    id3++;
	}
	}
	}	
	}
	if(select=="Laptop"){
	cout<<"Enter Your Item : ";
	cin>>laptop_order_item;
	cout<<"Enter The Quantity : ";
	cin>>laptop_order_quantity;
	for(int idx2=0;idx2<=s_2;idx2++){
		if(laptop_order_item==laptop_items2[idx2]){
		if(laptop_quantity2[idx2]==0 || laptop_quantity2[idx2]<laptop_order_quantity){
	        cout<<"Sorry product is not available......";
		}
		else if(laptop_order_quantity<=laptop_quantity2[idx2]){
			cout<<"Your order is added successfully......";
			laptoporder[idx2]=laptop_order_item;
			laptopquantity[idx2]=laptop_order_quantity;
			laptop_quantity2[idx2]= laptop_quantity2[idx2]-laptop_order_quantity;
		    id5++;
	}
	}
	}
    }
	getch();
	system("CLS");
	customer_welcome();
    }
void pay_the_bill(){
    system("CLS");
	customer_welcome();
	int price1[10];
    int price2[10];
	int bill1=0,bill2=0,total=0;
	for(int as1=0;as1<id3;as1++){
		for(int as2=0;as2<=t;as2++){
		if(computerorder[as1]==computer_items2[as2])	{
			price1[as1]=computer_price2[as2]*computerquantity[as1];	
	}		
	}
	}
	for(int b1=0;b1<id3;b1++){
		bill1+=price1[b1];
	}
	for(int as3=0;as3<id5;as3++){
		for(int as4=0;as4<=s;as4++){
		if(laptoporder[as3]==laptop_items2[as4])	{
			price2[as3]=laptop_price2[as4]*laptopquantity[as3];
	}		
	}
	}
	for(int b2=0;b2<id5;b2++){
		bill2+=price2[b2];
	}
	cout<<"Following is the bill for computer items "<<endl;
	cout<<endl;
	cout<<"Name Of Items"<<"\t"<<"Quantity"<<"\t"<<"Price"<<endl;
	for(int id4=0;id4<id3;id4++){	
	cout<<computerorder[id4]<<"\t"<<computerquantity[id4]<<"\t"<<price1[id4]<<endl;
	}
    cout<<"Your computer product bill is : "<<bill1<<endl;
    cout<<endl;
    cout<<"Following is the bill for laptop items "<<endl;
	cout<<endl;
    cout<<"Name Of Items"<<"\t"<<"Quantity"<<"\t"<<"Price"<<endl;
	for(int id6=0;id6<id5;id6++){	
	cout<<laptoporder[id6]<<"\t"<<laptopquantity[id6]<<"\t"<<price2[id6]<<endl;
	}
    cout<<"Your laptop product bill is : "<<bill2<<endl;
    cout<<endl;
    total=bill1+bill2;
    cout<<"Your total bill will be : "<<total<<endl;
    cout<<"Thanks For Your Payment...."<<endl;
	}
