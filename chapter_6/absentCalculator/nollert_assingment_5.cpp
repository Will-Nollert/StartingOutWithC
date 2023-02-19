
//William Nollert
// calculate the avg numer of days a companys emplyoess are absent. 
// One easy concpet was input sanitization now that you let us use loops! 
// One challenging concept was getting the algo for the highest and lowest number values. I spent way too long trying to use 
	//the same apprach as last week with the student names and it took my many hours and lots of reading stackOverflow to 
	//understand what we were trying to do here and why last weeks approach was never going to work. 


#include <iostream>
using namespace std;

// prototypes of functions to be included in the program
int empTotal();
int daysTotal(int);
double daysAverage(int, int);

//Ask the user for # of workers and retunrs int 
//accpets one arg (the # of workers)
	//should ask the use to enter the number of days each employee missed 
	//The total of these days should be retunred as an int
int main(){
	// declaration of variables to be used in main()
	int avgDays;
	// calling funtions

	// Call the empTotal function to accept and return the count of employees 
	int workerTotal = empTotal();
	// Call the daysTotal function to accept and return the total of days missed by all employees 
	int totalDaysMissed = daysTotal(workerTotal);
	// Call the daysAverage function by passing to it the count of employees and total of days missed by all employees 
	
	avgDays = daysAverage(workerTotal, totalDaysMissed);

	// display of average days missed by asll employees
	cout << "Average days missed  = " << avgDays << endl;
	system("pause");
	return 0;
}


//Declaration of functions used in the program

// Function to input total count of employees 
int empTotal(){
	int empCount;

	for(;;){
	cout << "How many employess do you have? \n";
	cin >> empCount;
	//Sanitize usesr input 
	 if (std::cin.fail()) {
        std::cerr << "Sorry, I cannot read that. Please enter a number and again." << std::endl;
        std::cin.clear();
        std::cin.ignore();
        continue;
        }
            break;
	}

	return empCount;
}


// creating a loop for user input and diplays highestNumberOfAbsences and lowestNumberOfAbsences and returns total # of days  
int daysTotal(int empTotal){
	int lowestNumberOfAbsences, highestNumberOfAbsences = 0, numOfDaysEmployeeWasAbsent, totalDaysMissed = 0; 

	//Calculate total days missed by all employees and figure out highestNumberOfAbsencesest and lowestNumberOfAbsencesest days missed by them
	for ( int i = 0; i < empTotal; i++){

		for(;;){
		//enter days missed for each worker 
		cout << "How many days did employee " << i + 1 << " miss? \n";
		cin >> numOfDaysEmployeeWasAbsent;
		//Sanitize input
		if (cin.fail()) {
            cerr << "Sorry, I cannot read that. Please enter a number and again." << endl;
            cin.clear();
            cin.ignore();
            continue;
		 }
		 break;
		}

		if( numOfDaysEmployeeWasAbsent < lowestNumberOfAbsences || lowestNumberOfAbsences == -1){
			lowestNumberOfAbsences = numOfDaysEmployeeWasAbsent;
		}

		if(numOfDaysEmployeeWasAbsent > highestNumberOfAbsences){
			highestNumberOfAbsences = numOfDaysEmployeeWasAbsent;
		}
		//keeps track of totals days missed
		totalDaysMissed = totalDaysMissed + numOfDaysEmployeeWasAbsent;
	}
	

	//Display of information
	cout << "*******************" << endl << endl;
	cout << "Total count of employees  = " << empTotal << endl;
	cout << "Total days missed by all employees  = " << totalDaysMissed << endl;
	cout << "Highest Number Of days missed are = " << highestNumberOfAbsences << endl;
	cout << "Lowest Number Of days missed are  = " << lowestNumberOfAbsences << endl << endl;
	cout << "*******************" << endl;

	//return total days missed by all employees
	return totalDaysMissed;
}


// Declare the function to calculate the average of days missed by passing to it the count of employees and total of days missed by all employees
double daysAverage(int empCount, int daysTotal){

	int avgDays = daysTotal / empCount;

	return avgDays;
}
