#include <iostream>
#include <string>
using namespace std;

int main ()
{
	char ch;
	int balance;
	double rate;
	bool poor = false;

	cout << "Please enter your bank balance: ";
	cin >> balance;

	if (balance < 100)
		{
			cout << "\nYou are broke." << endl;
			poor = true;
		}
	else 
	{
		cout << "Please enter your APR rate: ";
		cin >> rate;
	}

	while (poor) 
	{
		cout << "Would you like to make money (y/n): ";
		cin >> ch;

		if (ch == 'y') 
		{
			cout << "Look at the stars..." << endl;
			for (int i=0; i < 5; i++)
			{
				for (int f=0; f <= i; f++)
				{
					cout << "*";
				}
				cout << "\n";
			}
			poor = false;
			cout << "You are now not poor." << endl;
			return 0;
		}
		else if (ch == 'n')
		{
			cout << "There is no hope for you." << endl;
			return 0;
		}
		else
			cout << "\nThat is not a valid input.\n"; 
	}

	return 0;
}