#include<stdio.h>
#include<string.h>
char* strlong(char* str1, char* str2);
int main()
{
	char str1[30], str2[30], * str;
	gets(str1);
	gets(str2);
	str = strlong(str1,str2);
	//for (int i = 0; i < 30; i++) {
	//	printf("%c",*str[])
	//}
	printf("str address = %p\n", str);
	printf("strlong = %s\n", str);
	          //这里不能用*str
	return 0;
}
char* strlong(char* str1, char* str2) {
	printf("str1 address = %p\n", str1);
	printf("str2 address = %p\n", str2);

	if (strlen(str1) >= strlen(str2)){
		return str1;
	}
	else {
		return str2;
	}
}
