#include <iostream> //����� ����
#include <vector>
using namespace std;

int main()
{
	int tc;
	int n, m, k; // n ����, m ����
	int x, y;

	cin >> tc;

	while (tc--)
	{
		cin >> n >> m >> k;
		vector<int>* cabb = new vector<int>[n];
		
		for (int i = 0; i < n; i++)
			for(int j = 0; j < m ; j++)
				cabb[i].push_back(0);

		for (int i = 0; i < k; i++)
		{
			cin >> x >> y;
			cabb[x][y] = 1;
		}


		// ��� or DFS
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cout << cabb[i][j] << " ";
			cout << endl;
		}

	}
}