/***********************************************************************************
 * WRITE A PROGRAM THAT DISPLAYS THE CONTENTS OF THE TEAMS.TXT FILES ON THE SCREEN *
 *           AND PROMTS THE USER TO ENDTER THE NAME OF ONE OF THE TEAMS.           *
 *      THE PROGRAM SHOULD THEN DISPLAY THE NUMBER OF TIMES THAT TEAM HAS WON      *
 *                       THE WORLD SEROES IN THE GIVEN FILE                        *
 ***********************************************************************************/


#include<iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_TEAMS = 30;


// Function to read and display the contents of the file
void displayTeamsFromFile(string filename) {
    // Open the file
    ifstream inputFile(filename);

    // Check if the file was successfully opened
    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }

    // Read and display the contents of the file
    string team;
    cout << "The teams are:" << endl;
    while (getline(inputFile, team)) {
        cout << team << endl;
    }

    // Close the file
    inputFile.close();
}

//ReadTeams Function 
string* readDataToArray(string fileName, int& numTeams) {
    string* teams = new string[MAX_TEAMS];
    ifstream inFile(fileName);

    if (!inFile) {
        cout << "Unable to open file " << fileName << endl;
        exit(1);
    }

    numTeams = 0;
    string teamName;

    while (getline(inFile, teamName) && numTeams < MAX_TEAMS) {
        teams[numTeams] = teamName;
        numTeams++;
    }

    inFile.close();

    return teams;
}

int winnerCount(const string& teamName) {
    ifstream inputFile("WorldSeriesWinners.txt");
    string winner;
    int count = 0;
    while (inputFile >> winner) {
        if (winner == teamName) {
            count++;
        }
    }
    inputFile.close();
    return count;
}

int main(){

    displayTeamsFromFile("Teams.txt");

    int numTeams;
    readDataToArray("WorldSeriesWinners.txt", numTeams);

    //ask for selection 
    string teamName;
    cout << "Enter the name of one of the teams. \n";
    cin >> teamName;
    int count = winnerCount(teamName);
    cout <<"The " << teamName << " has won the World Series " << count << " times. \n";

 

    return 0;
}


/*********************************************************************
 * - INCLUDE A FUNCTION NAMED READTEAMS() TO READ DATA FROM THE FILE *
 *      TEAMS.TXT (FILE IS ATTACHED) AND STORE IT IN AN ARRAY.       *
 *********************************************************************/


/*********************************************************************************
 *   - INCLUDE A FUNCTION NAMED WINNERCOUNT() THAT WILL BE PASSED A TEAM NAME.   *
 * YOU ARE TO READ THE DATA FROM THE SECOND FILE(WORLDSERIESWINNERS.TXT) AND THE *
 *    FUNCTION WILL RETURN TO MAIN() THE NUMBER OF TIMES THE TEAM HAS WON THE    *
 *    WORLD SERIES IN THE TIME PERIOD 1903 TO 2012. THE STATISTICS ARE TO BE     *
 *                              DISPLAYED IN MAIN()                              *
 *********************************************************************************/

/******************************************************************************
 * - INCLUDE A FUNCTION NAMED TEAMCOUNTS() THAT WILL BE PASSED THE ARRAY WITH *
 * TEAM NAMES. FOR EACH TEAM IN THE ARRAY, FIND OUT HOW MANY TIMES EACH TEAM  *
 *        HAS WON THE WORLD SERIES. STORE THE COUNT IN ANOTHER ARRAY.         *
 *        (NOTE : CALL THE WINNERCOUNT() HERE TO REUSE EXISTING CODE)         *
 ******************************************************************************/

/*********************************************************************************
 *  - ONCE THE COUNTS ARE STORED, SORT THE CONTENTS OF THE COUNTS ARRAY IN THE   *
 *  ASCENDING ORDER AND THEN STORE THE NAMES OF THE RESPECTIVE TEAMS IN ANOTHER  *
 * ARRAY. YOU MAY WRITE A FUNCTION TO SORT AND DISPLAY. PRINT ON SCREEN A SORTED *
 *                           LIST OF TEAMS WITH WINS.                            *
 *********************************************************************************/


