#include <iostream>
using namespace std;
int main()
{
	int ch;
	int count=0;
	ch = cin.get();
	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		count++;
	}
	cout << endl;
	cout << count << " characters read." << endl;
	return 0;
}