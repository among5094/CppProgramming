//cpp 3주차 0322 화요일 예제7번 string 클래스를 이용한 문자열 입력 다루기

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string song("I don't think that i like her");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "을 부른 가수는";
	cout << "힌트 : 첫 글자는 " << elvis[0] << ")?"; 

	getline(cin, singer);

	if (singer == elvis)
		cout << "맞았습니다."
	else
		cout << "틀렸습니다." + elvis + "입니다." << endl; //+로 문자열 연결

}

