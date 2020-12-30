/*
#include <iostream> //가장 큰 정사각형
#include <string>
using namespace std;

int check_square(int** arr,int row, int col)
{
	int size = 1;
	
	int result = 0;
	
	for(int i = 0; i < row ; i++)
		for(int j = 0; j < col ; j++)
		{
			if(arr[i+size][j+size] == 1)
			{
				for(int k = 0; k < size ; k++)
					if(arr[i+size][j+size-k] == 1 && arr[i+size-k][j+size] == 1)
						if(k == size - 1) // 모든 배열이 1인 경우
							result = size;
					else
						break;
			}
			
			size++;
		}
	
	return result;
}

int main()
{
	int row;
	int col;
	int ans = 0;
	
	cin >> row;
	cin >> col;
	
	string str[row];
	int arr[row][col];
	
	for(int i = 0 ; i < row ; i++)
		cin >> str[i];
	
	for(int i = 0 ; i < row ; i++)
		for(int j = 0 ; j < col ; j++)
			arr[i][j] = (int)str[i][j] - 48;
	
	
	for(int i = 0; i < row ; i++)
		for(int j = 0; j < col; j++)
			if(arr[i][j] == 1)
				ans = ans > check_square((int**)arr, row, col) ? ans : check_square((int**)arr, row, col);
	
	
	cout << ans << endl;

	
	//check_square((int*)arr, row, col)
	
	return 0;
}
*/
