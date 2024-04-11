#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڴ� ��ȯ���� ����. (��ȯ�� = ����Ÿ��)

	Student() {
		this -> hakbun_ = 2222;
		name_ = "swag";
	}

	// ������� �ʱ�ȭ : ��ü ������ ���ÿ� ������� ...
	// const : ���� ��������� �ʱ�ȭ �� �� �ִ�.
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name){}

	//Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << " ";
	}

	
private:
	int hakbun_;
	string name_;
};
int main(void) {
	//���� �Ҵ� : �޸𸮴� heap���� �Ҵ�. ����(��Ÿ��) �� �޸� ũ�Ⱑ ������
	Student* stu = new  Student[3]{
		{2202, "������"},
		{2203, "������"},
		{2215, "choo"}
	};
	
	stu[0].show();
	stu[1].show();
	stu[2].show();

	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}

	//�迭�� �����Ҵ� ����
	delete[] stu;
	return 0;
}