#include <iostream>
using namespace std;
extern double warming;
void update(double dt);
void local();

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updatong global warming to " << warming << " degrees." << endl;
}
void local()
{
	double warming = 0.8;
	cout << "Local warming = " << warming << " degrees." <<endl;
	cout << "But global warming = " << ::warming << " degrres." << endl;
}