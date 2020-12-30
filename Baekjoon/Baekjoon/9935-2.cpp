/*
#include <iostream> //문자열 폭발
#include <string>
using namespace std;

std::string replace_all(const std::string &message, const std::string &pattern, const std::string &replace) 
{
	std::string result = message;
	std::string::size_type pos = 0;
	
	while ((pos = result.find(pattern)) != std::string::npos)
	{
		result.replace(pos, pattern.size(), replace);
	}
		return result;
}
//출처: https://wendys.tistory.com/8 [웬디의 기묘한 이야기]

int main()
{
	int bombcount = 0;
	
	string word;
	string bomb;
	
	cin >> word;
	cin >> bomb;
	
	int wsize = word.size();
	int bsize = bomb.size();
	
	
	//for(int i = 0; i < word.length() ; i++) //폭탄의 첫 알파벳의 갯수 구하기
	//	if(word[i] == bomb[0])
	//		bombcount += 1;
	
	
	for(int i = 0; i < wsize/bsize ; i++)
		word = replace_all(word, bomb, "");
		
	if(word == "")
		cout << "FRULA" << endl;
	else
		cout << word << endl;
	return 0;
}

*/