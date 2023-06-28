#include <iostream>
using namespace std;
int main(){
	int budget;
	string category;
	int group;
	float bill,remaining,transportation;
	cout<<"Enter the category : ";
	cin>>category;
	cout<<"Enter the budget : ";
	cin>>budget;
	cout<<"No. of people in group : ";
	cin>>group;
	if(category=="VIP" && (group>=1 && group<=4)){
		transportation=budget*0.75;
        budget=budget-transportation;	
		bill=budget;
		if(bill>=500*group){
			remaining=bill-(500*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	}
	else if(category=="VIP" && (group>4 && group<=9)){
		transportation=budget*0.60;
        budget=budget-transportation;
		bill=budget;
		if(bill>=500*group){
			remaining=bill-(500*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
        else{
			cout<<"No!You not have sufficient budget.....";
		}  
	}
	else if(category=="VIP" && (group>9 && group<=24)){
		transportation=budget*0.50;
        budget=budget-transportation;
		bill=budget;
		if(bill>=500*group){
			remaining=bill-(500*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	}
	else if(category=="VIP" && (group>24 && group<=50)){
		transportation=budget*0.40;
        budget=budget-transportation;
		bill=budget;
		if(bill>=(500*group)){
			remaining=bill-(500*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	}
	else if(category=="VIP" && (group>50)){
		transportation=budget*0.25;
        budget=budget-transportation;
		bill=budget;
		if(bill>=(500*group)){
			remaining=bill-(500*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	} 
	else if(category=="Normal" && (group>=1 && group<=4)){
		transportation=budget*0.75;
        budget=budget-transportation;
		bill=budget;
		if(bill>=(250*group)){
			remaining=bill-(250*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	}
	else if(category=="Normal" && (group>4 && group<=9)){
		transportation=budget*0.60;
        budget=budget-transportation;
		bill=budget;
		if(bill>=(250*group)){
			remaining=bill-(250*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
        else{
			cout<<"No!You not have sufficient budget.....";
		}  
	}
	else if(category=="Normal" && (group>9 && group<=24)){
		transportation=budget*0.50;
        budget=budget-transportation;
		bill=budget;
		if(bill>=(250*group)){
			remaining=bill-(250*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	}
	else if(category=="Normal" && (group>24 && group<=50)){
		transportation=budget*0.40;
        budget=budget-transportation;
		bill=budget;
		if(bill>=(250*group)){
			remaining=bill-(250*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	}
	else if(category=="Normal" && (group>50)){
		transportation=budget*0.25;
        budget=budget-transportation;
		bill=budget;
		if(bill>=(250*group)){
			remaining=bill-(250*group);
			cout<<"Yes!You have sufficient budget and your remaining budget is : "<<remaining;
		}
		else{
			cout<<"No!You not have sufficient budget.....";
		}
	} 
}
