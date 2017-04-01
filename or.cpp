#include <iostream>
using namespace std;
int main()
{
	cout << "The program may reformat your hard disk" << endl;
	cout << "and destroy all your data." << endl;
	cout << "Do you wish to continue? <y/n> ";
	char choice;
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
		cout << "You were warned!\a\a\n";
	else if (choice == 'N' || choice == 'n')
		cout << "A wise choice...bye\n";
	else
		cout << "That wasn't a y or n! Apparently you can't follow instructions,so I'll trash your disk anyway.\a\a\a\n";
	return 0;
}
