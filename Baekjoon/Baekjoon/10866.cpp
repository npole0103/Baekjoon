//#include <iostream> //µ¦
//#include <string>
//#include <deque>
//using namespace std;
//
//int main()
//{
//	int num;
//	int temp;
//	string cmd;
//	deque<int> dq;
//
//	cin >> num;
//
//	while (num--)
//	{
//		cin >> cmd;
//		if (cmd == "push_front")
//		{
//			cin >> temp;
//			dq.push_front(temp);
//		}
//		else if (cmd == "push_back")
//		{
//			cin >> temp;
//			dq.push_back(temp);
//		}
//		else if (cmd == "pop_front")
//		{
//			if (dq.size() == 0)
//				cout << "-1" << endl;
//			else
//			{
//				cout << dq.front() << "\n";
//				dq.pop_front();
//			}
//		}
//		else if (cmd == "pop_back")
//		{
//			if (dq.size() == 0)
//				cout << "-1" << "\n";
//			else
//			{
//				cout << dq.back() << "\n";
//				dq.pop_back();
//			}
//		}
//		else if (cmd == "size")
//			cout << dq.size() << "\n";
//		else if (cmd == "empty")
//		{
//			if (dq.size() == 0)
//				cout << "1" << "\n";
//			else
//				cout << "0" << "\n";
//		}
//		else if (cmd == "front")
//		{
//			if (dq.size() == 0)
//				cout << "-1" << "\n";
//			else
//				cout << dq.front() << "\n";
//		}
//		else if (cmd == "back")
//		{
//			if (dq.size() == 0)
//				cout << "-1" << "\n";
//			else
//				cout << dq.back() << "\n";
//		}
//	}
//
//	return 0;
//}