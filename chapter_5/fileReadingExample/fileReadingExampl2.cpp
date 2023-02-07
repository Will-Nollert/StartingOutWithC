#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile;
    string name;

    //open the input file
    inputFile.open("Friends.txt");

    cout << "Here are the names stores in teh Friends.txt file. \n";

    for(int count = 1; count <= 3l; count++){
        inputFile >> name; //Read the next name from  the file 
        cout << name << endl; //and display the name 
    }
    inputFile.close();
    return 0;
}

