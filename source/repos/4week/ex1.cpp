//cout과 << 연산자포함
//cpp 4주차 0328 화요일 예제1번
//컴파일 컨F7, 실행 컨F5

#include <iostream>

class C {
	int x;
};

int main() {

	C c;
	c.x = 1234;

	return 0;
}

//오류: private멤버에서 엑세스할 수 없습니다.<< 라고 뜸
