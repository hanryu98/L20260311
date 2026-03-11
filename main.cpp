#include <iostream>

using namespace std;


	// 문자열 갯수 세기
	// 문자열 중에서 특정 문자를 특정문 바꾸기
	// 문자열 중에서 특정 문자 위치 찾기
	int StringLength(char*C)

	{
		for(int i = 0; ; i++)
			if (C[i] == '\0')
			{
				return i;
			}
	}



	int main()
{

	int A[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	char Hello[6] = { 'H', 'E', 'L', 'L','O','\0' };
	
	Hello[3] = 'J';

	char* C= Hello;


	cout << StringLength(C) << endl;
	cout << C << endl;
	cout << C[3] << endl;


	return 0;
}