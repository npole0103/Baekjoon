//#include <iostream> //������ �����
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
//
//	flag = 0;
//
//	if (num == 2)
//	{
//		cout << "asdasd" << endl;
//
//		if (arr[x][y] == 1)
//			blueCount++;
//		else
//			whiteCount++;
//
//		return;
//	}
//
//	//2��и�
//	for(int i = x; i < num / 2 ; i++)
//		for(int j = y ; j < num / 2 ; j++)
//			if (arr[i][j] == 0 && flag == 0) //0�ΰ� �ϳ��� �ִٸ�
//			{
//				flag = 1;
//				break;
//			}
//
//	if (flag == 0) //flag�� 0�̸� ��� ������ 1�̶� ����
//		blueCount += 1;
//	else
//	{
//		flag = 0;
//
//		for (int i = x; i < num / 2; i++)
//			for (int j = y; j < num / 2; j++)
//				if (arr[i][j] == 1 && flag == 0)
//				{
//					flag = 1;
//					break;
//				}
//
//		if (flag == 0) //flag�� 0�̸� ��� ������ 0�̶� ����
//			whiteCount += 1;
//		else //���� �ϳ��� 1�� �����Ѵٸ�
//		{
//			colorPaper(x, y, arr, num / 2);
//		}
//	}
//
//	for (int i = x; i < num / 2; i++)
//	{
//		for (int j = y; j < num / 2; j++)
//			cout << arr[i][j] << " ";
//		cout << endl;
//	}
//
//	flag = 0;
//
//	//1��и�
//	for (int i = x ; i < num / 2; i++)
//		for (int j = y + num / 2 ; j < num; j++)
//			if (arr[i][j] == 0 && flag == 0)
//			{
//				flag = 1;
//				break;
//			}
//	if (flag == 0)
//		blueCount += 1;
//	else
//	{
//		flag = 0;
//
//		for (int i = x; i < num / 2; i++)
//			for (int j = y + num / 2; j < num; j++)
//				if (arr[i][j] == 1 && flag == 0)
//				{
//					flag = 1;
//					break;
//				}
//		if (flag == 0)
//			whiteCount += 1;
//		else
//		{
//			colorPaper(x, y + num / 2, arr, num / 2);
//		}
//	}
//
//	for (int i = x; i < num / 2; i++)
//	{
//		for (int j = y + num /2; j < num; j++)
//			cout << arr[i][j] << " ";
//		cout << endl;
//	}
//
//	flag = 0;
//
//	//3��и�
//	for (int i = x + num / 2 ; i < num; i++)
//		for (int j = y ; j < num / 2; j++)
//			if (arr[i][j] == 0 && flag == 0)
//			{
//				flag = 1;
//				break;
//			}
//	if (flag == 0)
//		blueCount += 1;
//	else
//	{
//		flag = 0;
//
//		for (int i = x + num / 2; i < num; i++)
//			for (int j = y; j < num / 2; j++)
//				if (arr[i][j] == 1 && flag == 0)
//				{
//					flag = 1;
//					break;
//				}
//		if (flag == 0)
//			whiteCount += 1;
//		else
//		{
//			colorPaper(x + num / 2, y, arr, num / 2);
//		}
//	}
//
//	for (int i = x + num /2 ; i < num; i++)
//	{
//		for (int j = y ; j < num / 2; j++)
//			cout << arr[i][j] << " ";
//		cout << endl;
//	}
//
//	flag = 0;
//
//	//4��и�
//	for (int i = x + num / 2; i < num ; i++)
//		for (int j = y + num / 2; j < num ; j++)
//			if (arr[i][j] == 0 && flag == 0)
//			{
//				flag = 1;
//				break;
//			}
//	if (flag == 0)
//		blueCount += 1;
//	else
//	{
//		flag = 0;
//
//		for (int i = x + num / 2; i < num; i++)
//			for (int j = y + num / 2; j < num; j++)
//				if (arr[i][j] == 1 && flag == 0)
//				{
//					flag = 1;
//					break;
//				}
//		if (flag == 0)
//			whiteCount += 1;
//		else
//		{
//			colorPaper(x + num/2, y + num/2 , arr, num / 2);
//		}
//	}
//
//	for (int i = x + num / 2; i < num; i++)
//	{
//		for (int j = y + num / 2; j < num; j++)
//			cout << arr[i][j] << " ";
//		cout << endl;
//	}
//
//	flag = 0;
//
//	return;
//}
//
//int main()
//{
//	int num;
//	int temp;
//	cin >> num;
//
//	int** arr = new int*[num];
//	for (int i = 0; i < num; i++)
//		arr[i] = new int[num];
//
//	for(int i = 0; i < num ; i++)
//		for (int j = 0; j < num; j++)
//		{
//			cin >> temp;
//			arr[i][j] = temp;
//		}
//
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