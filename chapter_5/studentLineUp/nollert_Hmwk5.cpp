#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

    // use ifstream to declare local var name for file after import
    ifstream inputFile;
    // use STRING to delcare the users input for name of the file, and output
    string importFile, singleStudentName, first, last;
    // use int for number of students and idx for algo
    int numberOfStudents, index = 1;

    // ask for total studnts
    cout << "How many students total? ";
    cin >> numberOfStudents;

    // get the filename from the user
    cout << "Enter the filename: ";
    cin >> importFile;

    // open the file
    inputFile.open(importFile);

    // check that the user input an exsisitng file if not restart program flow
    if (!inputFile)
    {
        cout << "Please start the program again and enter the name of valid file.";
        return 0;
    }

    //give first and last a value that we know is some name X on a list of names 
    inputFile >> singleStudentName;
    first = last = singleStudentName;

    //for the user input number of times do: 
    for (int i = 0; i < numberOfStudents; i++)
    {
        inputFile >> singleStudentName; // Assinges the comparison value name to singleStuent name appart from first and last 

        // After thinking about it even more I realized you dont kneed to check every char
        // you can just compare the whole vars weight vs each other.

        //first get assinged to the first read name and then compared in weight to next
        //eventully the "A"ist will will out on top
        if (first > singleStudentName)
        {
            first = singleStudentName;
        }
        //same logic but with dif opperator 
        if (last < singleStudentName)
        {
            last = singleStudentName;
        }
    }

    //print result
    cout << endl;
    cout << "Student Order" << endl;
    cout << "---------------------------------\n";
    cout << "This last student in line is: " << last << endl;
    cout << "The first student in line is: " << first << endl;
    cout << endl;

    // close file
    inputFile.close();
    // end progrma
    return 0;
}