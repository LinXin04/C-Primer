#include <iostream>
using namespace std;
int main()
{
	int higgens = 5;
	int *pt = &higgens;
	cout << "Values of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
	cout << "Values of *pt = " << *pt << "; Address of pt = " << pt << endl;
	return 0;
}