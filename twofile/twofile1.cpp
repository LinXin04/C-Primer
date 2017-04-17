#include <iostream>
using namespace std;
int tom = 3;
int dick = 30;
static int harry = 300;
void remote_access();
int main()
{
	cout << "main() reports the following addresses:" << endl;
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry" << endl;
	remote_access();
	return 0;
}
