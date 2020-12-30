/*
#include <iostream> //제곱ㄴㄴ
using namespace std;

int main()
{
	long long n;
	int count = 0;
	
	cin >> n;
	
	long long arr[2*n + 1] = {0, };
	long long markarr[2*n + 1] = {0, };
	
	for(long long i = 1 ; i < 2*n + 1; i++)
		arr[i] = i;
	
	for(long long i = 1 ; i < 2*n + 1; i++)
		for(long long j = 2 ; j < 2*n + 1; j++)
			for(long long k = 1 ; k < 2*n + 1; k++)
				if(arr[i] == j*j*k)
					markarr[i] = 1;
	
	for(long long i = 1 ; i < 2*n + 1; i++)
	{
		if(markarr[i] == 0)
			count++;
		
		if(count == n)
		{
			count = i;
			break;
		}
	}
	
	//for(long long i = 1 ; i < 2*n + 1; i++)
	//	cout << markarr[i] << " ";
	
	cout << count << endl;
	
	return 0;
}

*/