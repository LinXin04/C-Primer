#include <iostream>
using namespace std;
int main()
{
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number" << endl;
	int n;
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Yes, " << n << " is my favorite." << endl;
	return 0;
}