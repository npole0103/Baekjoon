//#include <iostream> //나는야 포켓몬 마스터 이다솜
//#include <map>
//#include <algorithm>
//#include <iterator>
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//string pocketNum[100001];
//map<string, int> pocketStr;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//	string strTemp;
//	int numTemp;
//
//	int n, m;
//
//	cin >> n >> m;
//
//	//input n
//	for (int i = 0; i < n; i++)
//	{
//		cin >> strTemp;
//		pocketNum[i + 1] = strTemp;
//		pocketStr.insert({strTemp, i + 1});
//	}
//
//	//input m
//	for (int i = 0; i < m; i++)
//	{
//		cin >> strTemp;
//		if ('1' <= strTemp[0] && strTemp[0] <= '9')
//		{
//			numTemp = atoi(strTemp.c_str());
//			cout << pocketNum[numTemp] << "\n";
//		}
//		else
//			cout << pocketStr[strTemp] << "\n";
//	}
//	return 0;
//}