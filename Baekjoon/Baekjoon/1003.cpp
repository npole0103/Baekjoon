/*
#include <iostream> //피보나치 함수
using namespace std;

int data[41];

int fibo(int n)
{
	if(n <= 0)
		return data[0] = 0;
	else if( n == 1)
		return data[1] = 1;
	else if(data[n] != 0) //이미 dp[n]에 값이 존재한다면 그대로 반환 : 시간 단축
		return data[n];
	else
		return data[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int t;
	int num;
	
	cin >> t;
	
	while(t-- > 0)
	{
		cin >> num;
		
		fibo(num);
		
		if(num == 0)
			cout << "1" << " " << "0" << endl;
		else if(num == 1)
			cout << "0" << " " << "1" << endl;
		//else if(num == 2)
		//	cout << "1" << " " << "1" << endl;
		else
			cout << data[num-1] << " " << data[num] << endl;
		
	}
	
	return 0;
}
*/