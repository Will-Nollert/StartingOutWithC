 // This program demonstrates Windows functions to print colored
// text. It displays " Hello World!" in 16 different colors.

#include <iostream>
#include <windows.h> //winodws specifcc wont work on WSL partition or linux
    using namespace std;

int main()
{

    // create a handle to the computer display
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

    //Write 16 lines in 16 diffrent colors
    for(int color = 0; color < 16; color++){
        SetConsoleTextAttribute( screen, color);
        cout << "Hello World!" << endl;
        Sleep(400); //Pause between lines to watch the color change 
    }

    //Restore the console text to normal 
    SetConsoleTextAttribute( screen, 7);
    return 0;
}
