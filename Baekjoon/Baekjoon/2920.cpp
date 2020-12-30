//#include <iostream> //À½°è
//using namespace std;
//
//int main()
//{
//	int arr[8];
//
//	int check = 0;
//	// 1 ascending 2 descending 3 mixed
//
//	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
//	{
//		cin >> arr[i];
//		if (check != 3 && arr[i] == i + 1 && arr[0] == 1)
//			check = 1;
//		else if (check != 3 && arr[i] == 8 - i && arr[0] == 8)
//			check = 2;
//		else
//			check = 3;
//	}
//
//	if (check == 1)
//		cout << "ascending" << endl;
//	else if (check == 2)
//		cout << "descending" << endl;
//	else
//		cout << "mixed" << endl;
//}