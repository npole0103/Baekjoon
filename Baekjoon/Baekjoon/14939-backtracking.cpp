//#include <iostream> //2017203035 �����
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
//	temp[row][col] = !temp[row][col]; //���� ��ġ
//
//	if (row + 1 < n) //��
//		temp[row + 1][col] = !temp[row + 1][col];
//
//	if (row - 1 >= 0) //�Ʒ�
//		temp[row - 1][col] = !temp[row - 1][col];
//
//	if (col + 1 < n) //������
//		temp[row][col + 1] = !temp[row][col + 1];
//
//	if (col - 1 >= 0) //����
//		temp[row][col - 1] = !temp[row][col - 1];
//}
//
//int checkBulb(int** temp, vector<pair<int, int>>& tempPos, int n)
//{
//	int count = 0;
//
//	for (int row = 1; row < n; row++)
//		for (int col = 0; col < n; col++)
//			if (temp[row - 1][col]) //�ٷ� �� �࿡ ���� ���� �߰ߵȴٸ�
//			{
//				count++;
//				tempPos.push_back(make_pair(row, col));
//				changeBulb(temp, row, col, n); //���� [row][col]�� �������ν� ���� ����
//			}
//
//	for (int row = 0; row < n; row++)
//		for (int col = 0; col < n; col++)
//			if (temp[row][col] == 1) //�˻� �ߴµ� ���� ��찡 �ϳ��� ������
//				return 99999999; //�ʱⰪ ��ȯ
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
//	int count = 0; //���� ���� �ּڰ� ī��Ʈ
//	vector<pair<int, int>> tempPos; //��ǥ�� ���� @@@@@@@@@@@@@@@@@@
//
//	//int n;
//	//cin >> n;
//	int n = 10;
//
//	//2���� ���� �迭 �Ҵ�
//	int** arr;
//	arr = new int* [n];
//	for (int i = 0; i < n; i++)
//		arr[i] = new int[n];
//
//	//2���� ���� �迭 �Ҵ�
//	int** temp;
//	temp = new int* [n];
//	for (int i = 0; i < n; i++)
//		temp[i] = new int[n];
//
//	//0���� �ʱ�ȭ
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			arr[i][j] = 0;
//
//	//O#���� �Է�
//	for (int i = 0; i < n; i++)
//	{
//		string line;
//		cin >> line;
//
//		for (int j = 0; j < n; j++)
//			if (line[j] == 'O')
//				arr[i][j] = 1; //���� ǥ��
//	}
//
//	////���
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		cout << arr[i][j];
//	//	}
//	//	cout << endl;
//	//}
//
//	for (int i = 0; i < (1 << n); i++) //ù ���� ��� ����� �� Ȯ���ϱ� ����
//	{
//		//���� �迭���� temp�� ����
//		for (int row = 0; row < n; row++)
//			for (int col = 0; col < n; col++)
//				temp[row][col] = arr[row][col];
//
//		count = 0;
//		tempPos.clear();
//
//		for (int j = 0; j < n; j++)
//			if (i & (1 << j)) //ù �� 10���� ������ ���� �Ǵ� - ��Ʈ����ŷ
//			{
//				count++;
//				tempPos.push_back(make_pair(0, j)); //���Ϳ� �迭 ����
//				changeBulb(temp, 0, j, n); //[0][j] ����
//			}
//
//		count += checkBulb(temp, tempPos, n);
//
//		if (count < result) //ī��Ʈ�� ���� �ּڰ��̶��
//		{
//			//�������� pos Vector�� ��ǥ�� ����
//			pos.clear();
//			copy(tempPos.begin(), tempPos.end(), back_inserter(pos)); //Deep Copy
//
//			//count ������Ʈ
//			result = count;
//		}
//	}
//
//	if (result == 99999999)
//		cout << -1 << endl;
//	else
//	{
//		////temp �迭 ����
//		//for (int i = 0; i < n; i++)
//		//	for (int j = 0; j < n; j++)
//		//		temp[i][j] = 0;
//
//		////mark �س��� ��ǥ�� 1�� ǥ��
//		//for (int i = 0; i < pos.size(); i++)
//		//	temp[pos[i].first][pos[i].second] = 1;
//
//		////��� ���
//		//printOutput(temp, n);
//
//		cout << result << endl;
//	}
//
//	//�����Ҵ� �޸� ����
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