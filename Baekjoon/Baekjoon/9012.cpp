//#include <iostream> //��ȣ
//#include <string>
//#include <stack>
//using namespace std;
//
////�׽�Ʈ ���̽� �����Ͱ� �־����� ��������
////����� ������ STL���� �ʱ�ȭ �ߴ��� �� Ȯ������
//
//int main()
//{
//	int num;
//	int exp = 0;
//	cin >> num;
//
//	string input;
//	stack<char> ps;
//
//	while (num--)
//	{
//		//����ٸ� ture ���� �ʾҴٸ� false
//		while(!ps.empty()) 
//			ps.pop();
//
//		exp = 0;
//
//		cin >> input;
//		for (int i = 0; i < input.size(); i++)
//		{
//			if (input[i] == '(')
//			{
//
//				ps.push(input[i]);
//			}
//			else if (input[i] == ')')
//			{
//				if (ps.size() == 0) // '(' ��ȣ�� ���µ� ')'���� �´ٸ�
//				{
//					
//					exp = 1; // exception
//					break;
//				}
//				ps.pop();
//			}
//		}
//
//		if (exp == 0 && ps.size() == 0)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//
//	return 0;
//}