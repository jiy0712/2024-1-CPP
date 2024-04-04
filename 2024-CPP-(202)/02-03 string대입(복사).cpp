#include <stdio.h>
#include <cstdbool>

int main(void) {
	char str[30] = "develop hungry";
	char str2[30];
	//str에 있는 내용을 str2에 복사

	for (int i = 0; i <= 29; i++) {
		char str2 = str[i];
	}
	printf("%s", str2);
	//널문자를 안주어서 나오긴 한데 한자가 나온다.
	
	//str에 있는 내용을 str2에 복사
	//"\0" 을 만날때까지
	int i = 0;
	for (; str[i] != '\0'; i++) {
		str2[i] = str[i];
	}
	str2[i] = str[i]; //널문자('\0') 복사 , 마지막은 널문자로 끝나야한다.
	printf("%s\n", str2);

	str2[0] = str[0];
	str2[1] = str[1];
	str2[2] = str[2];
	str2[3] = str[3];
	str2[4] = str[4];
	str2[5] = str[5];
	str2[6] = str[6];
	str2[7] = str[7];
	str2[8] = str[8];
	str2[9] = str[9];
	str2[10] = str[10];
	str2[11] = str[11];
	str2[12] = str[12];
	str2[13] = str[13];
	str2[14] = str[14];
	str2[15] = str[15];

	printf("%s\n", str2);


}