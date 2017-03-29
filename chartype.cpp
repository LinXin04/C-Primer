#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character: " << endl;
	cin >> ch;
	cout << "Hola!";
	cout << " Thank you for the " << ch << " character." << endl;

	char alarm = '\a';
	cout << alarm << "Don't do that again!\a\n" << endl;
	cout << "Ben \"Buggsie\" Hacker\nas here!\n";
	return 0;
}