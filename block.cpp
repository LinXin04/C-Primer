#include <iostream>
using namespace std;
int main()
{
	cout << "The Amazing Accounto will sum and average five numbers for you." << endl;
	cout << "Please enter five values:" << endl;
	double number;
	double sum = 0;

	for (int i = 0; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}

	cout << "Five exquisite choice indeed! They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << "." << endl;
	cout << "The Amazing Accounto bids you adieu!" << endl;
	return 0;

}