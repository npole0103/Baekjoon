//#include <iostream> //괄호
//#include <string>
//#include <stack>
//using namespace std;
//
////테스트 케이스 데이터가 주어지는 문제들은
////사용한 변수나 STL들을 초기화 했는지 잘 확인하자
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
//		//비었다면 ture 비지 않았다면 false
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
//				if (ps.size() == 0) // '(' 괄호가 없는데 ')'부터 온다면
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