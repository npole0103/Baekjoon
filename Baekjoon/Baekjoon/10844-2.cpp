/*
#include <iostream> //쉬운 계단 수 https://blog.naver.com/sandcookie20/222002982592
using namespace std;

int main()
{
	int len;
	long long mod = 1000000000;
	long long dp[101][10] = {0, };
	long long result = 0;
	
	cin >> len;
	
	//dp에는 방법의 가지 수가 저장됨.
	//dp[digit number][last digit]
	//digit number >> 몇 자리 숫자인가
	//last digit >> 끝의 자리 숫자에 대한 가지 수
	
	//dp[2][4]의 경우의 수는 34 54의 2가지 입니다.

	//dp[2][6]의 경우의 수는 56 76의 2가지 입니다.

	//dp[3][5]는 세자리 숫자고 마지막 자리의 수가 5이므로 경우의 수는 345 545 565 765 네가지 입니다

	//따라서 점화식은 dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]
	
	// 1~9까지 예외처리
	for(int i = 1 ; i < 10 ; i++)
		dp[1][i] = 1;
	
	dp[1][0] = 0;
	
	for(int i = 2 ; i <= len ; i++)
	{
		for(int j = 0 ; j < 10 ; j++)
		{
			if(j == 0)
				dp[i][j] = dp[i - 1][j + 1] % mod;
			else if(j == 9)
				dp[i][j] = dp[i - 1][j - 1] % mod;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
		}
	}
	
	for(int i = 0 ; i < 10 ; i++)
		result += dp[len][i];
	
	cout << result << endl;
	
	return 0;
}

*/