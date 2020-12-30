/*
#include <iostream> //오븐 시계
using namespace std;

int main()
{
	int hour;
	int min;
	int time;
	
	cin >> hour >> min;
	cin >> time;
	
	//hour manage
	if(hour + (time/60) == 24) //0시일 경우
		hour = 0;
	else if(hour + (time/60) > 23) //23시 초과할 경우
	{
		hour = (hour + time/60)%24;
	}
	else
		hour += time/60;
	
	//min manage
	if(min + (time % 60) == 60) // 00분일 경우
	{
		min = 0;
		hour += 1;
		if(hour == 24) //0시일 경우
			hour = 0;
	}
	else if( min + (time % 60) > 59) // 59분 초과일 경우
	{
		min = (min + (time % 60) )%60;
		hour += 1;
		if(hour == 24) //0시일 경우
			hour = 0;
	}
	else
		min += time % 60;
	
	cout << hour << " " << min << endl;

}
*/

