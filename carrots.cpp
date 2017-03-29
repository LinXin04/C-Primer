#include <iostream>
using namespace std;
int main()
{
	int carrots;
	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots.";//注意空格，否则会是这样：I have 25carrots.
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch,crunch. Now I have " << carrots << " carrots.\n";
	return 0;

}