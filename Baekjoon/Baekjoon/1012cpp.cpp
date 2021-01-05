//#include <iostream> //유기농 배추
//#include <vector>
//using namespace std;
//
//int n, m, k; // n 세로, m 가로
//
//int dfsCabb(vector<pair<int, bool>>* cabb, int i, int j)
//{
//	//vector fisrt 배추의 유무 / second 방문 여부
//	//상 하 좌 우 검사
//	//아닐 시 0을 반환하도록 ?
//
//	//만약 방문한 적이 있는 좌표라면 이미 인접좌표에서 계산된 것이므로
//	if (cabb[i][j].second == 1)
//		return 0;
//
//	cabb[i][j].second = true; //방문 표시
//
//	//배추가 심어져 있지 않다면
//	if (cabb[i][j].first == 0)
//		return 0;
//
//	if (i != 0) //상
//		dfsCabb(cabb, i - 1, j);
//	if (i != n - 1) //하
//		dfsCabb(cabb, i + 1, j);
//	if (j != 0) //좌
//		dfsCabb(cabb, i, j - 1);
//	if (j != m - 1)
//		dfsCabb(cabb, i, j + 1);
//
//	//여기까지 모두 통과했다면 검사를 완료한 것
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
//				//현재 좌표가 배추가 있으면서 서치된 적 없어야 함.
//				if (cabb[i][j].first == 1 && cabb[i][j].second == 0)
//					result += dfsCabb(cabb, i, j);
//
//		//// DFS 재귀로 접근
//		////전체 출력
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