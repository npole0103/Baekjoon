//#include <iostream> //���� ī�� 2
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
////�ð� �ʰ����� printf / scanf �̿��غ� ��.
////ä���� ���� scanf�� �ؾ��� scanf_s�ϸ� ��Ÿ�� ������
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
//		if (itr == map.end()) // ���� �� ���ٸ�
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
//		if (itr == map.end()) //���� �� ���ٸ�
//			printf("0 ");
//		else
//			printf("%d ", itr->second);
//	}
//
//	return 0;
//}