/*
#include <iostream> //카드구매하기
using namespace std;
#define MAX(a, b) (a>b ? a : b)
int main()
{
	// 점화식 card[i] = max(card[i], card[i-j] + p[j])
	int num;
	cin >> num;
	int card[1001];
	int price[1001];
	
	for(int i = 1; i <= num ; i++)
		cin >> price[i];
	
	for(int i = 1; i <= num ; i++)
		for(int j = 1; j <= i ; j++)
			card[i] = MAX(card[i], card[i-j] + price[j]);
	
	cout << card[num] << endl;
	
}
*/