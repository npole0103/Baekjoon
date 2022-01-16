//#include <iostream> //좌표 압축
//#include <vector>
//#include <set>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int num;
//	int temp;
//
//	vector<int> v;
//
//	cin >> num;
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	//중복 제거
//	set<int> s(v.begin(), v.end());
//	vector<int> result(s.begin(), s.end());
//
//	for (int i = 0; i < num; i++)
//	{
//		auto iter = lower_bound(result.begin(), result.end(), v[i]);
//		cout << iter - result.begin() << " ";
//	}
//	cout << endl;
//
//	return 0;
//}