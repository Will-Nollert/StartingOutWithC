#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (){
    ifstream inputFile;
    string filename;
    int number;

    //get the filename form the user 
    cout << "Enter the filename: ";
    cin >> filename;

    //open the file 
    inputFile.open(filename);

    //If the file is read open it and process it. 
    if(inputFile){
        //Read the numbers from the file and display them 
        while(inputFile >> number){
            cout << number << endl; 
        }

        //close the file
        inputFile.close();
    }
    else {
        //display and error 
        cout << "Error opeing the file. \n";
    }
    return 0; 
}