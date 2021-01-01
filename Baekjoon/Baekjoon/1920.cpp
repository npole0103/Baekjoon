//#include <iostream> // 수 찾기 - 시간초과
//#include <unordered_map>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int m;
//	int temp;
//	cin >> n;
//	//first : Value / second : exist
//	unordered_map<int, int> arr;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		arr.insert(unordered_map<int, int>::value_type(temp, 1));
//	}
//
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp;
//		unordered_map<int, int>::iterator fIter = arr.find(temp);
//		
//		if (fIter != arr.end()) // 같은 숫자 발견했다면
//			cout << "1" << "\n";
//		else
//			cout << "0" << "\n";
//	}
//
//	return 0;
//}