/*
#include <iostream> //ºÐ¼öÇÕ
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int fir_ja, fir_mo;
	int sec_ja, sec_mo;
	
	int ans_ja, ans_mo;
	int temp = 0;

	cin >> fir_ja >> fir_mo;
	cin >> sec_ja >> sec_mo;

	ans_ja = fir_ja * sec_mo + fir_mo * sec_ja;
	ans_mo = fir_mo * sec_mo;

	temp = gcd(ans_ja, ans_mo);

	cout << ans_ja/temp << " " << ans_mo/temp << endl;
}
*/