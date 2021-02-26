//#include <iostream> //체스판 다시 칠하기
//#include <algorithm>
//#include <string>
//using namespace std;
//
//string whiteNblack[8]
//{
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW"
//};
//
//string blackNwhite[8]
//{
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB"
//};
//
//int wbCounting(string* str, int n, int m)
//{
//	int count = 0;
//	for (int i = n; i < n + 8; i++)
//		for (int j = m; j < m + 8; j++)
//			if (str[i][j] != whiteNblack[i - n][j - m])
//			{
//				//cout <<"wb " << i << " " << j << " " << i - n << " " << j - m << endl;
//				count += 1;
//			}
//
//	return count;
//}			
//
//int bwCounting(string* str, int n, int m)
//{
//	int count = 0;
//	for (int i = n; i < n + 8; i++)
//		for (int j = m; j < m + 8; j++)
//			if (str[i][j] != blackNwhite[i - n][j - m])
//				//cout <<"bw " <<i << " " << j << " " << i - n << " " << j - m << endl;
//				count += 1;
//
//	return count;
//}
//
//int main()
//{
//	int n, m;
//	int result = 9999999;
//	cin >> n >> m;
//
//	string* str = new string[n];
//	for (int i = 0; i < n; i++)
//		cin >> str[i];
//
//
//	for (int i = 0; i + 7 < n; i++)
//		for (int j = 0; j + 7 < m; j++)
//			result = min(result, min(wbCounting(str, i, j), bwCounting(str, i, j)));
//
//	cout << result << endl;
//	return 0;
//}