#include <iostream>
using namespace std;
int main()
{
	int quizscores[10] = { 20, 20, 20, 20, 19, 20, 18, 20, 20 };
	cout << "Doing it right:" << endl;
	for (int i = 0; quizscores[i] == 20; i++)
		cout << "quiz " << i << " is a 20" << endl;

	cout << "Doing it dangerously wrong: " << endl;
	for (int i = 0; quizscores[i] = 20;i++)
		cout << "quiz " << i << " is a 20" << endl;
	return 0;

}