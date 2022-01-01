/*
#include <iostream> //포도주 시식
#define MAX(a, b) (a > b ? a : b)
using namespace std;

int main()
{
	int num;
	
	cin >> num;
	
	int dp[num + 1] = {0, };
	int wine[num + 1] = {0, };
	
	for(int i = 1 ; i <= num ; i++)
		cin >> wine[i];
	
	//dp[1] & dp[2] initialize
	dp[1] = wine[1];
	if (num > 1)
		dp[2] = dp[1] + wine[2];
	
	// dp [i - 1] 아무것도 먹지 않았을 경우 현재까지 먹어온 최대 포도주 양
	// dp [i - 2] + wine[i] 현재 먹은 포도주가 첫 잔이 됨
	// dp [i - 3] + wine[i - 1] + wine[i] 현재 먹은 포도주가 2연속인 경우
	// 위 3개의 값 중 가장 큰 값을 선택해서 dp를 채워나가면 모든 경우에서의 최댓값 구할 수 있다.
	
	for(int i = 3 ; i <= num ; i++)
		dp[i] = MAX(dp[i - 1], MAX(dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]));

	cout << dp[num] << endl;
	
	return 0;
}

*/