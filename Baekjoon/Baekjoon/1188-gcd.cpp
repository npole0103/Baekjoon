/*
#include <iostream> //음식 평론가 https://blog.naver.com/shy9546/221762232247
using namespace std;

int gcd(int a, int b)
{
	//if( b == 0 )
	//	return a;
	//gcd(b, a%b);
	
	//b가 0이 된다면 a를 반환해라
	return b ? gcd(b, a%b) : a;
}

int main()
{
	int n; //소시지
	int m; //평론가
	
	cin >> n >> m;
	
	cout << m - gcd(n, m) << endl;
}
*/