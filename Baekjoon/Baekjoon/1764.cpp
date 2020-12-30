/*
#include <iostream> //듣보잡 문제 시간초과
#include <string>
using namespace std;

int main()
{
	int d;
	int b;
	int db = 0;
	
	cin >> d >> b;
	
	
	string* dd= new string[d];
	string* bb= new string[b];
	string* dbdb= new string[d+1];
	
	for(int i = 0 ; i < d ; i++)
		cin >> dd[i];
	
	for(int i = 0; i < b ; i++)
		cin >> bb[i];
	
	for(int i = 0 ; i < d ; i++)
		for(int j = 0; j < b ; j++)
			if(dd[i].compare(bb[j]) == 0)
			{
				db += 1;
				dbdb[db] = dd[i];
			}
	
	cout << db << endl;
	
	for(int i = 1 ; i < db+1 ; i++)
		cout << dbdb[i] << endl;
	
	return 0;
}
*/