/*
#include <iostream> // 단어의 개수
#include <string>
using namespace std;

int main()
{
	string word;
	getline(cin, word, '\n'); //공백 포함해서 읽어오기
	
	int count = 0;

	for(int i = 0; i < word.size() ; i++)
		if(word[i] == 32) //공백 있을 시
			count += 1;
	
	if(word[0] == 32) // 맨 처음이 공백일 시
		count -= 1;
	
	if(word[word.size() - 1] == 32) //맨 마지막에 공백 입력 시
		count -= 1;
	
	cout << count + 1 << endl; //공백 + 1 == 단어의 개수
	
	return 0;
}
*/