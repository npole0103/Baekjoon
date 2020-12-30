/*
#include <iostream> //X보다 작은 수
using namespace std;

int main()
{
	int num;
	int criteria;
	cin >> num >> criteria;
	
	int* a = new int[num];
	for(int i = 0; i < num ; i++)
		cin >> a[i];
	
	
	for(int i = 0; i < num ; i++)
		if(a[i] >= criteria)
			a[i] = 0;
	
	for(int i = 0; i < num ; i++)
		if(a[i] != 0)
			cout << a[i] << " ";
	
	
	return 0;
}
*/