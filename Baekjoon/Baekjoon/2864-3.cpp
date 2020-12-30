/*
#include <iostream>
using namespace std;

int changeSix(int x) // 6을 5로 바꾸는 함수
{
    int ans = 0, tmp, cnt = 1;
    while (x)
    {
        tmp = x % 10;
        x /= 10;
        if (tmp == 6)
            tmp = 5;
        ans += tmp * cnt;
        cnt *= 10;
    }
    return ans;
}

int changeFive(int x) // 5를 6으로 바꾸는 함수
{
    int ans = 0, tmp, cnt = 1;
    while (x)
    {
        tmp = x % 10;
        x /= 10;
        if (tmp == 5)
            tmp = 6;
        ans += tmp * cnt;
        cnt *= 10;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << changeSix(a) + changeSix(b) << " ";
    cout << changeFive(a) + changeFive(b) << "\n";
    return 0;
}
*/