//#include <iostream> //OX퀴즈
//#include <string>
//using namespace std;
//
////배운점 
////" " 는 문자열(string)  / ' '는 문자(char)
//// https://www.daniweb.com/programming/software-development/threads/117396/compare-one-character-from-a-string-with-a-string
//
//
//int getScore(string& str)
//{
//	int sum = 0;
//	int acc = 0;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == 'O')
//		{
//			sum += (1 + acc);
//			acc++;
//		}
//		else if(str[i] == 'X')
//		{
//			acc = 0;
//		}
//	}
//
//	return sum;
//}
//
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	string* str = new string[num];
//
//	for (int i = 0; i < num; i++)
//		cin >> str[i];
//
//	for (int i = 0; i < num; i++)
//		cout << getScore(str[i]) << endl;
//
//	return 0;
//}