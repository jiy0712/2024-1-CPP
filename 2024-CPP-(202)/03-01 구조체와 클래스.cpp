#include <iostream>
#include <string>

using namespace std;

class Strudent {
	int hakbun_;
	string name_;
};
int main(void) {
	Strudent jisu;
	//클래스는 default가 private이다.
	jisu.hakbun_ = 2202;
	jisu.name_ = "나지수";

	return 0;
}