//#include <iostream> //곱셈 https://etst.tistory.com/316?category=953392
//using namespace std;
//
//int myPow(int a, int b, int c)
//{
//	if (b == 1) // 재귀 종료 조건
//		return a % c;
//
//	long long temp = myPow(a, b / 2, c);
//	
//	if (b % 2) //b가 홀수이면
//		return ((temp * temp) % c * a) % c;
//	else //b가 짝수이면
//		return (temp * temp) % c;
//
//}
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	cout << myPow(a, b, c) << endl;
//
//	/*
//	1. b가 1일이 될 때까지 재귀를 돌게 되고 그때의 a % c값 temp에 저장
//	2. b가 홀수인 경우 나머지*나머지 % c 값에서 a를 한번더 곱해주고 % c 값을 반환.
//	3. b가 짝수인 경우 나머지*나머지 % c 값을 반환
//	*/
//}