#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	const int LENGTH = 101;
	char List[LENGTH];
	int Upper, Lower, Digit, Punc;

	// Ask user to create a password
	cout << "Create your password\n"
		 << "passwords must meet the following criteria:\n"
		 << " • The password should be at least 15 characters long.\n"
		 << " • The password should contain at least one uppercase\n"
		 << "   and at least one lowercase letter.\n"
		 << " • The password should have at least one digit.\n"
		 << " • And, password must contain at least one special character.\n";


	do
	{		
		Upper = Lower = Digit = 0;
		
		cout << "Enter password: ";
		cin.getline(List, LENGTH);

		for (int i = 0; i < strlen(List); i++)
		{
			if (isupper(List[i]))
				Upper++;
			if (ispunct(List[i]))
				Punc++;
			if (islower(List[i]))
				Lower++;
			if(isdigit(List[i]))
				Digit++;
		}
	
		if (strlen(List) < 15)
			cout << "password is not at least 15 characters long.\n";
		if (Upper == 0)
			cout << "password does not contain at least one uppercase letter.\n";
		if (Punc == 0)
			cout << "password does not contain at least one special character.\n";
		if (Lower == 0)
			cout << "password does not contain at least one lowercase letter.\n";
		if (Digit == 0)
			cout << "password does not have at least one digit.\n";			
	}
	while (Upper == 0 || Lower == 0 || Digit == 0 || strlen(List) < 6);

	cout << "Password verified. Your password is: " << List << endl;

	return 0;
}