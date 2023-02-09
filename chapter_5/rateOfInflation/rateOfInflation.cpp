/*The annual rate of inflation is the rate at which money loses its value.

 For example: if the annual rate of inflation is 3.0 percent, 
 then in one year it will cost $1,030 to buy the goods that could have been 
 purchased for $1,000 today. 
 
 Put another way, a year from now $1,000 will only buy 1/1.03 * $1,000, 
 or $970.87, worth of goods. Two years from now, $1,000 will only buy only 1/1.03 of $970.87,
or $942.59 worth of goods. 

Write a program that allows the user to enter an annual rate of inflation between
1 percent and 10 percent, and which then displays a table showing how much $1,000
today will be worth each year for the next 10 years.

*/


#include <iostream>
#include <iomanip>  
using namespace std; 

int main (){


    int currentYear = 2023;
    //user data, yearlyTotal, and adjustedYearlyTotal 
    double yearlyTotal = 1000, adjustedYearlyTotal, userInput, rateOfInflation;
    

    //take user input 
        //validate user input is between 1 & 10
        cout << "What is the rate of inflation: "; 
        cin >> userInput;
        cout << endl;

        //Calcualte the rate of inflation 
        rateOfInflation = (1/((userInput/100) + 1));

    cout << "Inflation table for 1000 2023 Dollars" << endl;
    cout << "----------------------------------" << endl;
    //use 4 loop for 10 yearly itterations of the inflation cycle
    for (int i = 0; i < 10; i++){
        //take  yearlyTotal and multiply by rate of inflation set equalt to adjusted rate 
        adjustedYearlyTotal = yearlyTotal * rateOfInflation;
        currentYear++;
        //cout adujusteed rate 
        cout << "The inflation adjusted buying power for " << currentYear <<" is: " << adjustedYearlyTotal <<setprecision(5) <<  endl;
        //set yeaaly total equal to adjuset rate 
        yearlyTotal = adjustedYearlyTotal;
    }

        
//end program 
return 0;

}