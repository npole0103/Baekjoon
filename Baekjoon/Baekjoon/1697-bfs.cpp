//#include <iostream> //���ٲ���
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	//����ġ�� 1�ʷ� ������. BFS ���� ����
//	//������ ���(��)�� ���������� 3���� [ +1 -1 *2 ]
//	//�湮�� �ߴٴ� ���� �̹� ������ ����� �Ǿ��ٴ� ���̰�, ������ ����� �Ǿ��ٴ� ���� ���ݺ��� ª�� �ð��� ������.
//	//check arr�� ����ġ�� ���س����� �ּڰ��� ���ϸ� ��.
//
//	int check[100001] = { 0, };
//	queue<int> q;
//	int temp = 0;
//	int result = 0;
//
//	q.push(n);
//	check[n] = 1;
//
//	while (!q.empty())
//	{
//		temp = q.front(); //temp�� ���� ���� ��� ������
//		q.pop(); //q���� ����.
//
//		//���� ���� ��ǥ�� k�� ���� ��ǥ ���� ��ġ�Ѵٸ�
//		if (temp == k)
//		{
//			result = check[temp] - 1; //k���� �Ÿ��� ���� ����ġ�� result�� ����
//			// -1�� ���ִ� ���� : ó�� check[n] = 1�� ������ �ϴµ� 1�ʸ� �԰� ������ ��.
//			// 1�ʸ� ���� �÷��� ������ 0���̸� if ������ !check[ ] ���ǿ� �ɷ����� ������ ���۰��� 1�ʸ� �� ����.
//			// ���� ó�� ������� 1�ʸ� ���ִ� ����
//			break;
//		}
//
//		// ���翡�� x - 1 �湮���� �ʾ��� ���
//		if (0 <= temp - 1 && !check[temp - 1])
//		{
//			q.push(temp - 1);
//			check[temp - 1] = check[temp] + 1;
//		}
//		// ���翡�� x + 1 �湮���� �ʾ��� ���
//		if (temp + 1 <= 100000 && !check[temp + 1])
//		{
//			q.push(temp + 1);
//			check[temp + 1] = check[temp] + 1;
//		}
//		// ���翡�� 2x ���� �湮���� �ʾ��� ���
//		if (2 * temp <= 100000 && !check[2 * temp])
//		{
//			q.push(2 * temp);
//			check[2 * temp] = check[temp] + 1;
//		}
//	}
//
//	cout << result << endl;
//
//	return 0;
//}