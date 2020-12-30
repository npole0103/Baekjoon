/*
#include <iostream> //알약 카탈란수?
using namespace std;

long long count = 0;

int alyac(int w, int h)
{
	int whole = w;
	int half = h;
	
	if(whole > 0 && half == 0) //반개 짜리가 없을 때
	{
		alyac(whole - 1, half + 1); //한개짜리 먹는 경우
	}
	else if(whole > 0 && half != 0 && half > 0) //반개 짜리가 있을 때
	{
		alyac(whole - 1, half + 1); //한개짜리 먹는 경우
		alyac(whole, half - 1); //반개짜리 먹는 경우
	}
	else if(whole == 0)
		count++;
}

int main()
{
	int num;
	
	while(1)
	{
		cin >> num;
		if(num == 0)
			break;
		
		alyac(num, 0);
		
		cout << count << endl;
		
		count = 0;
	}
	
	return 0;
}
*/