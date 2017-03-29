#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;

	cout << animal << "and " << bird << endl;
	cout << "Enter a kind of animal: ";
	cin >> animal;
	cout << endl;

	ps = animal;
	cout << ps << "!"<<endl;
	cout << "Before using strcpy():" << endl;
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)animal << endl;
	cout << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy(): " << endl; 
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	return 0;
}