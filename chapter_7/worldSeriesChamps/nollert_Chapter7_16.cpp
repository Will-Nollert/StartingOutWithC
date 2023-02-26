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
int main(){
    //open the fiel
    ifstream inputFile("Teams.txt");

    //check if the file is open 
    if(!inputFile.is_open()){
        cout << "Teams.txt could not be opened \n";
        return 1;
    }

    //read the file and display the teams 
    string team;
    cout << "Teams: " << endl;
    while(getline(inputFile, team)){
        cout << team << endl;
    }

    //ask for selection 
    string userInput;
    cout << "Enter the name of one of the teams. \n";
    cin >> userInput;

    //close the file
    inputFile.close();

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


