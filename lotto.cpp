#include <iostream>
using namespace std;
long double probability(unsigned, unsigned);
int main()
{
	double total, choice;
	cout << "Enter the total number of choice on the game card and the number of picks allowed:\n";
	while ((cin >> total >> choice) && choice <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choice);
		cout << " of winnig.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye!" << endl;
	return 0;

}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	for (; picks > 0; numbers--, picks--)
		result = result*numbers / picks;
	return result;
}