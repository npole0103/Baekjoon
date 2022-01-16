//#include <iostream> //트리의 지름 https://jaimemin.tistory.com/812
//#include <vector>
//#include <algorithm>
//#include <cstring>
//#define MAX 100001
//using namespace std;
//
///*
//1. 행렬 - 그래프로 만들기
//2. 행검사 -> 열을 행으로 검사
//3. 최댓값 구하기
//*/
//
//int vertex = 0;
//vector<pair<int, int>> graph[MAX];
//bool visited[MAX];
//
//int diameter = 0;
//int farthestNode = 0;
//
//void dfs(int node, int distance)
//{
//	if (visited[node]) return; //이미 방문한 노드라면 리턴
//
//	visited[node] = true; //방문 표시
//
//	//지름 업데이트
//	if (diameter < distance) //현재 distance가 더 크다면
//	{
//		diameter = distance;
//		farthestNode = node;
//	}
//
//	for (int i = 0; i < graph[node].size(); i++) //node와 연결되어있는 node들
//		dfs(graph[node][i].first, distance + graph[node][i].second); //거리 누적값으로 재귀
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int nextNode = 0;
//	int distance = 0;
//
//	cin >> vertex;
//
//	for(int i = 0 ; i < vertex ; i++)
//	{
//		int currentNode;
//		cin >> currentNode;
//
//		while (1)
//		{
//			cin >> nextNode;
//			if (nextNode == -1) break;
//			cin >> distance;
//
//			graph[currentNode].push_back({ nextNode, distance });
//		}
//	}
//
//	memset(visited, false, sizeof(visited));
//	dfs(1, 0); //루트에서 가장 먼 정점 찾기
//
//	//가장 멀리있는 점이기 때문에 지름의 끝점 중에 하나임. 최적해가 보장
//	//해당 끝점을 통해서 지름 구하기
//	memset(visited, false, sizeof(visited));
//	diameter = 0; //이미 구해진 지름값 0으로 초기화
//	dfs(farthestNode, 0); //가장 먼 정점으로 지름 구하기
//
//	cout << diameter << endl;
//
//	return 0;
//}