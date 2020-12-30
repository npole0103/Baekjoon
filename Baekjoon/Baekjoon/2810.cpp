/*
#include <iostream> //컵홀더
#include <string>
using namespace std;

int main()
{
	int n;
	int count = 0;
	
	int all_s_exp = 0;
	
	string seat;
	
	cin >> n >> seat;
	
	for(int i = 0 ; i < n ; i++) //전부다 S좌석인지 검사
		if(seat[i] == 'L') //L이 하나라도 있으면
			all_s_exp = 1;
	
	for(int i = 0 ; i < n ; i++)
	{
		if(seat[i] == 'S')
			count += 1;
		else if(seat[i] == 'L')
			if(seat[i+1] == 'L')
			{
				count += 1;
				i++; // i 1만 증가 시키고 for문 끝날 때 1 증가하여 총 2증가
			}
	}
	
	
	
	if( n == 1 ) // 사람이 한명일 때는 컵홀더 1개
		cout << 1 << endl;
	else if( all_s_exp == 0 ) //전부다 S일 경우
		cout << n << endl;
	else
		cout << count + 1 << endl; // 첫좌석 컵홀더 +1
	
	return 0;
}
*/