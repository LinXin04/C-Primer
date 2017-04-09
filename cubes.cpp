#include <iostream>
using namespace std;
double cube(double a);
double recube(double &ra);
int main()
{
	double x = 3.0;
	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << recube(x);
	cout << " = cube of " << x << endl;
	return 0;
}
double cube(double a)
{
	a *= a*a;
	return a;
}
double recube(double &ra)
{
	ra *= ra*ra;
	return ra;
}