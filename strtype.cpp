#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy_s(charr1, charr2);

	str1 += " paste";
	strcat_s(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains " << len1 << " characters." << endl;
	cout << "The string " << charr1 << " contains " << len2 << " characters." << endl;
	return 0;
	
}