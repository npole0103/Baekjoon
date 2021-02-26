/*
#include <iostream> //01타일
using namespace std;

int main()
{
	int n;
	long long a[1000000]; //a0 a1 a2
	cin >> n;
	
	a[1] = 1;
	a[2] = 2;
	
	for(int i = 3 ; i <= n; i++)
		a[i] = a[i-1]%15746 + a[i-2]%15746; 
	
	cout << a[n]%15746 << endl;
	
	return 0;
}
*/