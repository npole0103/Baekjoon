//#include <iostream> //ȸ�ǽ�
//#include <algorithm>
//#include <stdlib.h>
//
//#define MAX 100001
//
//using namespace std;
//
///*
//�׸��� �˰��� ���?
//�� ȸ�� ���� �ð��� ���Ͽ� ������������ ����
//����ð��� ª�ٴ� ���� ���� ȸ�Ǹ� �� �߰��� �� �ִ� Ȯ���� ���ٴ� ����.
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
//	int temp = 0; //������ ����ð��� �������� ��� �ε����� ����Ű�� ����
//	int ans = 1; //0�� �ε����� ����ð��� ���� ª���Ƿ� ���������� �����ϹǷ� +1�� ����.
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
//		//idx 0���� end���� start�� ���ؼ� ���� �ð��� ����ð����� ũ�ų� ������ �� �κ����� �̵�
//		//https://www.acmicpc.net/board/view/58905 ���� �ð��� ���� �� ���� �ð��� ������ �������.
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