#include <iostream>
using namespace std;

//PPT10 수업시간 예제 : 2+a를 위한 +연산자 함수를 프렌드로 작성

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	friend Power operator+(int op1, Power op2)

};

void Power::show() {
	cout << "kick = " << kick << ',' << "punch=" << punch << endl;
}

//연산자 중복 함수
Power operator+(int op1, Power op2) {

	Power tmp;//임시로 값을 저장해주는 객체
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;

}

int main(void) {

	Power a(3, 5), b;

	a.show();
	b.show();
	b=2+a;
	a.show();
	b.show();


}