//#include <iostream> //Ω∫≈√
//#include <string>
//using namespace std;
//
//class stackArr
//{
//private:
//	int size = 0;
//	int arr[10001] = { 0, };
//public:
//	stackArr()
//	{
//		this->size = 0;
//	}
//
//	void stackPush(int temp)
//	{
//		arr[size++] = temp;
//	}
//
//	void stackPop()
//	{
//		if (this->size == 0)
//			cout << "-1" << endl;
//		else
//		{
//			cout << arr[--size] << "\n";
//			arr[size] = NULL;
//		}
//	}
//
//	void stackSize()
//	{
//		cout << this->size << endl;
//	}
//
//	void stackEmpty()
//	{
//		if (this->size == 0)
//			cout << 1 << endl;
//		else
//			cout << 0 << endl;
//	}
//
//	void stackTop()
//	{
//		if (this->size == 0)
//			cout << -1 << endl;
//		else
//			cout << arr[size - 1] << endl;
//	}
//};
//
//int main()
//{
//	int num;
//	int temp;
//	string com;
//
//	stackArr stack;
//
//	cin >> num;
//
//	while (num--)
//	{
//		cin >> com;
//		if (com == "push")
//		{
//			cin >> temp;
//			stack.stackPush(temp);
//		}
//		else if (com == "pop")
//			stack.stackPop();
//		else if (com == "size")
//			stack.stackSize();
//		else if (com == "empty")
//			stack.stackEmpty();
//		else if (com == "top")
//			stack.stackTop();
//	}
//
//	return 0;
//}