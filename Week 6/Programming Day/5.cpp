#include <iostream>
using namespace std;
int kilometers;
float fare1,fare2,fare3;
string time;
void busFare();
void taxiFare();
void trainFare();
void compareFare();
int main(){
	cout<<"Enter your time : ";
	cin>>time;
	cout<<"Enter your kilometers : ";
	cin>>kilometers;
	busFare();
    trainFare();
    taxiFare();
	compareFare();
}
void busFare(){
	if ((kilometers > 20) && (kilometers <= 100)){
        if (time == "Day"){
            fare1 = 0.70 + (kilometers * 0.79);
            fare2 = (kilometers * 0.09);
            cout << fare2 << endl;
        }
        else if (time == "Night")
        {
            fare1 = 0.70 + (kilometers * 0.90);
            fare2 = (kilometers * 0.09);
            cout << fare2 << endl;
        }
    }
}
void trainFare(){
	if (kilometers > 100){
        if (time == "Day"){
            fare1 = 0.70 + (kilometers * 0.79);
            fare2 = (kilometers * 0.09);
            fare3 = (kilometers * 0.06);
            cout << fare3 << endl;
        }
        else if (time == "Night")
        {
            fare1 = 0.70 + (kilometers * 0.90);
            fare2 = (kilometers * 0.09);
            fare3 = (kilometers * 0.06);
            cout << fare3 << endl;
        }
    }
}
void taxiFare(){
	if ((kilometers >= 0) && (kilometers <= 20)){
        if (time == "Day")
        {
            fare1 = 0.70 + (kilometers * 0.79);
            cout << fare1 << endl;
        }
        else if (time == "Night")
        {
            fare1 = 0.70 + (kilometers * 0.90);
            cout << fare1 << endl;
        }
    }
}
void compareFare(){
	if ((kilometers >= 0) && (kilometers <= 20)){
        cout << "Cheapest fare is by taxi : " << fare1 << endl;
    }
    else if ((kilometers > 20) && (kilometers <= 100))
    {
        if (fare1 < fare2)
        {
            cout << "Cheapest fare is by taxi : " << fare1 << endl;
        }
        else
        {
            cout << "Cheapest fare is by bus : " << fare2 << endl;
        }
    }
    else if ((kilometers > 100) && (kilometers <= 5000))
    {
        if ((fare1 < fare2) && (fare1 < fare3))
        {
            cout << "Cheapest fare is by taxi : " << fare1 << endl;
        }
        else if ((fare2 < fare3) && (fare2 < fare1))
        {
            cout << "Cheapest fare is by bus : " << fare2 << endl;
        }
        else if ((fare3 < fare2) && (fare3 < fare1))
        {
            cout << "Cheapest fare is by train : " << fare3 << endl;
        }
    }
}
