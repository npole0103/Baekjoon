/*
#include <iostream> //달팽이는 올라가고싶다.
using namespace std;

int main()
{
	int a, b, v;
	int day;
	int counting = 0; 
	
	cin >> a >> b >> v;
	
	v -= a; // a만큼은 하루안에 바로 올라가면 됨
	day = a - b; // 하루에 올라갈 수 있는 거리
	
	counting = v / day; // v-a한 거리에서 하루에 올라갈 수 있는	거리 나눔
	if(v%day) //만약 나머지가 생긴다면 1일만큼 더해주자 왜냐하면 그만큼 못 올라갔기 때문에 하루만 시간주면 올라감
		counting += 1;
	
	counting += 1; // 처음 뺏던 a값인 하루치 만큼 다시 더해주자.
	
	cout << counting << endl;
	
	return 0;
}
*/