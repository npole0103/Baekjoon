/*
#include <iostream> //결혼식 그래프 https://blog.naver.com/ephraimdrlee/221546011989
using namespace std;

int main()
{
	int a, b;
	int n;
	int list;
	int admitCount = 0;
	
	cin >> n >> list;
	
	int arr[501][501];
	
	//0으로 초기화
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1; j <= n ; j++)
			arr[i][j] = 0;
	
	//그래프 점찍기
	for(int i =0 ; i < list ; i++)
	{
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	
	int admitList[501] = { 0, };
	
	for(int j = 2 ; j <= n ; j++)
	{
		if(arr[1][j] == 0) // 성범이와 친구가 아닐 경우
			continue;
		else //친구가 맞다면
		{
			admitList[j] = 1; //admitList에 1을 저장 성범이의 친구라는 뜻
			for(int k = 2 ; k <= n; k++) //성범이 친구의 친구 구하기
				if(arr[k][j] == 1) //j는 고정된 상태(성범친구)에서 나머지 친구(k)들 전부 찾아서 1 표시
					admitList[k] = 1;
		}
	}

	for(int i = 1; i <= n ; i++)
		admitCount += admitList[i];

	cout << admitCount << endl;
		
	return 0;
}
*/