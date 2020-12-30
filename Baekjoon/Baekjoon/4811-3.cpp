/*
#include <iostream> //알약 dp
using namespace std;

int main() 
{
	int num;
	long long alyac[31][31] = {0, };
	//row is Whole
	//col is Half
	
	for (int i = 0 ; i < 31 ; i++) 
	{
		for (int j = 0 ; j < 31 ; j++) 
		{
			if (i == 0) //하나짜리 알약이 전부 소비된 경우라면 1 대입
				alyac[i][j] = 1;
			else if (j == 0) //반개짜리 알약이 아무것도 없다면
				alyac[i][j] = alyac[i-1][j+1]; //하나짜리 알약을 먹고 반 개짜리 1개를 생성
			else //하나짜리도 존재하며 반 개짜리도 존재할 경우
				alyac[i][j] = alyac[i-1][j+1] + alyac[i][j-1]; //하나짜리 먹고 반 개짜리 생성 && 반 개짜리만 먹기
		}
	}

	
	//for (int i = 0 ; i < 31 ; i++) 
	//{
	//	for (int j = 0 ; j < 31 ; j++) 
	//	{
	//		cout << alyac[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	
	
	while(1)
	{
		cin >> num;
		
		if (num == 0)
			break;
		
		cout << alyac[num][0] << endl;
	}
	
	return 0;
}
*/