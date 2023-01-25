// This program asks for sales figues for three days.
// The total sales are calcualted and  displayed to the user in a tabel.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double day1, day2, day3, total;
    string day1Line, day2Line, day3Line;

    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;

    // calcualte the total sales
    total = day1 + day2 + day3;

    // Display the sales figuers
    cout << "\nSales Figues\n";
    cout << "-------------\n";
    cout << setprecision(5);
    cout << "Day 1: " << setw(8) << day1 << endl;
    cout << "Day 2: " << setw(8) << day2 << endl;
    cout << "Day 3: " << setw(8) << day3 << endl;
    cout << "Total: " << setw(8) << total << endl;

    system("pause");
    return 0;
}