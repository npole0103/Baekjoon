//#include <iostream> //Ʈ���� ���� https://jaimemin.tistory.com/812
//#include <vector>
//#include <algorithm>
//#include <cstring>
//#define MAX 100001
//using namespace std;
//
///*
//1. ��� - �׷����� �����
//2. ��˻� -> ���� ������ �˻�
//3. �ִ� ���ϱ�
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
//	if (visited[node]) return; //�̹� �湮�� ����� ����
//
//	visited[node] = true; //�湮 ǥ��
//
//	//���� ������Ʈ
//	if (diameter < distance) //���� distance�� �� ũ�ٸ�
//	{
//		diameter = distance;
//		farthestNode = node;
//	}
//
//	for (int i = 0; i < graph[node].size(); i++) //node�� ����Ǿ��ִ� node��
//		dfs(graph[node][i].first, distance + graph[node][i].second); //�Ÿ� ���������� ���
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
//	dfs(1, 0); //��Ʈ���� ���� �� ���� ã��
//
//	//���� �ָ��ִ� ���̱� ������ ������ ���� �߿� �ϳ���. �����ذ� ����
//	//�ش� ������ ���ؼ� ���� ���ϱ�
//	memset(visited, false, sizeof(visited));
//	diameter = 0; //�̹� ������ ������ 0���� �ʱ�ȭ
//	dfs(farthestNode, 0); //���� �� �������� ���� ���ϱ�
//
//	cout << diameter << endl;
//
//	return 0;
//}