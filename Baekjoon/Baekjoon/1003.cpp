/*
#include <iostream> //피보나치 함수
using namespace std;

int dp[41];

int fibo(int n)
{
	if(n <= 0)
		return dp[0] = 0;
	else if( n == 1)
		return dp[1] = 1;
	else if(dp[n] != 0) //이미 dp[n]에 값이 존재한다면 그대로 반환 : 시간 단축
		return dp[n];
	else
		return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int t;
	int num;
	
	cin >> t;
	
	while(t-- > 0)
	{
		cin >> num;
		
		fibo(num);
		
		if(num == 0)
			cout << "1" << " " << "0" << endl;
		else if(num == 1)
			cout << "0" << " " << "1" << endl;
		else
			cout << dp[num-1] << " " << dp[num] << endl;
		
	}
	
	return 0;
}
*/