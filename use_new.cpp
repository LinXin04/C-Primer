#include <iostream>
using namespace std;
int main()
{
	int nights = 1001;
	int *pt = new int;
	*pt = 1001;

	cout << "nights value = " << nights << ": location = " << &nights <<endl;
	cout << "int value = " << *pt << ": location = " << pt<<endl;

	double *pd = new double;
	*pd = 1001.456;                                             //ע�⣬double��floatֻ������λ��Чλ�������Ĳ���ʾ
	cout << "double value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd) << ": size of *pd = " << sizeof(*pd) << endl;
	return 0;
}