//#include <iostream> // 단어 정렬
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compareLen(string a, string b)
//{
//	return a.length() < b.length();
//}
//
//bool compareFlow(string a, string b)
//{
//	return a < b;
//}
//
//bool compare(string a, string b)
//{
//	if (a.length() == b.length())
//		return a < b;
//
//	return a.length() < b.length();
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	string temp;
//	vector<string> str;
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> temp;
//		if (find(str.begin(), str.end(), temp) == str.end()) //일치하는 원소가 없다면
//			str.push_back(temp);
//	}
//
//	//stable_sort(str.begin(), str.end(), compareLen);
//	//stable_sort(str.begin(), str.end(), compareFlow);
//	stable_sort(str.begin(), str.end(), compare);
//
//	for (int i = 0; i < str.size(); i++)
//		cout << str[i] << "\n";
//
//	return 0;
//}