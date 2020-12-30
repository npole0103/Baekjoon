/*
#include <iostream> //1463 1로 만들기
#include <cmath>
using namespace std;

int main()
{
	int num;
	int count = 0;
	
	cin >> num;
	
	while(num != 1) 
	{
		if(num % 3 != 0 && num % 3 != 0) // 3의 배수와 2의 배수가 아닐 경우
		{
			num -= 1;
			count++;
			continue;
		}
		else if(num % 3 == 0) //3의 배수일 경우
		{
			num /= 3;
			count++;
			continue;
		}
		else if(num % 2 == 0) //2의 배수일 경우
		{
			num /= 2;
			count++;
			continue;
		}
		else if(num == 3) //3일 경우
		{
			num -= 2;
			count += 2;
			continue;
		}
		else if(num == 2) //2일 경우
		{
			num -= 1;
			count++;
			continue;
		}
	}
	
	cout << count << endl;
	
	return 0;
}
*/