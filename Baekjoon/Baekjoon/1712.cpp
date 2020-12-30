/*
#include <iostream> //손익분기점
using namespace std;

int main()
{
	int a, b, c; // a 고정비용 b 가변비용 c 하나 당 판매 가격
	int bep = 0;
	cin >> a >> b >> c;
	
	bep = a/(c-b) + 1; // 하나당 가격 c에서 가변비용 b를 뺀 수익이 고정비용을 최초로 뛰어넘을 때가 손익분기점(bep)임
	if( c-b <= 0) // 만약 c-b <= 0 이라면 손익분기점이 존재할 수 없기 때문에 -1을 대입
		bep = -1;
	
	cout << bep << endl;
	
	return 0;
}
*/