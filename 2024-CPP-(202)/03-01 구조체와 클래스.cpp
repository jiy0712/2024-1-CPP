#include <iostream>
#include <string>

using namespace std;

class Strudent {
	int hakbun_;
	string name_;
};
int main(void) {
	Strudent jisu;
	//Ŭ������ default�� private�̴�.
	jisu.hakbun_ = 2202;
	jisu.name_ = "������";

	return 0;
}