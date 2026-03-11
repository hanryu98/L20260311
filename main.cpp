#include <iostream>

using namespace std;


	int main()
	{
		//숫자 입력 받아서 그걸 크기 (Size)로 숫자 배열을 만들어서
		//1부터 크기까지 초기화 하고 출력하는 프로그램을 만들어보세요.
		
		int Size = 0; // Size 선언
		int* P = nullptr;

		cin >> Size; // 입력 받을 Size

		int* P= new int[Size]; // heap 배열을 Size 크기 만큼 int, 시작 번지(int*)

		for (int i = 0; i < Size; i++)
		{
			P[i] = i + 1;

		}

		for (int i = 0; i < Size; i++)
		{
			cout << *(P + i) << ", ";
		}
		cout << endl;

		//heap에 있는 배열을 반환
		delete[]P;
		P = nullptr;
		

		return 0;

	}