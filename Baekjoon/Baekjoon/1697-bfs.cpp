//#include <iostream> //숨바꼭질
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	//가중치가 1초로 일정함. BFS 접근 가능
//	//인접한 노드(길)가 고정적으로 3개임 [ +1 -1 *2 ]
//	//방문을 했다는 것은 이미 이전에 계산이 되었다는 것이고, 이전에 계산이 되었다는 것은 지금보다 짧은 시간을 보장함.
//	//check arr에 가중치를 더해나가며 최솟값을 구하면 됨.
//
//	int check[100001] = { 0, };
//	queue<int> q;
//	int temp = 0;
//	int result = 0;
//
//	q.push(n);
//	check[n] = 1;
//
//	while (!q.empty())
//	{
//		temp = q.front(); //temp를 통해 다음 노드 접근함
//		q.pop(); //q에서 빼줌.
//
//		//만약 동생 좌표인 k와 현재 좌표 값이 일치한다면
//		if (temp == k)
//		{
//			result = check[temp] - 1; //k까지 거리에 대한 가중치를 result에 저장
//			// -1을 해주는 이유 : 처음 check[n] = 1로 시작을 하는데 1초를 먹고 시작을 함.
//			// 1초를 먼저 올려준 이유는 0초이면 if 문에서 !check[ ] 조건에 걸러지기 때문에 시작값에 1초를 더 해줌.
//			// 이후 처음 더해줬던 1초를 빼주는 것임
//			break;
//		}
//
//		// 현재에서 x - 1 방문하지 않았을 경우
//		if (0 <= temp - 1 && !check[temp - 1])
//		{
//			q.push(temp - 1);
//			check[temp - 1] = check[temp] + 1;
//		}
//		// 현재에서 x + 1 방문하지 않았을 경우
//		if (temp + 1 <= 100000 && !check[temp + 1])
//		{
//			q.push(temp + 1);
//			check[temp + 1] = check[temp] + 1;
//		}
//		// 현재에서 2x 지점 방문하지 않았을 경우
//		if (2 * temp <= 100000 && !check[2 * temp])
//		{
//			q.push(2 * temp);
//			check[2 * temp] = check[temp] + 1;
//		}
//	}
//
//	cout << result << endl;
//
//	return 0;
//}