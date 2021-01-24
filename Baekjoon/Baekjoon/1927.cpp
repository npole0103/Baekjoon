////https://reakwon.tistory.com/42
//#include <iostream> //최소 힙
//using namespace std;
//
//#define MAX 100001
//
//class MinHeap {
//private:
//	int arr[MAX];
//	int size;
//public:
//	MinHeap()
//	{
//		this->size = 0;
//	}
//
//	void del(MinHeap* mh)
//	{
//		//사이즈가 0이라면 
//		if (mh->size == 0)
//		{
//			cout << "0" << "\n";
//			return;
//		}
//
//		int temp = mh->arr[1];
//		mh->arr[1] = mh->arr[size--]; //맨 끝에 있는 데이터를 루트 노드로 이동 & 사이즈도 1 줄임
//
//		int child = 0;
//		int parent = 1;
//
//		//루트 노드 자리 찾기 작업
//		while (1)
//		{
//			child = parent * 2; //자식 노드 인덱스 계산
//
//			//사이즈 범위 내에 자식에서 child + 1보다 child가 더 크다면
//			if (child + 1 < mh->size && mh->arr[child] > mh->arr[child + 1])
//				child++; //더 작은 값인 child + 1과 값을 교체하기 위해 child++;
//
//			//사이즈보다 더 큰 자식 인덱스이거나(맨 마지막 자식노드 층에 데이터가 존재), 자식값이 부모보다 더 크면
//			if (child > mh->size || mh->arr[child] > mh->arr[parent])
//				break;
//
//			//값 교체
//			int swap = mh->arr[parent];
//			mh->arr[parent] = mh->arr[child];
//			mh->arr[child] = swap;
//
//			parent = child; //현재 자식 노드가 부모노드가 되어 반복문 재실행
//		}
//
//		cout << temp << "\n";
//	}
//
//	void ins(MinHeap* mh, int data)
//	{
//		int tempSize = ++mh->size; //사이즈 1 증가
//
//		while (data < mh->arr[tempSize / 2] && tempSize != 1) //사이즈가 1 == 루트 노드에 도달하거나, 부모노드 데이터가 입력 데이터보다 크면 종료
//		{
//			mh->arr[tempSize] = mh->arr[tempSize / 2]; //기준 데이터보다 더 큰 데이터이기 때문에 자식 노드로 밀려남.
//			tempSize /= 2;
//		}
//
//		mh->arr[tempSize] = data; //데이터 삽입
//	}
//};
//
//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int cnt;
//	int cmd;
//	MinHeap mh;
//
//	cin >> cnt;
//
//	while (cnt--)
//	{
//		cin >> cmd;
//
//		if (cmd == 0)
//			mh.del(&mh);
//		else
//			mh.ins(&mh, cmd);
//	}
//}