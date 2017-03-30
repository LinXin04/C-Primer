#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;
	char temp;
	for (int i = 0, j = word.size() - 1; i< j; i++, j--)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	cout << "Done!" << endl;
	return 0;
}