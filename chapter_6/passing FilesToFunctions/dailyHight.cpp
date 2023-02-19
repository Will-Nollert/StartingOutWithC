#include<iostream>
#include <fstream>
using namespace std;

//Function prototype
void reafFile(ifstream&);

int main()
{
    ifstream inputFile;

    inputFile.open("weather.dat");

    if(inputFile.fail())
        cout << "Fail \n";
        else 
        {    readFile(inputFile);
            inputFile.close();
        }
    return 0;
}



/*********************************************************
 *                       READFILE                        *
 * THIS FUNCTION READDS AND DISPLAYS THE CONTENTS OF THE *
 * INPUT FILE WHOSE FILE STREAM OBJECT IS PASSED TO IT.  *
 *********************************************************/

void readFile(ifstream &someFile){
    int temperature;

    while(someFile >> temperature){
        cout << temperature << " ";
        cout << endl;
    }
}