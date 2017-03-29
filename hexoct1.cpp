#include <iostream>
using namespace std;
int main()
{
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Mosieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (42 in decimal)" << endl;
	cout << "waist = " << waist << " (0x42 in hex)" << endl;
	cout << "inseam = " << inseam << " (042 in octal)" << endl;
	return 0;
}