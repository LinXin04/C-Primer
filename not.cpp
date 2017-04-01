#include <iostream>
#include <climits>
using namespace std;
bool is_int(double);
int main()
{
	cout << "Yo, dude!Enter an integer value: ";
	double num;
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range--please try again: ";
		cin >> num;
	}
	cout << "You have entered the integer " << int(num) << endl;
}
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}