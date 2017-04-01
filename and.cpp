#include <iostream>
using namespace std;
const int ArSize = 6;
int main()
{
	cout << "Enter the NAAQs(New Age Awareness Quotients) of your neighbors." << endl;
	cout << "Program terminats when you make " << ArSize << " entries or enter a negative value." << endl;
	float naaq[ArSize];
	float temp;
	int i = 0;
	int count = 0;
	cout << "First value: ";
	cin >> temp;
	while (temp >= 0 && i < ArSize)
	{
		naaq[i] = temp;
		i++;
		if (i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "No data--bye" << endl;
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		for (int j = 0; j < ArSize; j++)
		{
			if (naaq[j]>you)
				count++;
		}
		cout << count;
		cout << " of your neighbors have greater awareness of the New Age than you do." << endl;
	}
	return 0;
}