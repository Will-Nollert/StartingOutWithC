// This program demonstrates a function with three parameters.
#include<iostream>
using namespace std;

//Function Prototype
void showSum(int num1, int num2, int num3);


int main()
{
    int value1, value2, value3;

    cout << "Enter three integers and I will display ";
    cout << "their sum: ";
    cin >> value1 >> value2 >> value3;

    showSum(value1, value2, value3);
    return 0;
}

 /********************************************
 * showSum *
 * This function displays the sum of the *
 * 3 integers passed into its parameters. *
 ********************************************/
 void showSum(int num1, int num2, int num3)
 {
 cout << "The sum is " << (num1 + num2 + num3) << endl;
 }

