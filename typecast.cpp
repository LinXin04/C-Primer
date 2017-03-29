#include <iostream>
using namespace std;
int main()
{
	int auks, bats, coots;
	auks = 19.99 + 11.99;

	bats = int(19.99) + int(11.99);
	coots = (int) 19.99 + (int) 11.99;
	cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is " << int(ch) << endl;
	cout << "Yes,the code is ";
	cout << static_cast<int>(ch) << endl;//static_cast<int>(ch):类型转换的一种方法
	return 0;
}