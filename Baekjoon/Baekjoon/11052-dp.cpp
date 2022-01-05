/*
#include <iostream> //카드구매하기
using namespace std;
#define MAX(a, b) (a>b ? a : b)
int main()
{
	// 점화식 card[i] = max(card[i], card[i-j] + p[j])
	// card[n] n개의 카드를 사는데 최대금액
	// for문 j를 돌면서 각 조합에 대한 최대금액을 찾음

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