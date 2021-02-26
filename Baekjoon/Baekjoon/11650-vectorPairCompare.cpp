//#include <iostream> // 좌표 정렬하기
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compare(pair<int, int> a, pair<int, int> b)
//{
//	if (a.first == b.first)
//		return a.second < b.second;
//
//	return a.first < b.first;
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	int xpos, ypos;
//	vector<pair<int, int>> pos;
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> xpos >> ypos;
//		pos.push_back({ xpos, ypos });
//	}
//
//	stable_sort(pos.begin(), pos.end(), compare);
//
//	for (int i = 0; i < num; i++)
//		cout << pos[i].first << " " << pos[i].second << "\n";
//
//	return 0;
//}