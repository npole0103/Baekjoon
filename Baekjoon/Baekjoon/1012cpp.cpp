//#include <iostream> //����� ����
//#include <vector>
//using namespace std;
//
//int n, m, k; // n ����, m ����
//
//int dfsCabb(vector<pair<int, bool>>* cabb, int i, int j)
//{
//	//vector fisrt ������ ���� / second �湮 ����
//	//�� �� �� �� �˻�
//	//�ƴ� �� 0�� ��ȯ�ϵ��� ?
//
//	//���� �湮�� ���� �ִ� ��ǥ��� �̹� ������ǥ���� ���� ���̹Ƿ�
//	if (cabb[i][j].second == 1)
//		return 0;
//
//	cabb[i][j].second = true; //�湮 ǥ��
//
//	//���߰� �ɾ��� ���� �ʴٸ�
//	if (cabb[i][j].first == 0)
//		return 0;
//
//	if (i != 0) //��
//		dfsCabb(cabb, i - 1, j);
//	if (i != n - 1) //��
//		dfsCabb(cabb, i + 1, j);
//	if (j != 0) //��
//		dfsCabb(cabb, i, j - 1);
//	if (j != m - 1)
//		dfsCabb(cabb, i, j + 1);
//
//	//������� ��� ����ߴٸ� �˻縦 �Ϸ��� ��
//	return 1;
//}
//
//int main()
//{
//	int tc;
//	int x, y;
//	int result;
//
//	cin >> tc;
//
//	while (tc--)
//	{
//		result = 0;
//		cin >> m >> n >> k;
//		vector<pair<int, bool>>* cabb = new vector<pair<int, bool>>[n];
//		
//		for (int i = 0; i < n; i++)
//			for(int j = 0; j < m ; j++)
//				cabb[i].push_back({0, 0});
//
//		for (int i = 0; i < k; i++)
//		{
//			cin >> x >> y;
//			cabb[y][x].first = 1;
//		}
//
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				//���� ��ǥ�� ���߰� �����鼭 ��ġ�� �� ����� ��.
//				if (cabb[i][j].first == 1 && cabb[i][j].second == 0)
//					result += dfsCabb(cabb, i, j);
//
//		//// DFS ��ͷ� ����
//		////��ü ���
//		//for (int i = 0; i < n; i++)
//		//{
//		//	for (int j = 0; j < m; j++)
//		//		cout << cabb[i][j].first << " ";
//		//	cout << endl;
//		//}
//
//		cout << result << endl;
//	}
//
//	return 0;
//}