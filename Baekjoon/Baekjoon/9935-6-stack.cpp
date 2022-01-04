//#include <iostream> //문자열 폭발
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	stack<char> result;
//	stack<char> result2;
//	stack<char> temp; //검사하다가 불일치시 다시 붙여줄 임시 저장소
//
//	string str;
//	string bomb;
//	int bombSize = 0;
//	char bomblast = 0;
//
//	cin >> str; //원본 입력받음
//	cin >> bomb; //폭탄 문자열 입력받음.
//	bombSize = bomb.size();
//	bomblast = bomb[bombSize - 1]; //해당 문자의 마지막 문자
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		result.push(str[i]);
//
//		if (bomblast == result.top() && i >= bombSize - 1) // 뒷글자가 bomb이랑 같다면
//		{
//			for (int j = bombSize - 1; j >= 0; j--) // 뒷글자 검사 반복문
//			{
//				if (result.size() != 0 && result.top() == bomb[j]) // 같다면
//				{
//					temp.push(result.top());
//					result.pop();
//				}
//				else
//					break;
//
//				if (j == 0) // j == 0이 될 때까지 즉 bomb이랑 일치한다는 뜻
//				{
//					while(temp.size() != 0) //temp에 빼놨던 문자열 모두 제거(bomb이기 때문에 원본에 다시 넣지않을 것임)
//						temp.pop();
//				}
//			}
//			while (temp.size() != 0) //temp에 빼놨던 문자열을 다시 넣어주는 작업.
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
//		while (result.size() != 0) //역순 출력이므로 새로운 result2에 다시 FILO로 저장
//		{
//			result2.push(result.top());
//			result.pop();
//		}
//		
//		while (result2.size() != 0) //출력
//		{
//			cout << result2.top();
//			result2.pop();
//		}
//	}
//
//	return 0;
//}