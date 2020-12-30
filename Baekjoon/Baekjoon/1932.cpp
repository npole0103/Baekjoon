/*
#include <iostream> //정수 삼각형
using namespace std;

int main()
{
	int num;
	int dp[501][501];
	int max = 0;
	
	cin >> num;
	
	for(int i = 0 ; i< num; i++)
		for(int j =0; j<= i; j++)
			cin >> dp[i][j];
	
	for(int i = 1; i< num; i++)
		for(int j = 0; j <= i ; j++)
		{
			if(j == 0) //가장 좌측 j = 0 으로 고정된 상태
				dp[i][j] += dp[i-1][j];
			else if( j == i) //가장 우측 j = i로 고정된 상태
				dp[i][j] += dp[i-1][j-1];
			else //나머지 안쪽일 경우
				dp[i][j] += dp[i-1][j-1] > dp[i-1][j] ? dp[i-1][j-1] : dp[i-1][j];
		}

	//삼각형의 맨 마지막 줄에 저장된 값 중 최댓값 찾기
	for(int i=0; i<num; i++)
		if(dp[num-1][i] > max)
			max = dp[num-1][i];
	
	cout << max << endl;
	
	return 0;
}


5(0,0)
4(1,0) 2(1,1)
7(2,0) 8(2,1) 10(2,2)

*/