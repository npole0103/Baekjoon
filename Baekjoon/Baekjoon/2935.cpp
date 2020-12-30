/*
#include <iostream> //소음
#include <string>
using namespace std;

int main()
{
	//asc : 42 *, 43 +
	string a, b;
	int len; 
	char logicSymbol;
	
	cin >> a >> logicSymbol >> b;
	
	if(logicSymbol == 42)
	{
		len = a.length() + b.length();
		cout << '1';
		for(int i = 0; i < len - 2 ; i++)
			cout << '0';
	}
	else if(logicSymbol == 43)
		if(a.length() > b.length())
		{
			a[a.length() - b.length()] = '1';
			cout << a;
		}
		else if(a.length() < b.length())
		{
			b[b.length() - a.length()] = '1';
			cout << b;
		}
		else if(a.length() == b.length())
		{
			a[0] = '2';
			cout << a;
		}
	
	cout << endl;
	
	return 0;
}
*/