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
cout << "How many students total?";
cin >> numberOfStudents;

//enter number of studnets in class

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

string stringOfAllStudentNames; 

string first;
string last;

inputFile >> singleStudentName; //Assignes
first = singleStudentName;
last = singleStudentName;

//get each students name
for (int i = 0; i < numberOfStudents; i++){
    //Read single name from the file executes 1x per loop
    inputFile >> singleStudentName; //Assignes
    if(first[0] > singleStudentName[0]){
        first = singleStudentName;
    } 


    if(last[0] < singleStudentName[0]){
    last = singleStudentName;
    }


     
    //stringOfAllStudentNames += singleStudentName + " ";    
}

    cout << last;
    cout << first; 



//cout << stringOfAllStudentNames;
//cout << stringOfAllStudentNames.length();

for(int i = 0; i < stringOfAllStudentNames.length(); i++){
if(stringOfAllStudentNames == " "){

}
}


//close file 
inputFile.close();
//end progrma 
return 0;

}

//__________________________File Reading Notes_____________________________________

//Use fstream header for files access 
//File Stream types:
    //ifstream for input from a file 
    //ofstream for output to a file
    //fstream for input or output for a file 

//Deine file objects 
    //ifstream infile;
    //ofstream outfile; 

//Opening Files 
    //infile.open("example.txt")
    //outfile.opne("example.txt")
        //testing 

        //infile.open("exaple.txt");
        //  if(!infile){ cout << 'File open failed'}
        //can also use fail member function 

//Using Files 
    //Can use inout files objects and >> to copy data from files to vars   
        //infile >> partNum 

//Using loops to process files 
    //The stream extraction opperatotr >> returns True with data and false otherwise. 
    //Can be tested in  while loop while( inputFile >> number)
    
//Closing Files 
    //use the close member function     
    // infile.close()
    //outfile.close()


