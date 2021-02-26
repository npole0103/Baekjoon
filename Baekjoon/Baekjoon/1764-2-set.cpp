/*
#include <iostream> //듣보잡 문제 set의 중복불가를 이용하여 해결
#include <string>
#include <set>
using namespace std;

//시간 내 문제를 풀려면 현 알고리즘을 유지하되
//map or set or vector 그리 sort를 사용하여 불필요한 비교 작업을 없애야 함.

int main()
{
	int d, b; //듣도 못한 사람, 보지도 못한 사람 수
	int count = 0; //카운트
	cin >> d >> b;

	string* dd= new string[d]; //저장될 배열
	string* bb= new string[b]; //저장될 배열
	
	set<string> db; //듣보를 비교할 set
	set<string> result; //결과를 저장할 set
	
	for(int i = 0 ; i < d ; i++) //듣도 못한 사람 입력
	{
		cin >> dd[i];
		db.insert(dd[i]); //듣보 set에 듣도 못한 사람 저장
	}
	
	for(int j = 0; j < b ; j++)
	{
		cin >> bb[j]; //보지도 못한 사람 입력
		set<string>::iterator FindIter = db.find(bb[j]); //보지도 못한 사람이 듣도 못한 사람에 있는지 검사
		if(FindIter != db.end()) //만약 듣도 못한 사람과 보지도 못한 사람이 두 곳에 다 존재한다면
		{
			count += 1; //카운트 증가
			result.insert(*FindIter); //result set에 그 값 저장
		}
	}
	
	//결과 출력
	cout << count << endl;
	
	set<string>::const_iterator ResultIter;
	for (ResultIter = result.begin(); ResultIter != result.end(); ResultIter++)
		cout << *ResultIter << endl;

	return 0;
}
*/