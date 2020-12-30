//#include <iostream> //¹®ÀÚ¿­ Æø¹ß
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	vector<char> resultVector; //stored result
//	
//	string original; //original str
//	
//	string specific; //bomb str
//	char last; //bomb last char
//	int specSize; // bomb size
//
//	cin >> original;
//	cin >> specific;
//
//	specSize = specific.size();
//	last = specific[specSize - 1];
//
//	for (int i = 0; i < original.size(); i++)
//	{
//		if (last == original[i] && i >= specSize - 1) // if equal the last wording
//		{
//			for (int j = specSize - 2; j >= 0; j--)
//			{
//				if (resultVector.back() != specific[j]) // if dismatched bomb wording
//				{
//					i -= j;
//					i += 2;
//					break;
//				}
//				resultVector.pop_back();
//			}
//		}
//		else
//			resultVector.push_back(original[i]);
//	}
//
//	if (resultVector.size() == 0)
//		cout << "FRULA" << endl;
//	else
//		for (int i = 0; i < resultVector.size(); i++)
//			cout << resultVector[i];
//
//	return 0;
//
//}
// 
