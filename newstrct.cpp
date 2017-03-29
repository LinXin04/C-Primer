#include <iostream>
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	inflatable *ps = new inflatable;
	cout << "Enter name of inflatable: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;

	cout << "Name: " << ps->name << endl;
	cout << "Volume: " << ps->volume <<" cubic feet."<< endl;
	cout << "Price: $" << ps->price << endl;
	delete ps;
	return 0;
}