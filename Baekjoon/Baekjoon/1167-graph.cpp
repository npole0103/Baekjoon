//#include <iostream> // https://www.acmicpc.net/board/view/41511 나랑 논리가 비슷함
//#include <vector>
//using namespace std;
//
///*
//1. 행렬 - 그래프로 만들기
//2. 행검사 -> 열을 행으로 검사
//3. 최댓값 구하기
//*/
//
//int vertex = 0;
//vector<int>* v;
//int ans = 0;
//int result = 0;
//int* visited;
//
//int dfs(int num)
//{
//	int maxDist = 0;
//	visited[num] = 1;
//
//	for (int i = 1; i <= vertex; i++)
//	{
//		int dist = v[num][i];
//
//		if (visited[i] == 1)
//			continue;
//
//		if (v[num][i] != 0)
//		{
//			visited[i] = 1;
//			dist += dfs(i);
//			
//			if (dist > maxDist)
//				maxDist = dist;
//
//			visited[i] = 0;
//		}
//	}
//
//	return maxDist;
//}
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int nodeNum = 0;
//	int distance = 0;
//
//	cin >> vertex;
//
//	v = new vector<int>[vertex + 1];
//	visited = new int[vertex + 1];
//
//	for (int i = 0; i < vertex + 1; i++)
//		for (int j = 0; j < vertex + 1; j++)
//			v[i].push_back(0);
//
//	for (int i = 0; i < vertex + 1; i++)
//		visited[i] = 0;
//
//	for(int i = 1 ; i <= vertex ; i++)
//	{
//		cin >> i;
//		while (1)
//		{
//			cin >> nodeNum;
//			if (nodeNum == -1) break;
//			cin >> distance;
//
//			v[i][nodeNum] = distance;
//		}
//	}
//
//	
//	for (int i = 1; i <= vertex; i++)
//	{
//		for (int j = 1; j <= vertex; j++)
//			cout << v[i][j] << " ";
//		cout  << "---------------------" << endl;
//	}
//	
//
//	for (int i = 1; i <= vertex; i++)
//	{
//		ans = dfs(i);
//		if (ans >= result)
//			result = ans;
//	}
//
//	cout << result << endl;
//
//	return 0;
//}