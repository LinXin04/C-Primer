#include <iostream>
#include "stock10.h"
using namespace std;

int main()
{
	{
		cout << "Using constructors to create new objects" << endl;
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();
		Stock stock2 = Stock("Boffo objects", 2, 2.0);
		stock2.show();

		cout << "Assigning stock1 to stock2:" << endl;
		stock2 = stock1;
		cout << "Listing stock1 and stock2:" << endl;
		stock1.show();
		stock2.show();

		cout << "Using a constructor to reset an object" << endl;
		stock1 = Stock("NIfty Foods", 10, 50.0);
		cout << "Revised stock1:" << endl;
		stock1.show();
		cout << "Done!" << endl;
	}
	return 0;
}