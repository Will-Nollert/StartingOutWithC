#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // Decalre CONSTANTS 
    const double PACKAGE_A = 39.99;
    const double PACKAGE_B = 59.99;
    const double PACKAGE_C = 69.99;
    double gigsUsed, gigsCharged, billTotal, packageNamePrice, extraDataCharge;

    // declare Strings 
    string username, packageName, selectedMonth;

    // declare Ints
    int month, dataRate, userDataUsage, userProgramMenuSelection;

    // ask for user name and billing month
    cout << "Please enter your Name: ";
    getline(cin, username);
    cout << "Please enter your billing month (1-12): ";
    cin >> month;

    // sanitize inputs
    cout << fixed << showpoint << setprecision(2);
    if (month == 0 || month >= 13)

    {
        cout << "Please run the program again and enter a valid number between 1-12 for month.";
        return 0;
    }
    // parsing
    else if (month == 1)
    {
        selectedMonth = "Januray";
    }
    else if (month == 2)
    {
        selectedMonth = "February";
    }
    else if (month == 3)
    {
        selectedMonth = "March";
    }
    else if (month == 4)
    {
        selectedMonth = "April";
    }
    else if (month == 5)
    {
        selectedMonth = "May";
    }
    else if (month == 6)
    {
        selectedMonth = "June";
    }
    else if (month == 7)
    {
        selectedMonth = "July";
    }
    else if (month == 8)
    {
        selectedMonth = "August";
    }
    else if (month == 9)
    {
        selectedMonth = "September";
    }
    else if (month == 10)
    {
        selectedMonth = "October";
    }
    else if (month == 11)
    {
        selectedMonth = "November";
    }
    else if (month == 12)
    {
        selectedMonth = "December";
    }

    // ask what the customer has bought
    cout << "what program have your bought? ";
    // Display the user options
    cout << "Data program menu options:  \n";
    cout << "1: Package A \n";
    cout << "2: Package B \n";
    cout << "3: Package C \n";
    cout << "4: Quit Program \n";
    cin >> userProgramMenuSelection;
    
    // sanitize inputs
    cout << fixed << showpoint << setprecision(2);
    if (userProgramMenuSelection == 0 || userProgramMenuSelection >= 5)
    {
        cout << "Please run the program again and enter a valid number between 1-4 for month.";
        return 0;
    }
    // parsing
    else if (userProgramMenuSelection == 1)
    {
        packageName = "Package A";
        packageNamePrice = PACKAGE_A;
        dataRate = 10;

    }
    else if (userProgramMenuSelection == 2)
    {
        packageName = "Package B";
        packageNamePrice = PACKAGE_B;
        dataRate = 5;

    }
    else if (userProgramMenuSelection == 3)
    {
        packageName = "Package C";
        packageNamePrice = PACKAGE_C;
        dataRate = 0;

    }
    else if (userProgramMenuSelection == 4)
    {
        cout << "GoodBye";
        return 0;
    }
    
    // ONLY AFTER sanitize goTo gigs used
    // ask how many giings they used
    cout << "How many gigs did you use this month? \n ";
    cin >> gigsUsed;

    //if PaKname is A Extra chare = (gigsued)
    if(packageName == "Package C"){
        gigsCharged = gigsUsed;
    } else if ( packageName == "Package B"){
        gigsCharged = gigsUsed - 8;
    } else if (packageName == "Package A"){
        gigsCharged = gigsUsed - 4;
    } 
    //prevents negative charge for data use 
    if(gigsCharged < 0 ){
        gigsCharged = 0;
    }

    // compute bill Total
    extraDataCharge = gigsCharged * dataRate; 
    billTotal = packageNamePrice + extraDataCharge; 

    // display Bill with Month of Bill, Name, Package code
    // chranges inlcidesd in the pacakge deal, addtional charges
    // use indeitifying labes or display in table
    cout << endl; 
    cout << "Hello " << username << " Welcome to your Cell Bill Calculator "
         << "For the month of " << selectedMonth << endl;
    cout << "This Month you selected " << packageName << " and used " << gigsUsed << " gigs of data "
         << "for a total bill of: $" << billTotal << endl << endl;

    cout << selectedMonth << " Bill Breakdown" << endl;
    cout << "-----------------------\n";
    cout << "Username: " << setw(1) << username << endl;
    cout <<"Package Name: " << setw(1) << packageName << endl;
    cout << "Package Cost: " << setw(10) << packageNamePrice << endl;
    cout << "Addtional Data: " << setw(8) << extraDataCharge << endl;
}