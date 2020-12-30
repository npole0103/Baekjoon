/*
#include <iostream> // 팩토리얼 0의 개수
using namespace std;

int main()
{
	int num;
	long long factorial = 1;
	int zero = 0;
	
	cin >> num;
	
	//10을 소인수 분해하면 2와 5로 나뉜다
	//2와 5중 가장 작은 갯수를 최소가 0의 갯수가 될 것임
	//2와 5중 5가 최소일 것임. 2는 공배수가 많기 때문
	//결론은 N < 500 이므로 500 내에 있는 5의 배수의 갯수를 카운팅 해주면 됨
	// https://blog.naver.com/aaammm7777/222058458487
	
	
	for(int i = 1; i <= num ; i++)
	{
		if(i % 125 == 0)
			zero += 3;
		else if(i % 25 == 0)
			zero += 2;
		else if(i % 5 == 0)
			zero += 1;
	}
	
	
	cout << zero << endl;
}
*/
