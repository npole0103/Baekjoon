//#include <iostream> //ÃÖ´ëÈü
//#include <set>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	multiset<int> heap;
//
//	int t;
//	cin >> t;
//
//	int num;
//
//	while (t-- > 0)
//	{
//		cin >> num;
//
//		if (num != 0)
//		{
//			heap.insert(num);
//		}
//		else if (num == 0)
//		{
//			if (!heap.empty())
//			{
//				cout << *(--heap.end()) << "\n";
//				heap.erase(--heap.end());
//			}
//			else
//				cout << 0 << "\n";
//		}
//	}
//
//	return 0;
//}