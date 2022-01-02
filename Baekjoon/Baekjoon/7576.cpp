//#include <iostream> //토마토
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
///*
//
//최대 1,000 X 1,000 칸의 공간이니 그런 방법으로는 제한시간 2초 내에는 처리가 안되었습니다.​
//이 경우 BFS 탐색 방식이 필요한데요.
//
//BFS 탐색은 특정 지점에서 시작하여 접근 가능한 모든 지점을 후보로 등록하고,
//다시 접근하여 이후로 접근 가능한 지점을 2차 후보로 등록, 이런 방식으로 무한 반복하다가 더 이상 접근할 곳이 없으면 끝내는 방법입니다.
//
//그러면 필요한 부분만 접근하기 때문에 매우 속도가 빠릅니다.
//*/
//
//int n, m;
//int result = 0;
//
//vector<int>* arr;
//queue<pair<int, int>> q;
//
//void bfsTomato()
//{
//	while (!q.empty())
//	{
//		//큐에 저장된 좌표 꺼내기
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		//좌표에 따라서 처리
//		if (x != 0 && arr[x - 1][y]== 0) //상
//		{
//			arr[x - 1][y] = arr[x][y] + 1; //안 익은 것 익게 만듦.
//			q.push({ x - 1, y }); //좌표 저장
//		}
//		if (x != n - 1 && arr[x + 1][y] == 0) //하
//		{
//			arr[x + 1][y] = arr[x][y] + 1; //안 익은 것 익게 만듦.
//			q.push({ x + 1, y }); //좌표 저장
//		}
//		if (y != 0 && arr[x][y - 1] == 0) //좌
//		{
//			arr[x][y - 1] = arr[x][y] + 1; //안 익은 것 익게 만듦.
//			q.push({ x, y - 1 }); //좌표 저장
//		}
//		if (y != m - 1 && arr[x][y + 1] == 0)
//		{
//			arr[x][y + 1] = arr[x][y] + 1; //안 익은 것 익게 만듦.
//			q.push({ x, y + 1}); //좌표 저장
//		}
//	}
//}
//
//int main()
//{
//	int cnt = 0;
//	int temp;
//
//	cin >> m >> n;
//
//	arr = new vector<int>[n];
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//		{
//			cin >> temp;
//			arr[i].push_back(temp);
//
//			if (temp == 1) //익은 토마토라면 좌표 저장
//				q.push({i, j});
//		}
//	
//	bfsTomato();
//
//	for (int i = 0; i < n; i++) 
//	{
//		for (int j = 0; j < m; j++) 
//		{
//			//익지 못한 토마토가 하나라도 있다면
//			if (arr[i][j] == 0) {
//				cout << "-1" << endl;
//				return 0;
//			}
//
//			if (cnt < arr[i][j]) //날짜 업데이트
//				cnt = arr[i][j];
//		}
//	}
//
//	cout << cnt - 1 << endl;
//	
//	return 0;
//}