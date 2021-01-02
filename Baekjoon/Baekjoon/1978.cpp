/*
#include <iostream>//소수찾기
using namespace std;

int primeNum(int a)
{
	// 1 is exception
	if(a == 1)
		return 0;
	
	int value = a;
	
	for(int i = 2 ; i < value ; i++)
		if(value % i == 0)
			return 0; // 소수라면 0을 반환
	return 1; //소수가 아닌 수라면 1을 반환
}


int main()
{
	int num;
	int count = 0;
	cin >> num;
	
	int arr[num];
	
	for(int i = 0; i < num ; i++)
		cin >> arr[i];
	
	//소수면 1을 반환하는 함수, 아니면 0을 반환
	for(int i = 0 ; i < num ; i++)
		count += primeNum(arr[i]);
	
	cout << count << endl;
	
	return 0;
}
*/