/*
#include <iostream> //¶± ¸Ô´Â È£¶ûÀÌ
using namespace std;

int main()
{
	int riceCake[31];

	
	int day;
	int dduk;

	cin >> day >> dduk;

	for (int i = 1; i < 1000001; i++)
	{
		for (int j = 1; j < 100001; j++)
		{
			riceCake[1] = i;
			riceCake[2] = j;
			for (int k = 3; k <= day; k++)
				riceCake[k] = riceCake[k - 2] + riceCake[k - 1];
			if (riceCake[day] == dduk)
				break;
		}
		if (riceCake[day] == dduk)
			break;
	}

	cout << riceCake[1] << endl;
	cout << riceCake[2] << endl;
}
*/