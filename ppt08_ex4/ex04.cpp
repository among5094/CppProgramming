#include <iostream>//ex04번
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius); {this->radius = radius; } //인자가 1개인 생성자
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