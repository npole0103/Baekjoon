/*
#include <iostream> //직사각형 탈출
using namespace std;

int main()
{
	int x, y, w, h;
	int a, b;
	
	cin >> x >> y >> w >> h;
	
	a = h-y > w-x ? w-x : h-y;
	b = x > y ? y : x;
	
	a = a > b ? b : a;
	
	cout << a << endl;
}
*/