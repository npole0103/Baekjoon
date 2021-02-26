////https://reakwon.tistory.com/42
//#include <iostream> //�ּ� ��
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
//		//����� 0�̶�� 
//		if (mh->size == 0)
//		{
//			cout << "0" << "\n";
//			return;
//		}
//
//		int temp = mh->arr[1];
//		mh->arr[1] = mh->arr[size--]; //�� ���� �ִ� �����͸� ��Ʈ ���� �̵� & ����� 1 ����
//
//		int child = 0;
//		int parent = 1;
//
//		//��Ʈ ��� �ڸ� ã�� �۾�
//		while (1)
//		{
//			child = parent * 2; //�ڽ� ��� �ε��� ���
//
//			//������ ���� ���� �ڽĿ��� child + 1���� child�� �� ũ�ٸ�
//			if (child + 1 < mh->size && mh->arr[child] > mh->arr[child + 1])
//				child++; //�� ���� ���� child + 1�� ���� ��ü�ϱ� ���� child++;
//
//			//������� �� ū �ڽ� �ε����̰ų�(�� ������ �ڽĳ�� ���� �����Ͱ� ����), �ڽİ��� �θ𺸴� �� ũ��
//			if (child > mh->size || mh->arr[child] > mh->arr[parent])
//				break;
//
//			//�� ��ü
//			int swap = mh->arr[parent];
//			mh->arr[parent] = mh->arr[child];
//			mh->arr[child] = swap;
//
//			parent = child; //���� �ڽ� ��尡 �θ��尡 �Ǿ� �ݺ��� �����
//		}
//
//		cout << temp << "\n";
//	}
//
//	void ins(MinHeap* mh, int data)
//	{
//		int tempSize = ++mh->size; //������ 1 ����
//
//		while (data < mh->arr[tempSize / 2] && tempSize != 1) //����� 1 == ��Ʈ ��忡 �����ϰų�, �θ��� �����Ͱ� �Է� �����ͺ��� ũ�� ����
//		{
//			mh->arr[tempSize] = mh->arr[tempSize / 2]; //���� �����ͺ��� �� ū �������̱� ������ �ڽ� ���� �з���.
//			tempSize /= 2;
//		}
//
//		mh->arr[tempSize] = data; //������ ����
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