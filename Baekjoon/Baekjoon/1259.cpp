//#include <iostream> //ÆÓ¸°µå·Ò¼ö
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	int	check = 0;
//	//check == 1 yes / check == 2 no
//
//	while (1)
//	{
//		cin >> str;
//		if (str == "0")
//			return 0;
//
//		if (str.length() == 1)
//		{
//			cout << "yes" << endl;
//			continue;
//		}
//
//		for (int i = 0; i < str.length() / 2; i++)
//		{
//			if (str[i] != str[str.length() - (i + 1)])
//			{
//				check = 2;
//				break;
//			}
//
//			//last index check
//			if (i == (str.length() / 2) - 1)
//				check = 1;
//		}
//
//		if (check == 1)
//			cout << "yes" << endl;
//		else if (check == 2)
//			cout << "no" << endl;
//	}
//
//	return 0;
//}