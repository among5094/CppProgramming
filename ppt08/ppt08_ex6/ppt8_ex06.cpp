#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c);
	Circle(){radius=1; } //인자가 1개인 생성자
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& rfdonut) {

}
int main() {

	cout
		Circle donut; //객체 생성
	readRadius(donut);
	cout << "donut의 면적 = " << donut.getArea() << endl;

}