//#include <iostream> //���� https://etst.tistory.com/316?category=953392
//using namespace std;
//
//int myPow(int a, int b, int c)
//{
//	if (b == 1) // ��� ���� ����
//		return a % c;
//
//	long long temp = myPow(a, b / 2, c);
//	
//	if (b % 2) //b�� Ȧ���̸�
//		return ((temp * temp) % c * a) % c;
//	else //b�� ¦���̸�
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
//	1. b�� 1���� �� ������ ��͸� ���� �ǰ� �׶��� a % c�� temp�� ����
//	2. b�� Ȧ���� ��� ������*������ % c ������ a�� �ѹ��� �����ְ� % c ���� ��ȯ.
//	3. b�� ¦���� ��� ������*������ % c ���� ��ȯ
//	*/
//}