//#include <iostream> //2017203035 김수헌
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int result = 99999999;
//vector<pair<int, int>> pos;
//
//void changeBulb(int** temp, int row, int col, int n)
//{
//	temp[row][col] = !temp[row][col]; //현재 위치
//
//	if (row + 1 < n) //위
//		temp[row + 1][col] = !temp[row + 1][col];
//
//	if (row - 1 >= 0) //아래
//		temp[row - 1][col] = !temp[row - 1][col];
//
//	if (col + 1 < n) //오른쪽
//		temp[row][col + 1] = !temp[row][col + 1];
//
//	if (col - 1 >= 0) //왼쪽
//		temp[row][col - 1] = !temp[row][col - 1];
//}
//
//int checkBulb(int** temp, vector<pair<int, int>>& tempPos, int n)
//{
//	int count = 0;
//
//	for (int row = 1; row < n; row++)
//		for (int col = 0; col < n; col++)
//			if (temp[row - 1][col]) //바로 윗 행에 켜진 곳이 발견된다면
//			{
//				count++;
//				tempPos.push_back(make_pair(row, col));
//				changeBulb(temp, row, col, n); //현재 [row][col]을 꺼줌으로써 위를 꺼줌
//			}
//
//	for (int row = 0; row < n; row++)
//		for (int col = 0; col < n; col++)
//			if (temp[row][col] == 1) //검사 했는데 켜진 경우가 하나라도 있으면
//				return 99999999; //초기값 반환
//
//	return count;
//}
//
//void printOutput(int** temp, int n)
//{
//	for (int row = 0; row < n; row++)
//	{
//		for (int col = 0; col < n; col++)
//		{
//			if (temp[row][col] == 1)
//				cout << "O";
//			else if (temp[row][col] == 0)
//				cout << "#";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int count = 0; //켜진 전구 최솟값 카운트
//	vector<pair<int, int>> tempPos; //좌표값 저장 @@@@@@@@@@@@@@@@@@
//
//	//int n;
//	//cin >> n;
//	int n = 10;
//
//	//2차원 동적 배열 할당
//	int** arr;
//	arr = new int* [n];
//	for (int i = 0; i < n; i++)
//		arr[i] = new int[n];
//
//	//2차원 동적 배열 할당
//	int** temp;
//	temp = new int* [n];
//	for (int i = 0; i < n; i++)
//		temp[i] = new int[n];
//
//	//0으로 초기화
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			arr[i][j] = 0;
//
//	//O#정보 입력
//	for (int i = 0; i < n; i++)
//	{
//		string line;
//		cin >> line;
//
//		for (int j = 0; j < n; j++)
//			if (line[j] == 'O')
//				arr[i][j] = 1; //켜짐 표시
//	}
//
//	////출력
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		cout << arr[i][j];
//	//	}
//	//	cout << endl;
//	//}
//
//	for (int i = 0; i < (1 << n); i++) //첫 줄의 모든 경우의 수 확인하기 위해
//	{
//		//원본 배열값을 temp로 복사
//		for (int row = 0; row < n; row++)
//			for (int col = 0; col < n; col++)
//				temp[row][col] = arr[row][col];
//
//		count = 0;
//		tempPos.clear();
//
//		for (int j = 0; j < n; j++)
//			if (i & (1 << j)) //첫 줄 10개를 누를지 말지 판단 - 비트마스킹
//			{
//				count++;
//				tempPos.push_back(make_pair(0, j)); //벡터에 배열 저장
//				changeBulb(temp, 0, j, n); //[0][j] 켜줌
//			}
//
//		count += checkBulb(temp, tempPos, n);
//
//		if (count < result) //카운트한 값이 최솟값이라면
//		{
//			//전역변수 pos Vector에 좌표값 복사
//			pos.clear();
//			copy(tempPos.begin(), tempPos.end(), back_inserter(pos)); //Deep Copy
//
//			//count 업데이트
//			result = count;
//		}
//	}
//
//	if (result == 99999999)
//		cout << -1 << endl;
//	else
//	{
//		////temp 배열 재사용
//		//for (int i = 0; i < n; i++)
//		//	for (int j = 0; j < n; j++)
//		//		temp[i][j] = 0;
//
//		////mark 해놓은 좌표들 1로 표시
//		//for (int i = 0; i < pos.size(); i++)
//		//	temp[pos[i].first][pos[i].second] = 1;
//
//		////결과 출력
//		//printOutput(temp, n);
//
//		cout << result << endl;
//	}
//
//	//동적할당 메모리 해제
//	for (int i = 0; i < n; i++)
//	{
//		delete[] arr[i];
//		delete[] temp[i];
//	}
//	delete[] arr;
//	delete[] temp;
//
//	return 0;
//}