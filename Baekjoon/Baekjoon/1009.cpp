/*
#include <iostream> //분산처리
#include <math.h>
using namespace std;

int main()
{
	int t;
	int a, b;
	cin >> t;

	while (t-- > 0)
	{
		cin >> a >> b;
		a = pow(a, b % 4 == 0 ? 4 : b % 4);
		cout << ((a % 10 == 0) ? 10 : a % 10) << endl;
	}
}
*/

/*
int main()
{
	int num;
	cin >> num;
	int a[num+1]; //정수
	int b[num+1]; //계수
	int c[num+1]; // c는 4의 반복구간 중 n번째 수. 즉, 계수를 4로 나눈 나머지
	int temp[num+1]; // 자리수 == 컴퓨터 번호 , 크키가 5인 이유는 반복 구간이 4개이기 때문에 1, 2, 3, 4
	
	for(int i = 1 ; i <= num ; i++) // a는 정수 b는 계수 Input
		cin >> a[i] >> b[i];
	
	for(int i = 1; i <= num ; i++) //num가지 케이스 전부 계산
	{
		c[i] = b[i] % 4 == 0 ? 4 : (b[i] % 4); // 4로 나눴을 때 n번째 수
		
		//if(c[i] == 1) temp[i] = a[i];
		//else if(c[i] == 2) temp[i] = a[i]*a[i];
		//else if(c[i] == 3) temp[i] = a[i]*a[i]*a[i];
		//else if(c[i] == 4) temp[i] = a[i]*a[i]*a[i]*a[i];
		
		temp[i] = pow(a[i],c[i]); //일의 자리가 일치하는 제곱수 구함.
		temp[i] %= 10; // 1의 자리수 구해서 저장
			if(temp[i] == 0) //0번 컴퓨터가 없고 10번 컴퓨터이기에
				temp[i] = 10;
	}
	
	for(int i = 1 ; i <= num ; i++)
		cout << temp[i] << endl;
	
	return 0;
}
*/