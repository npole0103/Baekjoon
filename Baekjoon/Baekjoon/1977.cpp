/*
#include <iostream> //완전제곱수
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	int sum = 0;
	int min = 10000;
	
	for(int i = 100; i >= 1 ; i--)
		if( n <= i*i && i*i <= m) //조건에 부합하면
		{
			sum += i*i;
			if(min > i*i)
				min = i*i;
		}
	
	if(sum == 0)
		cout << -1 << endl;
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
	
	return 0;
}
*/
