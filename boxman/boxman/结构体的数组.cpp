#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[16];
	int age;
};

int main5(void) {
	struct student s[2] = { 0 };

	printf("请输入第一个学生的姓名: \n");
	scanf_s("%s", s[0].name, sizeof(s[0].name));
	printf("请输入第一个学生的年龄: \n");
	scanf_s("%d", &s[0].age);

	printf("第一个学生的姓名和年龄是: %s, %d岁\n", s[0].name, s[0].age);

	//结构体的小秘密, 结构体变量值之间可以直接赋值
	s[1] = s[0];
	memcpy(&s[1], &s[0], sizeof(struct student));
	printf("第二个学生的姓名和年龄是: %s, %d岁\n", s[1].name, s[1].age);

	system("pause");
	return 0;
}