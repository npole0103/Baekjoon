//#include <iostream> //이항 계수
//using namespace std;
//
//int main()
//{
//	int n, k;
//	int nSum = 1;
//	int kSum = 1;
//
//	cin >> n >> k;
//
//	if (n == 0 || k == 0)
//	{
//		cout << "1" << endl;
//		return 0;
//	}
//
//	for (int i = 0; i < k; i++)
//		nSum *= (n-i);
//
//	for (int i = 1; i <= k; i++)
//		kSum *= i;
//
//	cout << nSum / kSum << endl;
//}