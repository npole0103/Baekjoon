/*
#include <iostream> //알약 카탈란수?
using namespace std;

long long alyac(int a)
{
	int num = a;
	int ans = 1;
	
	// (1/n+1)*2nCn
	for(int i = num + 1 ; i <= 2*num ; i++)
	{
		ans *= i;
		ans /= i-num;
	}
	return ans/(num+1);
}

// 1/n+1 * 2nCn
// 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 / 15 14 13 12 11 10  9 8 7 6 5 4 3 2 1 

int main()
{
	int num;
	
	while(1)
	{
		cin >> num;
		if(num == 0)
			break;
	
		printf("%lld\n", alyac(num));
	}
	
	return 0;
}
*/