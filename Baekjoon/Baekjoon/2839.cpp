/*
#include <iostream> //설탕 배달
using namespace std;

int main()
{
	int num;
	int five = 100000; //5로 나눠질 때
	int three = 100000; //3으로 나눠질 때
	int fivethree = 100000; // 3과 5의 합으로 이뤄진 합성 수
	int min = 100000; // 합성수 중 봉지에 담았을 때 5키로 봉지가 많은 경우.  20 => 5 5 5 5, 5 3 3 3 3 3 3
	int exception = 0; //예외 상황 활성화
	cin >> num;
	
	if(num%3 == 0) //3으로 나눠질 때
		three = num/3;
	if(num%5 == 0) //5로 나눠질 때
		five = num/5;
	
	if(num%3 != 0 || num%5 != 0 || (num%5)%3 != 0) //예외
		exception = 1;
	
	for(int i = 1 ; num-5*i > 0 ; i++) //3과 5의 합으로 구성되어 있는 경우
	{
		if((num-5*i)%3 == 0)
		{
			fivethree = i;
			fivethree += (num-5*i)/3;
		}
			
		if(min > fivethree)
			min = fivethree;
	}
	
	if(exception == 1 && min == 100000 && five == 100000 && three == 100000 && fivethree == 100000) //예외 상황
		cout << -1 << endl;
	else
	{
		cout << ((five > three ? three : five) > min ? min : (five > three ? three : five)) << endl;
	}
		
	return 0;
}
*/