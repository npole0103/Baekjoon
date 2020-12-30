/*
#include <iostream> //문자열 폭발
#include <string>
using namespace std;

int main()
{
	string word;
	string bomb;
	
	cin >> word;
	cin >> bomb;
	
	//cout << word.length() << endl;
	
	for(int i = 0; i < word.length() ; i++)
		if(word[i] == bomb[0]) //만약 폭탄의 첫 알파벳과 일치한다면
			for(int j = 1; j < bomb.size() ; j++) //bomb check 다음 단어 체크
			{
				if(word[i + j] != bomb[j]) //다르다면
					break;
				if(j == bomb.size() - 1) //끝 단어까지 검사했는데 같았다면
				{
					//cout << i << "before : " << word << endl;
					word.replace(i, bomb.size(), "");
					//cout << i << "after : " << word << endl;
					if(i <= bomb.size()) //현재 발견 지점이 폭탄 단어 길이보다 짧다면
					{
						i = -1;
						//cout <<"length " << word.length() << endl;
						//cout <<"i " <<i << endl;
						break;
					}
					else //발견 지점이 폭단 단어 길이보다 길다면
					{
						i -= bomb.size();
						//cout <<"length " << word.length() << endl;
						//cout <<"i " <<i << endl;
						break;
					}
				}
			}
				

	//cout << word << endl;
	
	
	if(word == "")
		cout << "FRULA" << endl;
	else
		cout << word << endl;
	
	
	return 0;
}

*/
