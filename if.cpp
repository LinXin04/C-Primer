#include <iostream>
using namespace std;
int main()
{
	char ch;
	int space = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			space++;
		total++;
		cin.get(ch);
	}
	cout << space << " spaces, " << total << " characters total in sentence." << endl;
	return 0;
}