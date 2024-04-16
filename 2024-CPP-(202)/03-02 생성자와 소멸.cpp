#include <iostream>
#include <string.h>

using namespace std;


class Student {
public:

	//TODO : 생성자에서 동적할당을 한 메모리 공간을 지울 수 없다
	Student(int hakbun, char* name) : hakbun_(hakbun){
		//'/0'가 들어가기 위해 공간 하나 더 추가
		int length = strlen(name);
		name_ = new char[length + 1];

		strcpy(name_, name);
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
	Student* stu = new Student(2213, (char*)"조수빈");
	stu->show();

	delete stu;

	return 0;
}