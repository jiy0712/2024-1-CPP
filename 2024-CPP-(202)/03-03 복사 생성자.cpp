#include <iostream>
#include <string.h>

using namespace std;


class Student {
public:

	Student(int hakbun, char* name) : hakbun_(hakbun) {
		//'/0'�� ���� ���� ���� �ϳ� �� �߰�
		int length = strlen(name);
		name_ = new char[length + 1];

		strcpy(name_, name);
		cout << "������ ȣ�� �Ϸ�" << endl;
	}

	//�Ҹ��� : ��ü�� �Ҹ� �� �� (�޸𸮿��� ������ ��) ȣ��Ǵ� �Լ�
	~Student(void) {
		delete[]name_;
		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;

	}

	//Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << " ";
	}


private:
	int hakbun_;
	char* name_;
};
int main(void) {
	//�Ϲ����λ�����
	Student stu = Student(2213, (char*)"������");

	//���������
	Student su2 = stu;
	
	//TODO : ���� ����� ���Ͽ� ���� �ּ�(stu.name_, stu2.name_)���� �� �� delete �õ�

	return 0;
}