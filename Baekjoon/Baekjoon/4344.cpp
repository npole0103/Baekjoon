/*
#include <iostream> //평균은 넘겠지
using namespace std;

int main()
{
	int test;
	cin >> test;
	int hold_test = test;
	double ans[test] = {0, };
	int num;
	
	while(test--)
	{
		cin >> num;
		double score[num];
		int avg = 0;
		int pass = 0;
		
		for(int i = 0; i < num ; i++)
		{
			cin >> score[i];
		}
		
		//avg
		for(int i = 0; i < num ; i++)
		{
			avg += score[i];
		}
		
		avg /= num;
		
		for(int i = 0; i < num ; i++)
		{
			if(score[i] > avg)
				pass++;
		}
		
		ans[test] = pass/(double)num*100;
	}
	
	for(int i = hold_test - 1 ; i >= 0 ; --i)
		printf("%.3f%%\n", ans[i]);

	return 0;
}
*/