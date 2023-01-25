//William Nollert
//This program takes the value of a property and returns the real value and the assessment value
//type casting in c++ was fun and easy to learn this week 
//syntax is always tricky the first week learing a new lang but it is comming around 

//Sudo code 
//get data from user
//convert actuall property value to assemnt value by * by .6 
//calcualte the PropertyTax of the assesment value by (assmentValue/100)*.75
// format TaxBurden to $xx.xx format by rounding to nearest cent not just truncating the int 
// SCALE = 0.01 || value = (int)(value / SCALE) * SCALE;
//print results 
//


#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main() {

	//start variable list 
	string houseAddress, assessorName; //both of these are strings so I can use the getLine function and allow for spaces in the input to not escape the cin 
	int yearOfAssessment;
	//use constants to hold the rates of assessmentRate and propertyTax (& SCALE to round final to nearest whole cent) 
	const double ASSESSMENT_RATE = 0.60,  PROPERTY_TAX_RATE = 0.75, SCALE = 0.01;
	double assessmentValue, actualValue, propertyTaxBurden;

	//Program name and welcome 
	cout << "Welcome to Williams Property Tax Calculator\n" << "Please hit Enter to submit the following:\n";

	//start of getting user inputs
	cout << "House Address: ";
	getline(cin, houseAddress);

	cout << "Name of assessor: ";
	getline(cin, assessorName);

	//isolate step with loop to allow user to try again if wrong value was entered 
	for (;;) {
		cout << "Year of assessment: ";
		cin >> yearOfAssessment;

		if (cin.fail()) {
			cerr << "Sorry I cant read that please enter a number and try again. \n";
			cin.clear();
			cin.ignore();
			continue;
		}
		//breaks out of question isolation and back to regualr app flow 
		break;
	}

	//same loop as above but for Actual Value 

	for (;;) {
		cout << "Actual property value: ";
		cin >> actualValue;

		if (cin.fail()) {
			cerr << "Sorry I cant read that please enter a number and try again. \n";
			cin.clear();
			cin.ignore();
			continue;
		}
		
		break;
	}

	//convert actuall property value to assemnt value by * by .6 
	assessmentValue = actualValue * ASSESSMENT_RATE;

	//calcualte the PropertyTaxBurden of the assesment value by (assmentValue/100)*.75
	propertyTaxBurden = (assessmentValue/100) * PROPERTY_TAX_RATE;

    //NEEDS WORK formting print of resutls still for not 5 didiget ints. 
	//print results 
	cout << "For the year " << yearOfAssessment << " the property at " << houseAddress << " was assessed by " << 
		assessorName << " to have a Property Tax of " << " $" << setprecision(5)<<(propertyTaxBurden/SCALE) * SCALE << " \n" << "\n";

	system("pause");
	return 0;
}
