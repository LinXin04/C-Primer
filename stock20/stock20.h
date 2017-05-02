#ifndef STOCK20_H_
#define STOCK20_H_
#include <iostream>
#include <string>
using namespace std;

class Stock
{
private:
	string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot(){ total_val = shares*share_val; }
public:
	Stock();
	Stock(const string & co, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock & topval(const Stock & s)const;

};
#endif