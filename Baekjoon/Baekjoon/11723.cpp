//#include <iostream> //С§Че
//#include <algorithm>
//#include <set>
//using namespace std;
//
//set<int> allSet = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	int t;
//	int num;
//
//	string input;
//	set<int> s;
//	set<int>::iterator iter;
//
//	cin >> t;
//
//	while (t-- > 0)
//	{
//		cin >> input;
//
//		if (input == "add")
//		{
//			cin >> num;
//			s.insert(num);
//		}
//		else if (input == "remove")
//		{
//			cin >> num;
//			if (!s.empty())
//				s.erase(num);
//		}
//		else if (input == "check")
//		{
//			cin >> num;
//			iter = s.find(num);
//			if (iter != s.end())
//				cout << 1 << "\n";
//			else
//				cout << 0 << "\n";
//		}
//		else if (input == "toggle")
//		{
//			cin >> num;
//			iter = s.find(num);
//			if (iter != s.end())
//				s.erase(num);
//			else
//				s.insert(num);
//		}
//		else if (input == "all")
//		{
//			s = allSet;
//		}
//		else if (input == "empty")
//		{
//			s.clear();
//		}
//	}
//}