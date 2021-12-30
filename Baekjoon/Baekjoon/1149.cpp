//
//#include <iostream> //RGB 거리
//using namespace std;
//
//int RGB[3], n, r, g, b;
//
//int min(int a, int b) //최솟값 찾아주는 함수
//{
//	return a > b ? b : a;
//}
//
//int main(void)
//{
//	cin >> n; // n 입력
//	for (int i = 0; i < n; i++) // n 층만큼 반복
//	{
//		int temp_r = RGB[0], temp_g = RGB[1], temp_b = RGB[2];
//        ////각 temp값은 마지막으로 칠한 색깔에 따른 누적 최솟값
//		cin >> r >> g >> b;
//		RGB[0] = r + min(temp_g, temp_b);
//        ////지금 빨간색으로 칠하면서 temp_blue, temp_green 누적 최솟값 중 최솟값과 더한다. 
//		RGB[1] = g + min(temp_r, temp_b);
//		RGB[2] = b + min(temp_r, temp_g);
//
//	}
//	cout << min(RGB[0], min(RGB[1], RGB[2])) << endl;
//}