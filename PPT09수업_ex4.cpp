#include <iostream>
using namespace std;

//PPT10 수업시간 예제4: 연산자 중복

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator+(Power op2);

};

void Power::show() {
	cout << "kick = " << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2) {

	Power tmp;//임시로 값을 저장해주는 객체
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;

}

int main(void) {

	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
		
}