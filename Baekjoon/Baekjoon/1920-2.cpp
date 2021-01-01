//#include <iostream> //수 찾기
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////binary_search 사용 https://en.cppreference.com/w/cpp/algorithm/binary_search
////시간 초과나면 printf / scanf 이용해볼 것.
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