/*
#include <iostream> //방 번호
#include <string>

using namespace std;

int main()
{
	string num;
	
	int max = 0;
	int cnt = 0;
	
	cin >> num;
	
	int arr[10] = { 0 };
	
	for(int i = 0; i < num.length(); i++)
		arr[num[i] - 48 ]++; //자리 숫자 자리 1씩 카운트
	//48빼는 이유 char형 숫자 0은 48 1은 49 이므로 48을 뺴서 int형 숫자를 얻는 것.
	
	arr[6] = (arr[6] + arr[9] + 1) / 2; //6과 9를 합쳐버림
	arr[9] = 0;
	
	for(int i = 0; i < 10; i++) //arr[] 최댓값 산출
		if(max < arr[i])
			max = arr[i];
			
	cout << max << endl;
	
	return 0;
}
*/
