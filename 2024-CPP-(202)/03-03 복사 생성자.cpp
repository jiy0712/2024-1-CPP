#include <iostream>
#include <string.h>

using namespace std;


class Student {
public:

	Student(int hakbun, char* name) : hakbun_(hakbun) {
		//'/0'가 들어가기 위해 공간 하나 더 추가
		int length = strlen(name);
		name_ = new char[length + 1];

		strcpy(name_, name);
		cout << "생성자 호출 완료" << endl;
	}

	//소멸자 : 객체가 소멸 될 때 (메모리에서 지워질 때) 호출되는 함수
	~Student(void) {
		delete[]name_;
		cout << "소멸자 호출 완료" << endl;

	}

	//클래스의 멤버를 출력
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << " ";
	}


private:
	int hakbun_;
	char* name_;
};
int main(void) {
	//일반적인생성자
	Student stu = Student(2213, (char*)"조수빈");

	//복사생성자
	Student su2 = stu;
	
	//TODO : 얕은 복사로 인하여 같은 주소(stu.name_, stu2.name_)에서 두 번 delete 시도

	return 0;
}