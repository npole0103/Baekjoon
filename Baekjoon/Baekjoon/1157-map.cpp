//#include <iostream> //�ܾ� ����
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	map<char, int> m;
//
//	int max = 0;
//	char max_char = ' ';
//
//	string ins;
//	cin >> ins;
//
//
//	for (int i = 0; i < ins.size(); i++)
//	{
//		if (97 <= ins[i] && ins[i] <= 122) //�빮�ڷ� ġȯ
//			ins[i] -= 32;
//
//		if (m.find(ins[i]) != m.end()) //�̹� ���� �����Ѵٸ�
//			m.find(ins[i])->second++;
//		else //���ο� ���̶��
//			m.insert({ ins[i], 1 });
//	}
//
//	for (auto iter = m.begin(); iter != m.end(); iter++) //1�������� ū �� ã��
//		if (iter->second > max) //ū ��
//		{
//			max_char = iter->first;
//			max = iter->second;
//		}
//
//	if (m.find(max_char) != m.end()) //�߰��� ���� ū ���� ����
//		m.erase(m.find(max_char));
//
//	for (auto iter = m.begin(); iter != m.end(); iter++) //�����ϰ� ���� ū ���� ���� ���� �ִٸ� == �ߺ����� ����
//		if (iter->second == max)
//			max = -1;
//
//	if (max == -1)
//		cout << "?" << endl;
//	else
//		cout << max_char << endl;
//}