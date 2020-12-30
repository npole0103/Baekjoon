/*

#include <iostream> //2007년
using namespace std;

int main()
{
	int x, y;
	int month = 0;
	cin >> x >> y;
	
	int dayofweek;
	
	
	for(int i = 0 ; i < x ; i++)
	{
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			month += 31;
		else if(i == 4 || i == 6 || i == 9 || i == 11)
			month += 30;
		else if(i == 2)
			month += 28;
	}
	
	dayofweek = month + y;
	
	if(dayofweek % 7 == 1)
		cout << "MON" << endl;
	else if(dayofweek % 7 == 2)
		cout << "TUE" << endl;
	else if(dayofweek % 7 == 3)
		cout << "WED" << endl;
	else if(dayofweek % 7 == 4)
		cout << "THU" << endl;
	else if(dayofweek % 7 == 5)
		cout << "FRI" << endl;
	else if(dayofweek % 7 == 6)
		cout << "SAT" << endl;
	else if(dayofweek % 7 == 0)
		cout << "SUN" << endl;
	
	return 0;
}

*/