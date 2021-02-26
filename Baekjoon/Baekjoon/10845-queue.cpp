//#include <iostream> //queue
//#include <string>
//using namespace std;
//
//class queueArr
//{
//private:
//	int arr[10001] = { 0, };
//	int size;
//	int front;
//public:
//	queueArr()
//	{
//		size = 0;
//		front = 0;
//	}
//
//	void queuePush(int temp)
//	{
//		arr[size++] = temp;
//	}
//
//	void queuePop()
//	{
//		if (queueSize() == 0)
//			cout << "-1" << endl;
//		else
//			cout << arr[front++] << endl;
//	}
//
//	int queueSize()
//	{
//		return size - front;
//	}
//
//	void queueEmpty()
//	{
//		if (queueSize() == 0)
//			cout << "1" << endl;
//		else
//			cout << "0" << endl;
//	}
//
//	void queueFront()
//	{
//		if (queueSize() == 0)
//			cout << "-1" << endl;
//		else
//			cout << arr[front] << endl;
//	}
//
//	void queueBack()
//	{
//		if (queueSize() == 0)
//			cout << "-1" << endl;
//		else
//			cout << arr[size - 1] << endl;
//	}
//
//};
//
//int main()
//{
//	int num;
//	int temp;
//	string com;
//
//	queueArr queue;
//
//	cin >> num;
//
//	while (num--)
//	{
//		cin >> com;
//		if (com == "push")
//		{
//			cin >> temp;
//			queue.queuePush(temp);
//		}
//		else if (com == "pop")
//			queue.queuePop();
//		else if (com == "size")
//			cout << queue.queueSize() << endl;
//		else if (com == "empty")
//			queue.queueEmpty();
//		else if (com == "front")
//			queue.queueFront();
//		else if (com == "back")
//			queue.queueBack();
//	}
//
//	return 0;
//}