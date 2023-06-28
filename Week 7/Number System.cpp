#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int arr[10];       //Globally Declared Array
int i=0; //Globally Declared Array index
int number[10];    
int option = -1;
float sum;  
//Functions
int menu();                                        //prints the menu
void optionMenu(int opt);                          //prints in which menu you are present
void insertNumber();                               // a number is given by the user and is added in the array
void printNumbers();                               // display all the numbers in the array
void frequency();                                  // a number is given by the user and it is checked how many times it appears in the array and it is returned
void replaceNumber();                              // a number is checked from the array and is replaced by the number provided by the user
void average();                                    // calculate the average of all the numbers in the array
void largest();                                    // finds the largest number from the array and return the largest number
void evenSum();                                    // calculate the sum of all even numbers and returns the sum
void printOddIndexes();                            // prints the numbers on odd indexes
void printSorted();                                // Prints the sorted array
void mergeArray();                                 // user provides an array and that is merged with the available array upto 9 index

int main(){
    while (option != 11){
        option = menu();
        system("CLS");
        if (option == 1){
           insertNumber();
        }
        if(option==2){
        	printNumbers();
		}
	  	if(option==3){
		   frequency();	
		}
		if(option==4){
		   replaceNumber();
		}
		if(option==5){
			average();
		}
		if(option==6){
		   largest();
		}
		if(option==7){
			evenSum();
		}
		if(option==8){
			printOddIndexes();
		}
		if(option==9){
			printSorted();
		}
		if(option==10){
			mergeArray();
		}
	}
}

int menu(){
    int opt;
    // prints the menu for the number system
    cout << "****************Number System*********************" << endl;
    cout << "1. Insert New Number" << endl;
    cout << "2. Print all Numbers" << endl;
    cout << "3. Find Frequency of a Number" << endl;
    cout << "4. Find and Replace Number" << endl;
    cout << "5. Print the average of all Numbers" << endl;
    cout << "6. Print the largest Number" << endl;
    cout << "7. Print the sum of all Even Numbers" << endl;
    cout << "8. Print the numbers on Odd indexes" << endl;
    cout << "9. Print the Sorted the Array" << endl;
    cout << "10. Merge the array entered by the user" << endl;
    cout << "11. Exit" << endl;
    cout<<endl;
    cout<<"Enter your option : ";
	cin >> opt;
    return opt;
}

void optionMenu(int opt){
    cout << "Number System------> Menu " << opt << endl;
}
void insertNumber(){
	optionMenu(option);
    cout << "Please Enter a Number for the array" << endl;
    cin >> number[i];
    i++;
    system("CLS");
}
void printNumbers(){
	optionMenu(option);
    for(int j=0;j<i;j++){
    cout<<j<<" Index of number in array : "<<number[j]<<endl;
	}
    getch();
	system("CLS");
}
void frequency(){
	optionMenu(option);
	int freq=0;
	int value;
	for(int q=0;q<i;q++){
		cout<<number[q]<<" , ";
	}
	cout<<endl;
	cout<<"Enter number to check frequency : ";
	cin>>value;
	for(int k=0;k<i;k++){
	if(value==number[k]){
    	freq++;
	}	
	}
 	cout<<"Frequency of "<<value<<" in array is "<<freq<<endl;
    getch();
	system("CLS");
}
void replaceNumber(){
	optionMenu(option);
	int index;
	int replace;
	for(int w=0;w<i;w++){
		cout<<w<<" Index of number in array : "<<number[w]<<endl;
	}
	cout<<"Enter your index : ";
	cin>>index;
	cout<<"Enter number which you want to replace : ";
	cin>>replace;
	for(int l=0;l<i;l++){
		if(index==l){
			number[l]=replace;
	}
	}
	cout<<"Your number is replaced successfully....";
	getch();
	system("CLS");
}
void average(){
	optionMenu(option);
	float average;
	float z;
	for(int e=0;e<i;e++){
		sum+=number[e];
	    z=e;
	}
	z=z+1;  
	cout<<z<<endl;
	average=sum/z;
	cout<<"Sum of the numbers in array "<<sum<<endl;
	cout<<"The average of the numbers in array is "<<average<<endl;
    getch();
	system("CLS");
}
void largest(){
	optionMenu(option);
	cout<<endl;
	float largest=number[0];
	for (int idx=1;idx<=9;idx++){
		if(number[idx]>largest){
			largest=number[idx];
		}
	}
    cout<<"The largest number in array is : "<<largest;
    getch();
	system("CLS"); 
 }
void evenSum(){
 	optionMenu(option);
 	float sum1;
 	for(int y=0;y<i;y++){
 		if(number[y]%2==0){
 			cout<<number[y]<<" , ";
		    sum1+=number[y];
		}
	}
	cout<<endl;
 	cout<<"Sum of all even numbers in array is : "<<sum1;
    getch();
	system("CLS"); 
}
void printOddIndexes(){
	optionMenu(option);
	cout<<"Following are the numbers at odd index "<<endl;
	for(int u=0;u<i;u++){
		if(u%2==1){
			cout<<u<<" index has number in array is : "<<number[u]<<endl;
	}
	}
	getch();
	system("CLS");
}
void printSorted(){
	optionMenu(option);
	cout<<"Array in normal form is given below  ";
	for(int o=0;o<i;o++){
		cout<<number[o]<<" , ";
	}
	cout<<endl;
	cout<<endl;
    int newarray[10];
	for(int t=0;t<i;t++){
		newarray[t]=number[t];
	}
	int largesti;
	int copyarray[10];
	int largest=newarray[0];
	for(int v=0;v<10;v++){
		for(int x=1; x<i; x++){
		if(largest<newarray[x]){
			largest=newarray[x];
			largesti=x;
		}
	}
	newarray[largesti]=-1;
	copyarray[v]=largest;
	largest=newarray[0];
	}
	cout<<"Sorted array is given below : "<<endl;
	for(int c=0; c<i; c++){
		cout<<copyarray[c]<<" , ";
	}
	getch();
	system("CLS");
}
void mergeArray(){
   int size=10-i;
   int mergearray[size];
   for(int b=i;b<10;b++){
      cout<<"Enter any number : ";
	  cin>>mergearray[b];
	  number[i]=mergearray[b];
	  if(b==9){
	  	cout<<"Array size is complete You cannot enter more number...."<<endl;    
   }
   i++;    	
   }
    getch();
    cout<<"Your array is merged successfully....."<<endl;
    getch();
	system("CLS");
}
