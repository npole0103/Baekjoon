//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//bool compare(pair<int, int> a, pair<int, int> b)
//{
//	if (a.first == b.first)
//		return a.second > b.second;
//
//	return a.first < b.first;
//}
//int main()
//{
//	int comNum;
//	int clientNum;
//	int hours;
//
//	int comInfo, hourInfo;
//
//	vector<pair<int, int>> info;
//	vector<pair<int, int>> result;
//
//
//	cin >> comNum >> clientNum >> hours;
//
//	//�Է� ����
//	for (int i = 0; i < clientNum; i++)
//	{
//		cin >> comInfo >> hourInfo;
//		info.push_back({comInfo, hourInfo});
//	}
//
//	//result
//	for (int i = 0; i < comNum; i++)
//		result.push_back({i+1, 0});
//
//	sort(info.begin(), info.end(), compare);
//
//	for (int i = 0; i < comNum; i++)
//	{
//		for (int j = 0; j < clientNum; j++)
//		{
//			if(info[j].first == i + 1) //��ǻ�� �ѹ��� ��ġ�Ѵٸ�
//			{
//				if (hours >= info[j].second) //���� ���� �ð��� ���� �ʾҴٸ�
//					result[i].second += info[j].second * 1000; //����� ���� �ð���ŭ �����ֱ�
//			}
//		}
//	}
//
//	for (int i = 0; i < comNum; i++)
//	{
//		cout << result[i].first << " " << result[i].second << endl;
//	}
//
//	return 0;
//}