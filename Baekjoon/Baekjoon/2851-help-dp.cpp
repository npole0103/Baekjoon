/*
#include <iostream> //수퍼마리오
#include <math.h>
using namespace std;

int main()
{
	int mushroom[10];
	int sum = 0;
	int check = 0;
	
	for(int i = 0; i < 10 ; i++)
		cin >> mushroom[i];
	
	for(int i = 0 ; i < 10 ; i++) //총합이 100이 넘지 않을 때 확인용
		check += mushroom[i];
	
	for(int i = 0 ; i < 9 ; i++)
	{
		sum += mushroom[i];
		//cout << sum << endl;
		
		if( check == sum + mushroom[i+1] && sum + mushroom[i+1] <= 100) //총합이 100을 안 넘을 때
			cout << sum + mushroom[i+1] << endl;
		else if( abs(100 - sum) < abs(100 - (sum + mushroom[i+1])) ) //현재 sum이 100에 더 가까울 때
		{
			cout << sum << endl;
			break;
		}
		else if( abs(100 - sum) == abs(100 - (sum + mushroom[i+1])) ) //다음 sum과 현재 sum이 100에 동일하게 가까울 때
		{
			cout << sum + mushroom[i+1] << endl;
			break;
		}
	
		else if( abs(100 - sum) > abs(100 - (sum + mushroom[i+1])) && i < 8 ) //다음 sum이 100에 더 가까울 때
			continue;
		else // i == 8 인데 현재 수보다 다음 수가 더 근접할 때 ex 90, 109
			cout << sum + mushroom[i+1] << endl;
	}
	
	return 0;
}

*/