//#include <iostream> // ���̼� ����
//#include <string>
//#include <iterator>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////�Է� �ް� stable_sort�� ���� �� ����
//
//bool compare(pair<int, string> a, pair<int, string> b)
//{
//	return a.first < b.first;
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	int age;
//	string name;
//	vector<pair<int, string>> info;
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> age >> name;
//		info.push_back({ age, name});
//	}
//
//	stable_sort(info.begin(), info.end(), compare);
//
//	vector<pair<int, string>>::iterator itr = info.begin();
//
//	for (itr = info.begin(); itr != info.end(); itr++)
//		cout << itr->first << " " << itr->second << "\n";
//
//	return 0;
//}