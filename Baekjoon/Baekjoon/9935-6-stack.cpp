//#include <iostream> //���ڿ� ����
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	stack<char> result;
//	stack<char> result2;
//	stack<char> temp; //�˻��ϴٰ� ����ġ�� �ٽ� �ٿ��� �ӽ� �����
//
//	string str;
//	string bomb;
//	int bombSize = 0;
//	char bomblast = 0;
//
//	cin >> str; //���� �Է¹���
//	cin >> bomb; //��ź ���ڿ� �Է¹���.
//	bombSize = bomb.size();
//	bomblast = bomb[bombSize - 1]; //�ش� ������ ������ ����
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		result.push(str[i]);
//
//		if (bomblast == result.top() && i >= bombSize - 1) // �ޱ��ڰ� bomb�̶� ���ٸ�
//		{
//			for (int j = bombSize - 1; j >= 0; j--) // �ޱ��� �˻� �ݺ���
//			{
//				if (result.size() != 0 && result.top() == bomb[j]) // ���ٸ�
//				{
//					temp.push(result.top());
//					result.pop();
//				}
//				else
//					break;
//
//				if (j == 0) // j == 0�� �� ������ �� bomb�̶� ��ġ�Ѵٴ� ��
//				{
//					while(temp.size() != 0) //temp�� ������ ���ڿ� ��� ����(bomb�̱� ������ ������ �ٽ� �������� ����)
//						temp.pop();
//				}
//			}
//			while (temp.size() != 0) //temp�� ������ ���ڿ��� �ٽ� �־��ִ� �۾�.
//			{	
//				result.push(temp.top());
//				temp.pop();
//			}
//		}
//	}
//
//	if (result.size() == 0)
//		cout << "FRULA" << endl;
//	else
//	{
//		while (result.size() != 0) //���� ����̹Ƿ� ���ο� result2�� �ٽ� FILO�� ����
//		{
//			result2.push(result.top());
//			result.pop();
//		}
//		
//		while (result2.size() != 0) //���
//		{
//			cout << result2.top();
//			result2.pop();
//		}
//	}
//
//	return 0;
//}