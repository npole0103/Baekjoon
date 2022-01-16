//#include <iostream> // 2*n 타일링
//#include <algorithm>
//using namespace std;
// 
//int dp[1001];
//
//int main()
//{
//	/*
//	2*1 = 1개
//	2*2 = 2개
//	2*3 = 3개
//	2*4 = 5개
//	*/
//
//	int n;
//	cin >> n;
//
//	dp[1] = 1;
//	dp[2] = 2;
//
//	for (int i = 3; i <= n; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2] % 10007;
//	}
//
//	cout << dp[n] % 10007 << endl;
//
//	return 0;
//}