#include <iostream>
#include <string.h>

using namespace std;


class Student {
public:

	//TODO : �����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����
	Student(int hakbun, char* name) : hakbun_(hakbun){
		//'/0'�� ���� ���� ���� �ϳ� �� �߰�
		int length = strlen(name);
		name_ = new char[length + 1];

		strcpy(name_, name);
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
	Student* stu = new Student(2213, (char*)"������");
	stu->show();

	delete stu;

	return 0;
}