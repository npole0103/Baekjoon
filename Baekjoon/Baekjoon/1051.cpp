/*
#include <iostream> //숫자 정사각형
#include <string>
using namespace std;

int main()
{
	int row;
	int col;
	int maxSquare = 0;
	int ans = 1;
	
	cin >> row;
	cin >> col;
	
	string str[row];
	int arr[row][col];
	
	for(int i = 0 ; i < row ; i++)
		cin >> str[i];
	
	for(int i = 0 ; i < row ; i++)
		for(int j = 0 ; j < col ; j++)
			arr[i][j] = (int)str[i][j] - 48;
	
	maxSquare = row >= col ? col : row;
	
	if(row == 1 && col == 1) //크기가 1일 때
		ans = 1;
	
	//검사 범위 벗어남
	// 3 3 이면 3 3 안에서 해야하는데 넘어가버림
	
	
	else if(row >= col) //행이 더 클 때
		for(int i = 0 ; i < row - maxSquare; i++)
			for(int j = 0 ; j < col; j++)
				for(int k = 1 ; k <= maxSquare ; k++)
					if(arr[i][j] == arr[i+k][j] == arr[i][j+k] == arr[i+k][j+k])
						if(k*k > ans)
							ans = k*k;
							
	else
		for(int i = 0 ; i < row; i++) //열이 더 클 때
			for(int j = 0 ; j < col - maxSquare; j++)
				for(int k = 1 ; k <= maxSquare ; k++)
					if(arr[i][j] == arr[i+k][j] == arr[i][j+k] == arr[i+k][j+k])
						if(k*k > ans)
							ans = k*k;

	cout << ans << endl;
}
*/
