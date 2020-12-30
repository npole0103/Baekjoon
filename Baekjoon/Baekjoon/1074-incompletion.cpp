/*
#include <iostream> //Z
#include <math.h>
using namespace std;

int main()
{
	int n, r, c; // 2^n row column
	cin >> n >> r >> c;
	int count = 0;
	
	int arr[(int)pow(2,n)][(int)pow(2,n)];
	
	for(int i = 0; i < pow(2, n)/4; i++)
	{
		arr[i][i] = count;
		count += 1;
		arr[i][i+1] = count;
		count += 1;
		arr[i+1][i] = count;
		count += 1;
		arr[i+1][i+1] = count;
		count += 1;
	}
	
	
	
	cout << arr[r][c] << endl;
	
	return 0;
}
*/