#include <iostream>
using namespace std;
const int Arsize = 20;
int main()
{
	char name[Arsize];
	cout << "Your first name,please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:" << endl;
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << (int) name[i] << endl;
		i++;
	}
	return 0;
}