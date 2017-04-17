#include <iostream>
using namespace std;
const int ArSize = 10;
void strcount(const char *str);
int main()
{
	char input[ArSize];
	char next;

	cout << "Enter a line:" << endl;
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Enter next line(empty line to quit):" << endl;
		cin.get(input, ArSize);
	}
	cout << "Bye!" << endl;
	return 0;
}
void strcount(const char *str)
{
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" contains ";
	while (*str++)
		count++;
	total += count;
	cout << count << " characters" << endl;
	cout << total << " characters total" << endl;
}