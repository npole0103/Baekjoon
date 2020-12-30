/*
#include <iostream> //연속 합
using namespace std;

int main()
{
	int n = 0, temp = 0;
	int max = 0, min = 0;
	
	cin >> n;
	
	// dynamic arrays
	int *arr = new int[n];
	
	//insert number in array
	for(int i = 0; i < n ; i++)
	{
		cin >> temp;
		arr[i] = temp;
	}
	
	max = arr[0];
	
	for(int i = 1; i < n ; i++)
	{
		if(arr[i-1] > 0) //앞 수가 양수라면
			if(arr[i-1] + arr[i] > 0) // 앞 수와 본인을 더한 값이 양수라면
				arr[i] += arr[i-1]; // 앞 수와 본인을 더한 값을 arr[i]에다가 저장
		
		if(arr[i] > max)
			max = arr[i];
	}
	
	cout << max << endl;
}
*/