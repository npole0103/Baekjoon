/*
#include <iostream> //포도주 시식 두칸 띄는 경우를 생각 못 함 2 1 0 0 8 9
using namespace std;

int main()
{
	int num;
	int max = 0;
	
	cin >> num;
	
	int wine[num];
	int result[num] = {0, };
	
	for(int i = 0 ; i < num ; i++)
		cin >> wine[i];

	for(int i = 0 ; i < num ; i++)
	{
		for(int j = i ; j < num ; j += 3)
		{
			result[i] += wine[j];
			if(j + 1 < num)
				result[i] += wine[j+1];
		}
	}
	
	max = result[0];
	for(int i = 0 ; i < num ; i++)
		if(result[i] > max)
			max = result[i];
	
	cout << max << endl;
	
	return 0;
}
*/