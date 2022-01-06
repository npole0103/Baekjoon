//#include <iostream> //이중 우선순위 큐
//using namespace std;
//#define SIZE 1000001
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//class DPQ {
//private:
//	int size = 0;
//	int* minArr = new int[SIZE];
//	int* maxArr = new int[SIZE];
//	void delMinArrValue(int num);
//	void delMaxArrValue(int num);
//
//public:
//	~DPQ()
//	{
//		delete[] minArr;
//		delete[] maxArr;
//	}
//	void insert(int num);
//	void deleteMax();
//	void deleteMin();
//};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	DPQ dpq;
//
//	int t;
//	cin >> t;
//
//	int cnt;
//
//	char cmd; int num;
//
//	while (t-- > 0)
//	{
//		cin >> cnt;
//		
//		for (int i = 0; i < cnt; i++)
//		{
//			cin >> cmd >> num;
//
//			if (cmd == 'I')
//				dpq.insert(num);
//			else if (cmd == 'D')
//				num == 1 ? dpq.deleteMax() : dpq.deleteMin();
//		}
//	}
//
//	return 0;
//}
//
//void DPQ::delMinArrValue(int num)
//{
//	//minArr에서 큰 값은 리프노드쪽에 있을 것이므로 마지막부터 검사
//	for (int i = size; size > 0; size--)
//		if (num == minArr[i])
//			minArr[i] = 0;
//}
//
//void DPQ::delMaxArrValue(int num)
//{
//	int i = 0;
//	//maxArr에서 작은 값은 리프노드쪽에 있을 것이므로 마지막부터 검사
//	for (i = size; size > 0; size--)
//		if (num == maxArr[i])
//			maxArr[i] = 0;
//}
//
//void DPQ::insert(int num)
//{
//	//삽입
//	minArr[++size] = num;
//	maxArr[++size] = num;
//
//	int idx = size;
//
//	//데이터 정렬
//	while (idx / 2 > 0) //MIN
//	{
//		if (minArr[idx] < minArr[idx / 2]) //현재 노드가 부모노드보다 작다면
//			swap(minArr[idx], minArr[idx / 2]);
//		else
//			break;
//		idx /= 2;
//	}
//
//	while (idx / 2 > 0) //MAX
//	{
//		if (minArr[idx] > minArr[idx / 2]) //현재 노드가 부모노드보다 크다면
//			swap(minArr[idx], minArr[idx / 2]);
//		else
//			break;
//		idx /= 2;
//	}
//}
//
//void DPQ::deleteMax() //D 1을 받았을 때
//{
//	if (size == 0)
//		return;
//
//	//최상위 노드 값 제거
//
//	//minArr에서 해당 값 삭제
//
//	//size -= 1;
//
//	//자리 찾기
//}
//
//void DPQ::deleteMin()
//{
//	if (size == 0)
//		return;
//
//	//최상위 노드 값 제거
//	minArr[1] = minArr[size];
//
//	//maxArr에서 해당 값 삭제
//
//	//size -= 1;
//
//	//자리 찾기
//}
