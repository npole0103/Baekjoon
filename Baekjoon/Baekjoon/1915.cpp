/*
#include <iostream> //1915 가장 큰 정사각형
using namespace std;

int main()
{
	int n , m;
	cin >> n >> m;
	int count = 0;
	int result = 0;
	
	int rect[1001][1001] = {2, };
	
	for(int i = 1 ; i <= n ; i++) // 현재 문제, 입력 받는 것이 공백 구별 없이 받음
		for(int j = 1 ; j <= m; j++)
			cin >> rect[i][j];
	
	
	for(int i = 1; i <= n ; i++)
		for(int j = 1; j <= m; i++)
		{
			endloop:
			{
				if(rect[i][j] == 1) //1이 표시된 구간 발견시
				{
					for(int k = j ; rect[i][k] != 1 ; k++) //몇 짜리 사각형인지
						count += 1;

					check_loop:
					{
						for(int l = i; l <= count ; l++)
							for(int o = j; o <= count ; o++)
							{
								if(count == 1) //사각형이 1x1짜리라면
								{
									result = 1;
									goto endloop;
								}

								if(rect[count][count] == 1) // count * count 가 전부 1로 표시되어있다면
									result = count;
								else if( rect[l][o] == 1)
									continue;
								else if( rect[l][o] != 1) //1이 아니라면
								{
									count -= 1; // count - 1 정사각형 검사
									goto check_loop;
								}
							}
					}

				}
				else
					continue;
			}
		}
	
	
	
	return 0;
}
*/