//#include <iostream> //문자열 폭발
//#include <string>
//using namespace std;
//
//int main()
//{
//	string result = "";
//
//	string str;
//	string bomb;
//	string temp = ""; //검사하다가 불일치시 다시 붙여줄 임시 저장소
//	int bombSize = 0;
//	char bomblast = 0;
//
//	cin >> str;
//	cin >> bomb;
//	bombSize = bomb.size();
//	bomblast = bomb[bombSize - 1];
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (bomblast == str[i] && i >= bombSize - 1) // 뒷글자가 bomb이랑 같다면
//		{
//			temp += str[i]; //str[i] 즉 첫 글자를 temp에 저장
//			for (int j = bombSize - 2 ; j >= 0; j--) //뒷글자 검사 반복문
//			{
//				if (result[result.size() - 1] == bomb[j]) //같다면
//				{
//					temp += result[result.size() - 1];
//					result.pop_back();
//				}
//				else
//					break;
//
//				if (j == 0) // j == 0이 될 때까지 즉 bomb이랑 일치한다는
//					temp = "";
//			}
//			if (temp.size() != 0)
//			{
//				for (int i = 0; i < temp.size(); i++)
//					result += temp[i];
//
//				temp = ""; //temp initialize
//			}
//		}
//		else
//			result += str[i];
//	}
//
//	if (result.size() == 0)
//		cout << "FRULA" << endl;
//	else
//		for (int i = 0; i < result.size(); i++)
//			cout << result[i];
//
//	return 0;
//}