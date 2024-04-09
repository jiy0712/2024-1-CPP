#include <iostream>
#include <string>

using namespace std;

struct Strudent {
	int hakbun_;
	string name_;
};
int main(void) {
	struct Strudent jisu;
	//구조체는 default가 public이다.
	jisu.hakbun_ = 2202;
	jisu.name_ = "나지수";

	return 0;
}