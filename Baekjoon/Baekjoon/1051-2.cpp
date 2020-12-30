/*
#include <iostream> //숫자 정사각형
#include <string> //https://blog.naver.com/zzang9ha/221835996369
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
	
	maxSquare = row >= col ? col : row; //row 와 col 중에 작은 값 maxSquare에 저장
	
	for(int i = 0 ; i < row ; i++)
		for(int j = 0 ; j < col; j++)
			for(int k = 0 ; k < maxSquare ; k++)
				if(i+k < row && j+k < col) //검사 범위
					if(arr[i][j] == arr[i+k][j] && arr[i][j] == arr[i][j+k] && arr[i][j] == arr[i+k][j+k])
						if((k+1)*(k+1) > ans)
						{
							ans = (k+1)*(k+1);
							maxSquare = maxSquare >= ans ? maxSquare : ans;
						}
							

	if(row == 1 && col == 1) //크기가 1일 때
		ans = 1;
	
	cout << ans << endl;
}
*/

