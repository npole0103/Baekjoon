//#include <iostream> //���� �켱���� ť
//#include <set>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	int cnt;
//
//	char cmd; int num;
//
//	while (t-- > 0)
//	{
//		cin >> cnt;
//
//		multiset<int> dpq;
//		
//		for (int i = 0; i < cnt; i++)
//		{
//			cin >> cmd >> num;
//
//			if (cmd == 'I')
//				dpq.insert(num);
//			else if (cmd == 'D') //default �������� �����̹Ƿ� ���� ���� begin
//				if(!dpq.empty())
//					num == 1 ? dpq.erase(--dpq.end()) : dpq.erase(dpq.begin());
//		}
//
//		if (dpq.empty())
//			cout << "EMPTY\n";
//		else
//			cout << *(--dpq.end()) << " " << *(dpq.begin()) << "\n";
//	}
//
//	return 0;
//}