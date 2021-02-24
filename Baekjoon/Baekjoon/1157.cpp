//#include <iostream> //단어 공부
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
//		if (97 <= ins[i] && ins[i] <= 122) //대문자로 치환
//			ins[i] -= 32;
//
//		if (m.find(ins[i]) != m.end()) //이미 값이 존재한다면
//			m.find(ins[i])->second++;
//		else //새로운 값이라면
//			m.insert({ ins[i], 1 });
//	}
//
//	for (auto iter = m.begin(); iter != m.end(); iter++) //1차적으로 큰 값 찾음
//		if (iter->second > max) //큰 값
//		{
//			max_char = iter->first;
//			max = iter->second;
//		}
//
//	if (m.find(max_char) != m.end()) //발견한 가장 큰 값을 삭제
//		m.erase(m.find(max_char));
//
//	for (auto iter = m.begin(); iter != m.end(); iter++) //삭제하고도 가장 큰 값과 같은 값이 있다면 == 중복값이 존재
//		if (iter->second == max)
//			max = -1;
//
//	if (max == -1)
//		cout << "?" << endl;
//	else
//		cout << max_char << endl;
//}