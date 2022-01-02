//#include <iostream> //바이러스 
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////DFS || BFS
//// 1과의 인접 노드들의 갯수를 더해서 출력한다
//
//int cnt = 0;
//
////parameter : 2D Vector array, bool array, start Num
//void getVirus(vector<int> com[], bool check[], int start)
//{
//	check[start] = true;
//	cnt++;
//
//	for (int i = 0; i < com[start].size(); i++)
//	{
//		int next = com[start][i]; //인접 노드
//		if (check[next] == false) //방문하지 않았다면
//			getVirus(com, check, next);
//	}
//}
//
//int main()
//{
//	int comNum;
//	int tc;
//	int first, second;
//
//	cin >> comNum;
//	cin >> tc;
//
//	vector<int>* com = new vector<int>[comNum + 1];
//	bool* check = new bool[comNum + 1];
//	fill_n(check, comNum + 1, false);
//
//	for (int i = 0; i < tc; i++)
//	{
//		cin >> first >> second;
//		com[first].push_back(second);
//		com[second].push_back(first);
//	}
//
//	getVirus(com, check, 1);
//
//	cout << cnt - 1 << endl; // cnt - 1 해주는 이유 : 시작할 떄 1번 컴퓨터 노드를 더했으므로
//}
