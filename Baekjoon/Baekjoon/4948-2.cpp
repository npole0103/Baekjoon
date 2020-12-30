/*
#include <iostream> //베르트랑 공준 시간초과
using namespace std;

int main()
{
	int num;
	int i,j;
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
		
		int* a = new int[2*num+1]; 
		
		for(int i = 2 ; i <= 2*num ; i++) //num부터 2num까지 숫자 삽입
			a[i] = i;
		
		for(int i = 2 ; i <= 2*num ; i++) // 에라스토테네스의 체 그 수의 배수에 0을 대입
			for(int j = 2; i*j <= 2*num; j++)
				a[i*j] = 0;
		
		for(int i = num + 1 ; i <= 2*num ; i++)
		{
			//cout << a[i] << endl;
			if(a[i] != 0)
				count += 1;
		}
				
		free(a);
		
		cout << count << endl;
	}
	
	return 0;
}
*/