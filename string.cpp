#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const int size = 15;
	char name1[size];
	char name2[size] = "C++owboy";
	cout << "Howdy! I'm " << name2 << "！What's your name?" << endl;
	cin >> name1;
	cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n";//strlen 表示name1可见字符的长度，不含空字符
	cout << "in an array of " << sizeof name1 << " bytes." << endl;//sizeof表示name1数组的字节数
	cout << "Your initial is " << name1[0] <<"."<< endl;
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: " << name2 << endl;
	return 0;

}