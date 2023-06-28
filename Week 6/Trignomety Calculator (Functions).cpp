#include <iostream>
#include <conio.h>
using namespace std;
int option;
float sin(float x);
float cos(float x);
float tan(float x);
float x = 0;
float sum = 0;
float sign = 1;
float sign1 = 1;
float sum1;
float s = 0;
float c = 0;
float t = 0;
float ans1 = 0;
float ans2 = 0;
float answer;
int main()
{
    cout << "********" << endl;
    cout << "Trignometry Calculator" << endl;
    cout << "********" << endl;
    while (option != 4)
    {
        cout << "1. Find sinx " << endl;
        cout << "2. Find cosx " << endl;
        cout << "3. Find tanx " << endl;
        cout << "4. Exit " << endl;
        cout << endl;
        cout << "Select for option : ";
        cin >> option;
        if (option == 1)
        {
            system("CLS");
            cout << "The formula used to calculate sinx is : x - (x^3/3!) + (x^5/5!) - (x^7/7!)" << endl;
            getch();
            cout << "Enter value of x : ";
            cin >> x;
            s=sin(x);
            cout<<s<<endl;
        }
        if (option == 2)
        {
            system("CLS");
            cout << "The formula used to calculate cosx is : 1 - (x^2/2!) + (x^4/4!) - (x^6/6!)" << endl;
            getch();
            cout << "Enter value of x : ";
            cin >> x;
            c=cos(x);
            cout<<c<<endl;
        }
        if (option == 3)
        {
            system("CLS");
            cout << "The formula to find tanx is : tanx = sinx/cosx " << endl;
            getch();
            cout << "Enter value of x : ";
            cin >> x;
            t=tan(x);
            cout<<t<<endl;
        }
    }
}
float sin(float x)
{
    for (int times = 1; times < 8; times = times + 2)
    {
        float factorial = 1;
        float power = 1;
        for (int i = 1; i <= times; i++)
        {
            power = power * x;
            factorial = factorial * i;
        }
        sum = sum + (sign * (power / factorial));
        sign = sign * -1;
    }
    ans1 = sum;
    sum = 0;
    return ans1;
}
float cos(float x)
{
    for (int times = 0; times < 8; times = times + 2)
    {
        float factorial = 1;
        float power = 1;
        for (int i = 1; i <= times; i++)
        {
            power = power * x;
            factorial = factorial * i;
        }
        sum = sum + (sign * (power / factorial));
        sign = sign * -1;
    }
    ans2 = sum;
    sum = 0;
    return ans2;
}
float tan(float x)
{
    for (int times = 1; times < 8; times = times + 2)
    {
        float factorial = 1;
        float power = 1;
        for (int i = 1; i <= times; i++)
        {
            power = power * x;
            factorial = factorial * i;
        }
        sum = sum + (sign * (power / factorial));
        sign = sign * -1;
    }
    ans1 = sum;
    sum = 0;
    for (int times = 0; times < 8; times = times + 2)
    {
        float factorial1 = 1;
        float power1 = 1;
        for (int i = 1; i <= times; i++)
        {
            power1 = power1 * x;
            factorial1 = factorial1 * i;
        }
        sum1 = sum1 + (sign * (power1 / factorial1));
        sign = sign * -1;
    }
    ans2 = sum1;
    sum1 = 0;
    answer = (ans1 / ans2);
    return answer;
}
