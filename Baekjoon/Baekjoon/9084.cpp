/*
#include <iostream> // 동전
using namespace std;

int main()
{
	int t;
	int num;
	int goalMoney;
	cin >> t;
	
	while(t-- > 0)
	{
		cin >>  num;
		int coin[num+1];
		
		for(int i = 1; i <= num ; i++)
			cin >> coin[i];
		
		cin >> goalMoney;
		
		int money[goalMoney + 1] = { 0, };
		
		money[0] = 1;
		for(int i = 1 ; i <= num ; i++)
			for(int j = coin[i] ; j <= goalMoney ; j++)
				money[j] += money[j - coin[i]];
		
		cout << money[goalMoney] << endl;
		
	}
	
	return 0;
}
*/
