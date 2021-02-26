//#include <iostream> //올림픽 https://www.acmicpc.net/board/view/43397 나는 왜 안되지? 주석을 쓰면 되고 안 쓰면 안되네;;
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef struct Info {
//	int countryNum;
//	int gold, silver, bronze;
//	int rank;
//}Info;
//
//vector<Info> country;
//
//bool compare(Info a, Info b)
//{
//	if (a.gold == b.gold && a.silver == b.silver)
//		return a.bronze > b.bronze;
//	else if (a.gold == b.gold)
//		return a.silver > b.silver;
//	else
//		return a.gold > b.gold;
//}
//
//int main()
//{
//	int n, k;
//	int temp;
//
//	cin >> n >> k;
//	
//	Info info;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> info.countryNum >> info.gold >> info.silver >> info.bronze;
//		country.push_back(info);
//	}
//
//	//정렬
//	sort(country.begin(), country.end(), compare);
//
//	//등수 결정
//	for (int i = 0; i < n; i++)
//	{
//		country[i].rank = i + 1;
//	}
//	
//	//중복 등수
//	for (int i = 1; i < n; i++)
//	{
//		if (country[i - 1].gold == country[i].gold && country[i - 1].silver == country[i].silver && country[i - 1].bronze == country[i].bronze)
//			country[i].rank = country[i - 1].rank;
//	}
//
//	////전체 출력 구문
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << country[i].countryNum << country[i].gold << country[i].silver << country[i].bronze << country[i].rank << endl;
//	//}
//
//	//등수를 알고 싶은 국가
//	for (int i = 0; i < n; i++)
//		if (k == country[i].countryNum)
//		{
//			cout << country[i].rank << endl;
//			break;
//		}
//
//	return 0;
//}