//#include <iostream> //���ڿ� ����
//#include <string>
//using namespace std;
//
//int main()
//{
//	string result = "";
//
//	string str;
//	string bomb;
//	string temp = ""; //�˻��ϴٰ� ����ġ�� �ٽ� �ٿ��� �ӽ� �����
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
//		if (bomblast == str[i] && i >= bombSize - 1) // �ޱ��ڰ� bomb�̶� ���ٸ�
//		{
//			temp += str[i]; //str[i] �� ù ���ڸ� temp�� ����
//			for (int j = bombSize - 2 ; j >= 0; j--) //�ޱ��� �˻� �ݺ���
//			{
//				if (result[result.size() - 1] == bomb[j]) //���ٸ�
//				{
//					temp += result[result.size() - 1];
//					result.pop_back();
//				}
//				else
//					break;
//
//				if (j == 0) // j == 0�� �� ������ �� bomb�̶� ��ġ�Ѵٴ�
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