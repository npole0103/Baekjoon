//#include <iostream> //�� ã��
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////binary_search ��� https://en.cppreference.com/w/cpp/algorithm/binary_search
////�ð� �ʰ����� printf / scanf �̿��غ� ��.
//
//int main()
//{
//	int n;
//	int m;
//	int temp;
//	scanf("%d", &n);
//
//	vector<int> arr;
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &temp);
//		arr.push_back(temp);
//	}
//
//	sort(arr.begin(), arr.end());
//
//	scanf("%d", &m);
//
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &temp);
//		if (binary_search(arr.begin(), arr.end(), temp))
//			printf("1\n");
//		else
//			printf("0\n");
//	}
//
//	return 0;
//}