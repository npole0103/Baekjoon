/*
#include <iostream> //01타일
using namespace std;

long long comb(int a, int b)
{
	long long bunja = 1;
	long long bunmo = 1;
	int tempB = (a-b >= b ? b : a-b);
	
	if(a == b) // 6C6 4C4 == 1
		return 1;
	else if( b == 0) // 6C0 3C0 == 1
		return 1;
	else // 6C2 == 6*5 / 2*1 , 7C3 == 7*6*5 / 3*2*1
	{
		//분자
		for(int i = 0 ; i < tempB ; i++)
			bunja *= a--;
		//분모
		for(int i = 1 ; i <= tempB ; i++)
			bunmo *= i;
		return bunja/bunmo;
	}	
}

int main()
{
	int n;
	long long sum = 0;
	int right = 0;
	int left = 0;
	cin >> n;
	
	for(int i = 2 ; i <= n ; i += 2)
	{
		right = n - i;
		left = right + i/2;
		sum += comb(left, right);
		//cout << i/2 << "번째" << sum  << "left "<< left << "right"<< right << endl;
	}
		
	if(n == 1)
		cout << 1 << endl;
	else
		cout << (sum+1)%15746 << endl;

	return 0;
}
*/