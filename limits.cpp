#include <iostream>
#include <climits>
using namespace std;
int main()
{
	cout << "short is " << sizeof(short) << " bytes." << endl;
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "long long is " << sizeof(long long) << " bytes." << endl;

	short max_short = SHRT_MAX;
	short min_short = SHRT_MIN;
	int max_int = INT_MAX;
	int min_int = INT_MIN;
	long max_long = LONG_MAX;
	long min_long = LONG_MIN;
	long long max_llong = LLONG_MAX;
	long long min_llong = LLONG_MIN;
	cout << endl;
	cout << "Maximum values: " << endl;
	cout << "short: " << max_short << endl;
	cout << "int: " << max_int << endl;
	cout << "long: " << max_long << endl;
	cout << "long long: " << max_llong << endl;
	cout << endl;
	cout << "Minmum values: " << endl;
	cout << "short: " << min_short << endl;
	cout << "int: " << min_int << endl;
	cout << "long: " << min_long << endl;
	cout << "long long: " << min_llong << endl;
	cout << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	
	return 0;
}