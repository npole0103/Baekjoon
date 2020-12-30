/*
#include <iostream> //농구경기
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string* name = new string[n];
	
	int alpha[26] = {0, }; //알파벳 갯수 카운트
	int exp = 0; //5명 이상이 안될 경우
	
	for(int i = 0; i < n ; i++)
	{
		cin >> name[i]; // 이름 입력 받음
		for(int j = 0; j < 26 ; j++)
			if( char(97+j) == name[i].at(0)) //이름 앞자리와 알파벳 비교하고 알파벳 가중치 +1
				alpha[j] += 1;
	}

	for(int i = 0 ; i < 26 ; i++)
		if(alpha[i] >= 5) //만약 알파벳 가중치 5이상이라면
		{
			exp += 1;
			cout << char(97+i); //출력
		}
	
	if(exp == 0) //exp == 0이라면 한번도 출력이 되지 않았다는 것을 의미
		cout << "PREDAJA"; //예외
	
	cout << endl;
			
	return 0;
}
*/