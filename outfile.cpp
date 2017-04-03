#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	//创建一个ofstream对象outFile
	ofstream outFile;
	//将该对象与一个文件关联起来。该文件是不存在的
	outFile.open("carinfo.txt");

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter thr model year: ";
	cin >> year;
	cout << "Enter the original askng price: ";
	cin >> a_price;
	d_price = 0.913*a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();
	return 0;

}