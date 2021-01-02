//#include <iostream> //ACM хёез
//using namespace std;
//
//// 6 12 12 -> 602
////3 70 144 -> 348
//
//int main()
//{
//	int tc;
//	cin >> tc;
//	
//	int h, w, n;
//	int floor, roomNum;
//
//	while (tc--)
//	{
//		cin >> h >> w >> n;
//
//		floor = n % h > 0 ? n % h : h;
//		roomNum = n % h == 0 ? (n / h) :(n / h) + 1;
//
//		if (roomNum > 9)
//			cout << floor << roomNum<< "\n";
//		else
//			cout << floor <<"0"<<roomNum << "\n";
//	}
//
//	return 0;
//}