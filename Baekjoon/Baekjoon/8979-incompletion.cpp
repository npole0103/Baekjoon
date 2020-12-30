/*
#include <iostream> //올림픽
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	
	int** info = new int* [n+1]; //2차원 동적 배열 할당 int[n+1][6]
	for(int i = 1 ; i <= n; i++)
		info[i] = new int[6];

	
	for(int i = 1 ; i <= n ; i++) //나라, 금, 은, 동, 순위
		for(int j = 1 ; j <= 4 ; j++)
			cin >> info[i][j];
	
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= 5 ; j++)
			cout << info[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
*/