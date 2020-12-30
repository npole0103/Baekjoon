/*
#include <iostream> //만취한 상범
using namespace std;

int main()
{
	int t;
	int num;
	
	cin >> t;
	
	while(t--)
	{
		cin >> num;
		int room[101] = { 0, };
		
		for(int i = 1; i <= num; i++) // 1번째부터 100번쨰 방
		{
			for(int j = 1; i*j <= num ; j++)
			{
				if(room[i*j]) //if 참이면 1이면
					room[i*j] = 0;
				else
					room[i*j] = 1;
			}
		}
		for(int i = 1; i <= num ; i++) // 빈 배열 room[0]에 열린 방의 갯수 합함.
				room[0] += room[i];

		cout << room[0] << endl;
	}

	return 0;
}
*/