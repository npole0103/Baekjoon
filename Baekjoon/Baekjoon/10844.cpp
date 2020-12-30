/*
#include <iostream> //쉬운 계단수 - 정답은 나오나 큰 수를 입력하면 시간이 배로 걸림
using namespace std;

int main()
{
	int len;
	cin >> len;
		
	int num = 1; // 1
	int stairNum = 0; //result
	int digit[len] = {0, };
	int temp = 0;
	
	//한 자리수마다 분해해서 배열에다가 집어넣기
	//그 후 배열과 인접수 인지 비교
	//계단 수라면 stairNum++
	
	for(int i = 0 ; i < len - 1 ; i++)
		num *= 10;
	
	//n ~ n*10

	for(int i = num ; i < num*10 ; i++)
	{
		temp = i;
		
		while(temp)
		{
			for(int j = 0 ; j < len ; j++)
			{
				digit[j] = temp % 10;
				temp /= 10;
			}
		}
		
		for(int j = 0 ; j < len ; j++)
			cout << digit[j] << " ";
		cout << endl;
		
		for(int k = 0 ; k < len - 1 ; k++)
		{
			if(digit[k] != digit[k+1] - 1 && digit[k] != digit[k+1] + 1) //인접수가 1 차이가 아님
				break;
			
			if(k == len - 2) //끝까지 도달했다면
				stairNum++;
		}
	}
	
	if(len == 1)
		stairNum = 9;
	
	cout << stairNum % 1000000000 << endl;
	
}
*/