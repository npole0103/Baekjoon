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

//오직 1,2,3으로만 수를 표현할 수 있음, 이 말은 N-3번째에 3을 더하고 N-2번째에 2를 더하고 N-1번째에 1을 더하면 
N을 만들 수 있다는 것이므로 N-3, N-2, N-1 번째 경우의 수를 더해준다면 N을 구할 수 있음.
DP조건에 적합

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
