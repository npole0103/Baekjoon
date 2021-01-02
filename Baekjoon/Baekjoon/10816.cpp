//#include <iostream> //숫자 카드 2
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
////시간 초과나면 printf / scanf 이용해볼 것.
////채점할 때는 scanf로 해야함 scanf_s하면 런타임 에러남
//
//int main()
//{
//	unordered_map<int, int> map;
//	unordered_map<int, int>::iterator itr;
//	int n;
//	int m;
//	int temp;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &temp);
//
//		itr = map.find(temp);
//		if (itr == map.end()) // 같은 게 없다면
//			map.insert(unordered_map<int, int>::value_type(temp, 1));
//		else
//			itr->second++;
//	}
//
//	scanf_s("%d", &m);
//
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d", &temp);
//
//		itr = map.find(temp);
//		if (itr == map.end()) //같은 게 없다면
//			printf("0 ");
//		else
//			printf("%d ", itr->second);
//	}
//
//	return 0;
//}