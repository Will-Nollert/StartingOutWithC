
//<Your name>
// Brief Program description
// One easy concept 
// One challenging concept


#include <iostream>
using namespace std;

// prototypes of functions to be included in the program

int empTotal();
int daysTotal(int);
double daysAverage(int, int);

int main()
{
	// declaration of variables to be used in main()


	// calling funtions

	// Call the empTotal function to accept and return the count of employees 

	// Call the daysTotal function to accept and return the total of days missed by all employees 

	// Call the daysAverage function by passing to it the count of employees and total of days missed by all employees 
	avgDays = daysAverage(eTotal, dTotal);

	// display of average days missed by asll employees
	cout << "Average days missed  = " << days_Average << endl;
	system("pause");
	return 0;
}


//Declaration of functions used in the program

// Function to input total count of employees 
int empTotal()
{

	return empCount;
}
// creating a loop for user input and diplays high and low and returns total # of days  
int daysTotal(int empTotal)
{

	//Calculate total days missed by all employees and figure out highest and lowest days missed by them




	//Display of information
	cout << "*******************" << endl << endl;
	cout << "Total count of employees  = " << empTotal << endl;
	cout << "Total days missed by all employees  = " << daysTotal << endl;
	cout << "Highest number of days missed are = " << highest << endl;
	cout << "Lowest number of days missed are  = " << lowest << endl << endl;
	cout << "*******************" << endl;

	//return total days missed by all employees
	return daysTotal;
}
// Declare the function to calculate the average of days missed by passing to it the count of employees and total of days missed by all employees
double daysAverage(int empCount, int daysTotal)
{

	return avgDays;
}
