/*
#include <iostream> //스티커 https://m.blog.naver.com/occidere/220786307316
//https://blog.naver.com/sooooooyn/221803476623
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int t;
	int num;
	
	cin >> t;
	
	while(t-- > 0)
	{
		cin >> num;
		
		int sticker[2][100001];
		int dpSticker[2][100001];
		
		for(int i = 0 ; i < 2 ; i++)
			for(int j = 1 ; j <= num; j++)
				cin >> sticker[i][j];
		
		//2*2까지는 초기화
		dpSticker[0][0] = 0;
		dpSticker[1][0] = 0;
		dpSticker[0][1] = sticker[0][1];
		dpSticker[1][1] = sticker[1][1];
		
		for(int i = 2 ; i <= num ; i++) //n번째까지 고려해야하므로 i<=num
		{
			dpSticker[0][i] = max(dpSticker[1][i-1], dpSticker[1][i-2]) + sticker[0][i];
			dpSticker[1][i] = max(dpSticker[0][i-1], dpSticker[0][i-2]) + sticker[1][i];
		}
		
		cout << max(dpSticker[0][num], dpSticker[1][num]) << endl;
	}
	
	return 0;
}

*/