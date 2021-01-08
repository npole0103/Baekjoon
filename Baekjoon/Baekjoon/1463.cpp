#include <iostream> //1로 만들기
using namespace std;

//동적 계획법 Dynamic Programming
//가정 1.큰 문제를 작은 문제로 나눌 수 있어야 함.
//가정 2. 작은 문제에서 구한 정답은 그것을 포함하는 큰 문제에서도 동일해야함.
//Memoization이 사용된다는 점에서 분할 정복과 다름.
//Recursion - Top down 방식. / Iteration - Bottom up 방식.
// ※ Bfs는 간선의 가중치가 모두 같을 때 최단 경로를 구하는 알고리즘임
// dp는 부분 문제를 해결하는 것으로 더 큰 문제를 해결할 수 있을 때 사용하는 알고리즘임.

int dp[1000001] = { 0, };
//dp[i]는 최솟값을 의미 / i는 현재 정수를 의미 

int main()
{
	int x;
	int i = 2;

	cin >> x;

	dp[1] = 0;

	while (i <= x)
	{
		dp[i] = dp[i - 1] + 1; //규칙 3
		if(i % 2 == 0)
			//규칙 3 적용한 것과 규칙2를 적용한 것 중 최솟값을 저장
			dp[i] = min(dp[i / 2] + 1, dp[i]);
		if (i % 3 == 0)
			//규칙 3을 적용한 것과 규칙1을 적용한 것 중 최솟값을 저장
			dp[i] = min(dp[i / 3] + 1, dp[i]);
		i++;
		/*
		규칙 1이 제일 마지막에 저장되는 이유는
		나누어 떨어진다는 가장하에 가장 큰 수를
		최소값으로 처리할 수 있기 때문에 가장 마지막에 처리함.

		ex) 6으로 나누어 떨어지는 수라고 가정하면
			2에서도 처리가 되었지만 3으로 처리하는 것이 1을 만들기에 더 접근 속도가 빠르고 효율적이다.
		*/
	}

	cout << dp[x] << endl;

	return 0;
}