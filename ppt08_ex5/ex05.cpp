#include <iostream>
using namespace std;

//참조 리턴
char& find(char s[], int index) {
	return s[index]; //배열s의 index를 리턴함
}

int main() {
	char name[] = "Milk";
	cout << name << endl;

	find(name, 0) = 'S'; //name[0]을 S로 변경
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't'; 
	cout << name << endl;
}