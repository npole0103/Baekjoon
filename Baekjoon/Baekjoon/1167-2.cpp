//#include <iostream> //Ʈ���� ���� https://www.acmicpc.net/board/view/41511
//#include <vector>
//using namespace std;
//
//vector<vector<pair<int, int>>> graph;
//vector<bool> visited;
//int ans = 0;
//
//int dfs(int num)
//{
//	int maxDist = 0;
//	visited[num] = true; //�湮 ǥ��
//
//	for (int i = 0; i < graph[num].size(); i++) //������ ��ȯ
//	{
//		int node = graph[num][i].first; //������
//		int dist = graph[num][i].second; //������ dist
//
//		if (visited[node]) //���� �湮�� ����� continue
//			continue;
//
//		visited[node] = true; //������ �湮 ǥ��
//		dist = dist + dfs(node); //dfs
//
//		if (dist > maxDist) //�ִ�
//			maxDist = dist;
//
//		visited[node] = false; //������ �湮 ǥ�� ����
//	}
//	return maxDist;
//}
//
//int main()
//{
//	int v;
//	cin >> v;
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	graph.assign(v, vector<pair<int, int>>());
//	for (int i = 0; i < v; i++)
//	{
//		int vertex, node, dist;
//		cin >> vertex;
//		while(true)
//		{
//			cin >> node;
//			if (node == -1)
//				break;
//			cin >> dist;
//			graph[vertex - 1].push_back({ node - 1, dist });
//		}
//	}
//	
//	for (int i = 0; i < v; i++)
//	{    
//	    visited.assign(v, false);
//		int	dist = dfs(i);
//		if (dist > ans)
//			ans = dist;
//	}
//	cout << ans << endl;
//
//	return 0;
//}