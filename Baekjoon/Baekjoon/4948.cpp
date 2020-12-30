/*
#include <iostream> //베르트랑 공준 시간초과
using namespace std;

int main()
{
	int num;
	int count = 0;
	
	while(1)
	{
		count = 0;
		cin >> num;
		if(num == 0)
			break;
		if(num == 1)
		{
			cout << 1 << endl;
			continue;
		}
		
		for(int i = num ; i <= 2*num ; i++)
			for(int j = 2; j <= i ; j++)
			{
				if(i == j && j != num)
					count += 1;
					//cout << j << endl;
				if(i % j == 0)
					break;
			}
		
		cout << count << endl;
	}
	
	return 0;
}
*/