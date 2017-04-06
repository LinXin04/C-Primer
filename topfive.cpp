#include <iostream>
#include <string>
using namespace std;
void display(const string sa[], int n);
const int SIZE = 5;
int main()
{
	string list[SIZE];
	cout << "Enter your" << SIZE << " favorite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "Your list:" << endl;
	display(list, SIZE);
	return 0;
}
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}