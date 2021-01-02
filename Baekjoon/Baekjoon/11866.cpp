//#include <iostream> //요세푸스 문제 0
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	int target;
//	queue<int> q1;
//
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++)
//		q1.push(i);
//
//	if (n == 1 && k == 1)
//	{
//		cout << "<1>" << endl;
//		return 0;
//	}
//
//	cout << "<";
//	while (!q1.empty())
//	{
//		for (int j = 0; j < k - 1; j++) //3칸 만큼 땡겨 주는 작업.
//		{
//			q1.push(q1.front());
//			q1.pop();
//		}
//
//		cout << q1.front() << ", ";
//		q1.pop();
//
//		if (q1.size() == 1) //큐에 원소가 하나 남았다면
//		{
//			cout << q1.front();
//			q1.pop();
//		}
//	}
//	cout << ">";
//
//	return 0;
//}