#include <iostream>

using namespace std;


	int main()
	{


		//heap 동적으로 int 사이즈 만들고 주소 반환
		int* Mytexture = new int;

		//포인터 변수의 주소의 heap 영역 반환
		delete Mytexture;
		Mytexture = nullptr


		int Size = 100;
		//computer memory unmanaged language -> human managed language
		//heap 동적으로 int 100개짜리 배열 사이즈 만들고 주소 반환
		int* MyStaticMesh = new int[Size]; 

		MyStaticMesh[3] = 10;

		//포인터 변수의 주소부터 할당 받은 배열 크기 만큼의 heap 영역 반환
		//delete MyStaticMesh; 첫번째만 반환하고 나머지는 잊어버림
		delete MyStaticMesh;
		MyStaticMesh = nullptr;

		if (MyStaticMesh)
		{

		}

		return 0;

	}