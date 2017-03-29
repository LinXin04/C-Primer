#include <iostream>
using namespace std;
int main()
{
	double wages[3] = { 1000.0, 2000.0, 3000.0 };
	short stacks[3] = { 3, 2, 1 };

	//指针数组的两种定义
	double *pw = wages;
	short *ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer: " << endl;
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << endl;

	cout << "ps = " << ps << ", *ps = " << *ps+2<< endl;
	ps = ps + 1;//指针可以这样修改赋值，但是数组不可以
	cout << "add 1 to the ps pointer: " << endl;
	cout << "ps = " << ps << ", *ps = " << *ps;
	cout << endl;

	cout << "access two elements with assy notation" << endl;
	cout << "stacks[0] = " << stacks[0] << " stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation " << endl;
	cout << "*stacks = " << *stacks << ", *(stacks+1) = " << *(stacks + 1) << endl;
	cout << endl;

	cout << sizeof(wages) << " = size of wages array" << endl;

	cout << sizeof(pw) << " = size of pw pointer" << endl;
	return 0;
}