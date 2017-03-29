#include <iostream>
#include <climits>
using namespace std;
#define ZERO 0
int main()
{
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\n";
	cout << "Add $1 to each account.\n";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Now, " << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nPoor Sam!\n";

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\n";
	cout << "Take $1 from each account.\n";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Now, Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Lucky Sue!" << endl;
	return 0;

}