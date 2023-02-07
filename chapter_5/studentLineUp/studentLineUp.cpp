//__________________Program__________________________

//headers, iostream, string, fstream
//using namespace std
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

//use ifstream to declare local var name for file after import 
ifstream inputFile;
//use STRING to delcare the users input for name of the file, and output
string importFile, firstStudentInLine = "ZZZ", lastStudentInLine;
//Use STRING to decalre a big string that will hold all the names of students in class
string singleStudentName, tempString;
int numberOfStudents; 

//ask for total studnts 
cout << "How many students total? ";
cin >> numberOfStudents;


//get the filename from the user
cout << "Enter the filename: ";
cin >> importFile;

//open the file 
inputFile.open(importFile);

//check that the user input an exsisitng file if not restart program flow 
if(!inputFile){
    cout << "Please start the program again and enter the name of valid file.";
    return 0;
} 

string stringOfAllStudentNames, first, last;  


inputFile >> singleStudentName;
//set markers equal to name present on the list to stort from. sort of a pivot maybe 
first = singleStudentName;
last =  singleStudentName;
//index for more than just first didget comparison
int index = 1;



for (int i = 0; i < numberOfStudents; i++){
    inputFile >> singleStudentName; //Assinges the comparison value name to singleStuent name 

    //sort by first char of name 
    if(first[0] > singleStudentName[0]){
        first = singleStudentName;
    }  
    //if names start with same first char go to the next non equal and compare 
    if(first[0] == singleStudentName[0]){
        while(first[index] == singleStudentName[index]){
            //move the char of comparison one value to the right 
            index++;
        } 
        //and sort by char weight again 
        if(first[index] > singleStudentName[index]){
            first = singleStudentName;
        }
    }

    //repeate same sorting algo but reverse the comparison opperator for last instead of first 
    if(last[0] < singleStudentName[0]){
    last = singleStudentName;
    }

    if(last[0] == singleStudentName[0]){
        while(last[index] == singleStudentName[index]){
            index++;
        } 
        if(last[index] > singleStudentName[index]){
            last = singleStudentName; 
        }
    }

}


cout << endl;
cout << "Student Order" << endl;
cout << "---------------------------------\n";
cout << "This last student in line is: " << last << endl;
cout << "The first student in line is: "<< first << endl; 
cout << endl; 


//close file 
inputFile.close();
//end progrma 
return 0;

}

