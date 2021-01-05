#include <iostream> // Z
#include <math.h>
using namespace std;

//���̵�� https://blog.naver.com/0_0yeggy/222107561622 https://simsimjae.tistory.com/191

int n, r, c;

int result = 0;

void z(int startRow, int startCol, int num)
{
    //��ǥ�� ��ġ�ϸ� �� ���� ����� ��� �� ����
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

    //ã������ ��ǥ r, c�� ���� �簢���� ���� ���� ������ �ʴ´ٸ�
    if (((startRow <= r && r < startRow + num) && (startCol <= c && c < startCol + num)) == 0)
    {
        result += num * num; //�簢�� ���� ��ŭ �ٷ� ���ؼ� ����
        return;
    }

    z(startRow, startCol, num / 2); //1��и�
    z(startRow, startCol + num / 2, num / 2); //2��и�
    z(startRow + num / 2, startCol, num / 2); //3��и�
    z(startRow + num / 2, startCol + num / 2, num / 2); //4��и�
}

/*
Example 2^3 �� ��

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