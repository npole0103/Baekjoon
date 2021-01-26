//#include <iostream> //회의실
//#include <algorithm>
//#include <stdlib.h>
//
//#define MAX 100001
//
//using namespace std;
//
///*
//그리디 알고리즘 사용?
//각 회의 종료 시간을 비교하여 오름차순으로 정렬
//종료시간이 짧다는 것은 다음 회의를 더 추가할 수 있는 확률이 높다는 것임.
//*/
//
//typedef struct {
//	int start;
//	int end;
//}Time;
//
//
//int compare(const void* a, const void* b)
//{
//	Time* first = (Time*)a;
//	Time* second = (Time*)b;
//
//	if (first->end == second->end)
//		return first->start > second->start;
//	else
//		return first->end > second->end;
//}
//
//int main()
//{
//	Time t[MAX];
//	int temp = 0; //임의의 종료시간을 기준으로 잡고 인덱스를 가르키는 변수
//	int ans = 1; //0번 인덱스는 종료시간이 가장 짧으므로 시작점으로 간주하므로 +1을 해줌.
//
//	int cnt;
//	cin >> cnt;
//
//	for(int i = 0; i < cnt ; i++)
//		cin >> t[i].start >> t[i].end;
//
//	qsort(t, cnt, sizeof(Time), compare);
//
//	//for (int i = 0; i < cnt; i++)
//	//	cout << t[i].start << " " << t[i].end << endl;
//
//	for (int i = 1; i < cnt; i++)
//	{
//		//idx 0번의 end부터 start랑 비교해서 시작 시간이 종료시간보다 크거나 같으면 그 부분으로 이동
//		//https://www.acmicpc.net/board/view/58905 종료 시간이 같을 때 시작 시간도 정렬을 해줘야함.
//
//		if (t[i].start >= t[temp].end)
//		{
//			//cout << t[i].start << " " << t[i].end << endl;
//			ans++;
//			temp = i;
//		}
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}