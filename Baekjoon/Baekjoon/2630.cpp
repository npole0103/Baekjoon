//#include <iostream> //색종이 만들기
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int whiteCount = 0;
//int blueCount = 0;
//
//int flag = 0;
//
//void colorPaper(int x, int y, int** arr, int num)
//{
//	int tmpCount = 0;
//
//	for (int i = x; i < x + num; i++)
//		for (int j = y; j < y + num; j++)
//			if (arr[i][j] != 0)
//				tmpCount += 1;
//
//	if (tmpCount == 0)
//		whiteCount += 1;
//	else if (tmpCount == num * num)
//		blueCount += 1;
//	else
//	{
//		colorPaper(x, y, arr, num / 2);
//		colorPaper(x, y + num / 2, arr, num / 2);
//		colorPaper(x + num / 2, y, arr, num / 2);
//		colorPaper(x + num / 2, y + num / 2, arr, num / 2);
//	}
//}
//
//int main()
//{
//	int num;
//	int temp;
//	cin >> num;
//
//	int** arr = new int* [num];
//	for (int i = 0; i < num; i++)
//		arr[i] = new int[num];
//
//	for (int i = 0; i < num; i++)
//		for (int j = 0; j < num; j++)
//		{
//			cin >> temp;
//			arr[i][j] = temp;
//		}
//
//	colorPaper(0, 0, arr, num);
//
//	cout << whiteCount << endl;
//	cout << blueCount << endl;
//
//	for (int i = 0; i < num; i++)
//		delete[] arr[i];
//	delete[] arr;
//
//	return 0;
//}