/*
#include <iostream> //5와 6의 차이
using namespace std;

int sixtofive(int a)
{
	int result = 0;
	int temp;
	int count = 1;
	while(a)
	{
		temp = a % 10;
		a /= 10;
		if(temp == 6)
			temp = 5;
		result += (temp*count);
		count *= 10;
	}
	
	return result;
}

int fivetosix(int a)
{
	int result = 0;
	int temp;
	int count = 1;
	while(a)
	{
		temp = a % 10;
		a /= 10;
		if(temp == 5)
			temp = 6;
		result += (temp*count);
		count *= 10;
	}
	
	return result;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << sixtofive(a)+sixtofive(b) << " " << fivetosix(a)+fivetosix(b) << endl;
	
	return 0;
}
*/