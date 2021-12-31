//#include <iostream> //가장 큰 정사각형
//#include <string>
//
//#define MIN(X, Y) (X > Y ? Y : X)
//
//using namespace std;
//
//int main()
//{
//	int row;
//	int col;
//	int ans = 0;
//	
//	cin >> row;
//	cin >> col;
//	
//	string str[row];
//	int arr[row][col];
//	int dparr[row][col];
//	
//	//input
//	for(int i = 0 ; i < row ; i++)
//		cin >> str[i];
//	
//	for(int i = 0 ; i < row ; i++)
//		for(int j = 0 ; j < col ; j++)
//		{
//			arr[i][j] = (int)str[i][j] - 48;
//			dparr[i][j] = (int)str[i][j] - 48;
//		}
//
//	//let's using the dparr to find max_square_value
//	//현재 위치에서 (-1, 0), (0, -1), (-1, -1) 값들 비교해서 그 중 제일 작은 dp값을 (0 ,0) dp에 넣음.
//	for(int i = 1; i < row ; i++)
//		for(int j = 1; j < col; j++)
//			if(arr[i][j] == 1)
//				dparr[i][j] = MIN(MIN(dparr[i-1][j], dparr[i-1][j-1]), MIN(dparr[i][j-1], dparr[i-1][j-1])) + 1;
//	
//	//find the max in dparr
//	for(int i = 0; i < row ; i++)
//		for(int j = 0; j < col; j++)
//			if(dparr[i][j] > ans)
//				ans = dparr[i][j];
//
//	cout << ans*ans << endl;
//
//	return 0;
//}