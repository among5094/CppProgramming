#include <iostream>
using namespace std;

//PPT10 수업시간 예제_실습, Power클래스에 !연산자작성

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator++(int x);

};

void Power::show() {
	cout << "kick = " << kick << ',' << "punch=" << punch << endl;
}

//연산자 중복 함수
Power Power::operator ++(int x) {

	Power tmp = *this;//임시로 값을 저장해주는 객체
	kick++;
	punch++;
	return tmp;

}

int main(void) {

	Power a(3, 5), b;

	a.show();
	b.show();
	b.a++;
	a.show();
	b.show();


}