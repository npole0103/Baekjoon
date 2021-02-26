/*
#include <iostream> //gcd гу
using namespace std;

int gcd(int a, int b)
{
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main()
{
	int cnt;
	int temp;
	int tcase[101];

	cin >> cnt;

	while (cnt--)
	{
		long long sum = 0;

		cin >> temp;
		for (int i = 1 ; i <= temp; i++)
			cin >> tcase[i];

		for (int i = 1; i <= temp - 1; i++)
			for (int j = i + 1; j <= temp; j++)
				sum += gcd(tcase[i], tcase[j]);
			
		cout << sum << endl;
	}

	return 0;
}
*/