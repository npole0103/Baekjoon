/*
#include <iostream> //동전 0
using namespace std;

int main()
{
	int kind;
	int money;
	int ans = 0;
	
	cin >> kind >> money;
	
	int coin[kind + 1];
	
	for(int i = 1 ; i < kind + 1 ; i++)
		cin >> coin[i];

	for(int i = kind ; i > 0 ; i--)
	{
		if(money / coin[i] != 0)
		{
			ans += (money / coin[i]);
			money -= (money / coin[i]) * coin[i];
		}
			
	}
	
	cout << ans << endl;
	
	return 0;
}
*/