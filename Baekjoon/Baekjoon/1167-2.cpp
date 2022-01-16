//#include <iostream> //트리의 지름 https://www.acmicpc.net/board/view/41511
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
//	visited[num] = true; //방문 표시
//
//	for (int i = 0; i < graph[num].size(); i++) //연결노드 순환
//	{
//		int node = graph[num][i].first; //연결노드
//		int dist = graph[num][i].second; //연결노드 dist
//
//		if (visited[node]) //만약 방문한 노드라면 continue
//			continue;
//
//		visited[node] = true; //연결노드 방문 표시
//		dist = dist + dfs(node); //dfs
//
//		if (dist > maxDist) //최댓값
//			maxDist = dist;
//
//		visited[node] = false; //연결노드 방문 표시 해제
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