#include <iostream> // Z
#include <math.h>
using namespace std;

//아이디어 https://blog.naver.com/0_0yeggy/222107561622 https://simsimjae.tistory.com/191

int n, r, c;

int result = 0;

void z(int startRow, int startCol, int num)
{
    //좌표가 일치하면 그 때의 결과값 출력 후 종료
    if (r == startRow && c == startCol)
    {
        cout << result << '\n';
        exit(0);
    }

    if (num == 1)
    {
        result++;
        return;
    }

    //찾으려는 좌표 r, c가 나눈 사각형의 범위 내에 속하지 않는다면
    if (((startRow <= r && r < startRow + num) && (startCol <= c && c < startCol + num)) == 0)
    {
        result += num * num; //사각형 면적 만큼 바로 곱해서 더함
        return;
    }

    z(startRow, startCol, num / 2); //1사분면
    z(startRow, startCol + num / 2, num / 2); //2사분면
    z(startRow + num / 2, startCol, num / 2); //3사분면
    z(startRow + num / 2, startCol + num / 2, num / 2); //4사분면
}

/*
Example 2^3 일 때

0 0 4
    0 0 2
    0 2 2
    2 0 2
    2 2 2
0 4 4
    0 4 2
    0 6 2
    2 4 2
    2 6 2
4 0 4
    4 0 2
    4 2 2
    6 0 2
    6 2 2
4 4 4
    4 4 2
    4 6 2
    6 4 2
    6 6 2
*/

int main()
{
    cin >> n >> r >> c;

    z(0, 0, pow(2, n));
}