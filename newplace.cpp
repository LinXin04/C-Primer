#include <iostream>
#include <new>
using namespace std;
const int BUF = 512;
const int N = 5;
char buffer[BUF];
int main()
{
	double *pd1, *pd2;
	int i;
	cout << "Calling new and placement new:" << endl;
	pd1 = new double[N];//使用堆存储
	pd2 = new (buffer)double[N];//使用数组存储
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0*i;
	cout << "Memory addresses:" << endl;
	cout << " heap: " << pd1 << " static: " << (void *)buffer << endl;//(void *)对buffer进行强制类型转换
	cout << "Memory contents:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	cout << "\nCalling new and placement new a second time:" << endl;
	double *pd3, *pd4;
	pd3 = new double[N];
	pd4 = new(buffer)double[N];
	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0*i;
	cout << "Memory contents:" << endl;
	for (i = 0; i < N; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << "; ";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}
	cout << "\nCalling new and placement new a third time:" << endl;
	delete[]pd1;
	pd1 = new double[N];
	pd2 = new(buffer + N*sizeof(double))double[N];
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 60.0*i;
	cout << "Memory contents:" << endl;
	for (i = 0; i < N; i++)
	{
		cout << pd3[i] << " at " << &pd1[i] << "; ";
		cout << pd4[i] << " at " << &pd2[i] << endl;
	}
	delete[]pd1;
	delete[]pd3;
	return 0;
}