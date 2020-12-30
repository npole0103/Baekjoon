/*
#include <iostream> //알람 시계
using namespace std;

int main()
{
	int hour, min;
	cin >> hour >> min;
	
	if(min >= 45)
		min -= 45;
	else if(min < 45)
	{
		if(hour != 0) 
		{
			hour -= 1;
			min -= 45;
			min += 60;
		}
		else
		{
			hour = 23;
			min -= 45;
			min += 60;
		}
	}
	
	cout << hour <<" "<< min << endl;

	return 0;
}
*/