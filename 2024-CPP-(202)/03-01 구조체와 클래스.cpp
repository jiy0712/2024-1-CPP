#include <iostream>
#include <string>

using namespace std;

struct Strudent {
	int hakbun_;
	string name_;
};
int main(void) {
	struct Strudent jisu;
	//����ü�� default�� public�̴�.
	jisu.hakbun_ = 2202;
	jisu.name_ = "������";

	return 0;
}