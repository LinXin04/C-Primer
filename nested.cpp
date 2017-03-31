#include <iostream>
#include <string>
using namespace std;
const int Cities = 5;
const int Years = 4;
int main()
{
	const char *cities[Cities] =
	{
		"Nan Jing", "Shang Hai", "Ji Ning", "Tai Zhou", "Xu Zhou"
	};
	//char cities[Cities][25] =
	//{ "Nan Jing", "Shang Hai", "Ji Ning", "Tai Zhou", "Xu Zhou" };

	//const string cities[Cities]=
	//{ "Nan Jing", "Shang Hai", "Ji Ning", "Tai Zhou", "Xu Zhou" };
	int maxtemps[Years][Cities]=
	{
		{96,100,87,101,105}, {96,98,91,107,104}, {97,101,93,108,107}, {98,103,95,109,108}
	};
	cout << "Maximum temperatures for 2008-2011\n\n";
	for (int city = 0; city < Cities; city++)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; year++)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	return 0;
}