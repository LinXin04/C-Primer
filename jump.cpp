#include <iostream>
using namespace std;
const int Arsize = 80;
int main()
{
	char line[Arsize];
	int spaces = 0;

	cout << "Enter a line of text: " << endl;
	cin.get(line, Arsize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces " << endl;
	cout << "Done" << endl;
	return 0;
}