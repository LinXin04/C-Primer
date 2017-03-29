#include <iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert << " for you, " << name <<".\n";
	return 0;
}