#include <iostream> 
using namespace std;

//클래스 Circle의 선언부
class Circle {
private:
	int radius; //디폴트 접근 지정자: private
public:
	Circle(); //기본 생성자(디폴트 생성자)가 있으므로 배열 선언 가능
	Circle(int r); //인자가 1개인 생성자
	~Circle(); //소멸자
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {

	cout << "소멸자 실행 radius = " << radius << endl;
} 

//이거 main 함수 위에 써야됨
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}


int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getArea() << endl;
}


