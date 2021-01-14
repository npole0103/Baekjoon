/*
#include <iostream> //1, 2, 3 더하기
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int arr[num];
	int dp[11];
	dp[1] = 1, dp[2] = 2, dp[3]=4;
	
	for(int i = 4; i < 11 ; i++)
		dp[i]= dp[i-1] + dp[i-2] + dp[i-3];
	
	for(int i = 0; i < num ; i++)
		cin >> arr[i];
	
	for(int i = 0; i < num ; i++)
		cout << dp[arr[i]] << endl;
	
	return 0;
}

//n = 1
//1

//n = 2
//1 + 1 + 3
//2 + 3

//n = 3
//1+ 1 + 1 + 2
//1 + 2 + 2
//2 + 1 + 2
//3 + 2

//n = 4
//1 + 3 + 1
//1 + 1 + 2 + 1
//2 + 2 + 1
//1 + 1 + 1 + 1 +1
//1 + 2 + 1 + 1
//2 + 1 + 1 + 1
//3 + 1 + 1
*/
