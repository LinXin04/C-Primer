#include <iostream>
#include "stock10.h"
using namespace std;

//Ĭ�Ϲ��캯���Ķ���
Stock::Stock()
{
	cout << "Default constructor called" << endl;
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

//���캯���Ķ���
Stock::Stock(const string & co, long n, double pr)
{
	cout << "Constructor using " << co << " called" << endl;
	company = co;
	if (n < 0)
	{
		cout << "Numbers of shares can't be negative;"
			<< company << " shares set to 0." << endl;
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

//��������
Stock::~Stock()
{
	cout << "Bye, " << company << "!" << endl;
}

//��������
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted." << endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative."
			<< "Transaction is aborted." << endl;
	}
	else if (num>shares)
	{
		cout << "You can't sell more than you have! "
			<< "Transacrion is aborted." << endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);
	cout << "Company: " << company
		<< " Shares: " << shares << endl;
	cout << " Share price: $" << share_val;
	cout.precision(2);
	cout << " Total Worth: $" << total_val << endl;

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}