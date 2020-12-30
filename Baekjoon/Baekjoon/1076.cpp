/*
#include <iostream> //저항
#include <string>
using namespace std;

int rTable[10][2] = {
	0,  1,
	1,  10,
	2,  100,
	3,	1000,
	4,	10000,
	5,	100000,
	6,	1000000,
	7,	10000000,
	8,	100000000,
	9,	1000000000
};

long long value(string a)
{
	if(a == "black")
		return rTable[0][0];
	else if(a == "brown")
		return rTable[1][0];
	else if(a == "red")
		return rTable[2][0];
	else if(a == "orange")
		return rTable[3][0];
	else if(a == "yellow")
		return rTable[4][0];
	else if(a == "green")
		return rTable[5][0];
	else if(a == "blue")
		return rTable[6][0];
	else if(a == "violet")
		return rTable[7][0];
	else if(a == "grey")
		return rTable[8][0];
	else if(a == "white")
		return rTable[9][0];
}

long long multi(string a)
{
	if(a == "black")
		return rTable[0][1];
	else if(a == "brown")
		return rTable[1][1];
	else if(a == "red")
		return rTable[2][1];
	else if(a == "orange")
		return rTable[3][1];
	else if(a == "yellow")
		return rTable[4][1];
	else if(a == "green")
		return rTable[5][1];
	else if(a == "blue")
		return rTable[6][1];
	else if(a == "violet")
		return rTable[7][1];
	else if(a == "grey")
		return rTable[8][1];
	else if(a == "white")
		return rTable[9][1];
}

int main()
{
	long long result;
	
	string first, second, third;
	
	cin >> first >> second >> third;
	
	result = (value(first)*10 + value(second))*multi(third);
	cout << result << endl;
	
	return 0;
}
*/