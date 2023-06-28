#include <iostream>
using namespace std;

int main()
{
	int array[6] = {5,2,4,6,3,1};
    int sum = 0;
    int largest = 0;
    int k; 
	cout << "Enter limit : ";
	cin >> k;
	for (int i = 0; i < 6; i++){
		for (int j = i; j < k; j++){
			sum+=array[j];
		}
		cout << sum << endl;
		if (sum >= largest){
			largest = sum;
		}
		sum = 0;
		k++;
		if (k == 7){
			cout <<"The largest is : "<< largest << endl;
			break;
		}
	}
}
