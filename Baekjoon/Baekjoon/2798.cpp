/*
#include <iostream> //블랙잭
using namespace std;

int abs(int a, int b)
{
	if(a - b >= 0)
		return a - b;
	else if(a - b < 0)
		return b - a;
}

int main()
{
	int n, m;
	int i, j, k;
	cin >> n >> m;
	int temp;
	int max = 300000;
	int result = 0;
	
	int* card = new int[n];
	
	for(int i = 0 ; i < n ; i++)
		cin >> card[i];
	
	for(int i = 0 ; i < n - 2 ; i++) // 5입력시 012 013 014 023 024 034 123 ...234 출력
		for(int j = 1 + i; j < n-1 ; j++)
			for(int k = 1 + j ; k < n; k++)
			{
				temp = card[i] + card[j] + card[k];

				if(temp > m) // m을 넘지 않아야 함
					continue;
				
				if(abs(m, temp) <= max) //max값보다 작다면, m과 temp의 차이가, 즉 가깝다면
				{
					max = abs(m, temp); //그 차이만큼을 저장하고 max에 저장하고
					result = temp; //result에 합을 저장한다.
				}
			}
	
	cout << result << endl;
	
	return 0;
}
*/