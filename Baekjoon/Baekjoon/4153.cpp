/*
#include <iostream> //직각 삼각형
using namespace std;

void rect(int a, int b, int c)
{
	if( a*a == b*b + c*c)
		cout << "right" << endl;
	else if( b*b == a*a + c*c)
		cout << "right" << endl;
	else if( c*c == a*a + b*b)
		cout << "right" << endl;
	else
		cout << "wrong" << endl;
}



int main()
{
	int a, b, c;
	int max_num;
	
	while(1)
	{
		cin >> a >> b >> c;
		if( a == 0 && b == 0 && c == 0)
			break;
		rect(a, b, c);
	}
	
	return 0;	
}
*/