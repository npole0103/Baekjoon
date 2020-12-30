/*
#include <iostream> //더하기 사이클
using namespace std;

int main()
{
	int num;
	int count = 0;
	int front, back;
	int result;
	
	cin >> num;
	
	//initialzation 이니셜제이션
	result = num;
	
	while(1)
	{	
		//front value
		if( 0 <= result && result < 10 )
			front = 0;
		else
			front = result/10;
		
		//back value
		back = result % 10;
		
		//new value
		result = (back*10) + (back+front)%10;
		count += 1;
			
		//if num is equal to result
		if(num == result)
			break;
	}
	
	cout << count << endl;
	
	return 0;
}
*/