/*
#include <iostream> //날짜 계산
using namespace std;

int tearth = 0, tsun = 0, tmoon = 0;
int year = 0;

int main()
{
	int earth, sun, moon;
	cin >> earth >> sun >> moon;
	
	
	while(1)
	{
		tearth += 1;
		tsun += 1;
		tmoon += 1;
		year += 1;
		if(earth==(tearth%15 == 0 ? 15 : tearth%15) && sun==(tsun%28 == 0 ? 28 : tsun%28) && moon==(tmoon%19 == 0 ? 19 : tmoon%19))
			break;
	}

	cout << year << endl;
}
*/