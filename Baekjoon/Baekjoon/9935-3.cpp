/*
#include <iostream> //문자열 폭발
#include <string>
#include <stack>
using namespace std;

int main()
{
	string word;
	string bomb;
	
	cin >> word;
	cin >> bomb;
	
	int wsize = word.size();
	int tempsize[wsize] = { 0, }; //표시용
	int bsize = bomb.size();
	int count = 0;
	
	stack<int> bombstack;
	
	
	//for(int u = 0 ; u <= wsize/bsize ; u++)
	//{
		for(int i = 0; i < word.length() ; i++)
		{
			if(tempsize[i] == 1) //이미 사용된 알파벳
				continue;
			else if(tempsize[i] == 0 && count <= bsize && word[i] == bomb[count-1]) //만약 폭탄의 알파벳과 일치한다면
			{
				bombstack.push(i);
				count += 1;
			}
			else if(tempsize[i] == 0 && count <= bsize && word[i] != bomb[count-1]) //폭탄의 알파벳과 다르다면
			{
				if(i + bsize == wsize - 1) //문자열 끝까지 갔는데 다르다면
				{
					while(!bombstack.empty())
						bombstack.pop();
					count = 0;
				}
			}
			
		}
	
		while(!bombstack.empty()) //스택이 빌 때까지
			{
				tempsize[bombstack.top()] = 1;
				bombstack.pop();
			}
		
		
		count = 0;
	//}
	
	
	for(int i = 0 ; i < wsize ; i++)
		cout << tempsize[i];
	cout << endl;
	
	return 0;
}
*/

