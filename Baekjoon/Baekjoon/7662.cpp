//#include <iostream> //���� �켱���� ť
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
//	//minArr���� ū ���� ��������ʿ� ���� ���̹Ƿ� ���������� �˻�
//	for (int i = size; size > 0; size--)
//		if (num == minArr[i])
//			minArr[i] = 0;
//}
//
//void DPQ::delMaxArrValue(int num)
//{
//	int i = 0;
//	//maxArr���� ���� ���� ��������ʿ� ���� ���̹Ƿ� ���������� �˻�
//	for (i = size; size > 0; size--)
//		if (num == maxArr[i])
//			maxArr[i] = 0;
//}
//
//void DPQ::insert(int num)
//{
//	//����
//	minArr[++size] = num;
//	maxArr[++size] = num;
//
//	int idx = size;
//
//	//������ ����
//	while (idx / 2 > 0) //MIN
//	{
//		if (minArr[idx] < minArr[idx / 2]) //���� ��尡 �θ��庸�� �۴ٸ�
//			swap(minArr[idx], minArr[idx / 2]);
//		else
//			break;
//		idx /= 2;
//	}
//
//	while (idx / 2 > 0) //MAX
//	{
//		if (minArr[idx] > minArr[idx / 2]) //���� ��尡 �θ��庸�� ũ�ٸ�
//			swap(minArr[idx], minArr[idx / 2]);
//		else
//			break;
//		idx /= 2;
//	}
//}
//
//void DPQ::deleteMax() //D 1�� �޾��� ��
//{
//	if (size == 0)
//		return;
//
//	//�ֻ��� ��� �� ����
//
//	//minArr���� �ش� �� ����
//
//	//size -= 1;
//
//	//�ڸ� ã��
//}
//
//void DPQ::deleteMin()
//{
//	if (size == 0)
//		return;
//
//	//�ֻ��� ��� �� ����
//	minArr[1] = minArr[size];
//
//	//maxArr���� �ش� �� ����
//
//	//size -= 1;
//
//	//�ڸ� ã��
//}
