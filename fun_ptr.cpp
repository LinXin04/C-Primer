#include <iostream>
using namespace std;
double betsy(int);
double pam(int);
void estimate(int lines, double(*pt) (int));

int main()
{
	int code;
	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here is Betsy's estimate: " << endl;
	estimate(code, betsy);
	cout << "Here is Pam's estimate: " << endl;
	estimate(code, pam);
	return 0;
}

double betsy(int lns)
{
	return 0.05*lns;
}
double pam(int lns)
{
	return 0.03*lns + 0.0004*lns*lns;
}
void estimate(int lines, double(*pt) (int))
{
	cout << lines << " lines will take ";
	cout << (*pt)(lines) << " hour(s)." << endl;
}