#include <iostream>
using namespace std;
int main(){
	int centimeter,yards,feet,inch;
	int inches;
	cout<<"Enter your length in centimeter : ";
	cin>>centimeter;
	inches=centimeter/2.54;
	cout<<"Your length in inches will be : "<<inches<<endl;
	cout<<"Your length in yards , feet and inches will be : ";
	yards=inches/36;
	feet=(inches%36)/12;
	inch=inches%12;
	cout<<yards<<":"<<feet<<":"<<inch;
	
}
