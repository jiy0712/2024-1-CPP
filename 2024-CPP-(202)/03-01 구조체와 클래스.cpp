#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڴ� ��ȯ���� ����. (��ȯ�� = ����Ÿ��)
	Student(int hakbun, string name) {
		hakbun = hakbun;
		name_ = name;
	}
private:
	int hakbun_;
	string name_;
};
int main(void) {
	Student jisu = Student(2202, "������");
	return 0;
}