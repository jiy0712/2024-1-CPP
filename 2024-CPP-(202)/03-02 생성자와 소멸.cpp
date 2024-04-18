#include <iostream>
#include <string.h>

using namespace std;


class Student {
public:

	Student(int hakbun, char* name) : hakbun_(hakbun){
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
	Student* stu = new Student(2213, (char*)"조수빈");
	cout << "I'm still hungry - 거스 히딩크" << endl;
	delete stu;

	cout << "It ain't over, till it's over - 요기 배라" << endl;

	return 0;
}