//this program displays the users name surronded by stars.
//It uses the + operator and several string class member functions 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName, lastName, fullname;
    string stars;
    int numStars;
    cout << "Please enter your first name: ";
    getline(cin, firstName);

    cout << "Please enter you last name: ";
    getline(cin, lastName);

    fullname = firstName + " " + lastName;

    numStars = fullname.length();
    stars.assign(numStars, '*');

    cout << endl;
    cout << stars << endl;
    cout << fullname << endl;
    cout << stars << endl;


    system("pause");
    return 0;

}