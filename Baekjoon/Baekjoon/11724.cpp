//#include <iostream> //���� ����� ����
//#include <vector>
//using namespace std;
//
//bool check[1001];
//vector<pair<int, int>> g;
//
//int dfs(int i)
//{
//	//�湮 ǥ��
//	check[i] = true;
//
//	//���� ���
//	for (int j = 0; j < g.size(); j++)
//	{
//		if (g[j].first == i) // i�� ����Ǿ� �ִ� �� ã�� ����
//		{
//			int next = g[j].second; //i�� ����Ǿ� �ִ� ��ǥ
//			if (check[next] == false)
//				dfs(next);
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int n, m;
//	int x, y;
//	int result = 0;
//
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x >> y;
//		g.push_back({ y, x });
//		g.push_back({ x, y });
//	}
//
//	for (int i = 1; i <= n; i++)
//		if (check[i] == false)
//			result += dfs(i);
//
//	cout << result << endl;
//
//	return 0;
//}