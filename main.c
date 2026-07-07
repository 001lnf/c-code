#include <stdio.h>

//第一个c语言程序
/*int main()
{
	printf("Hello C\n");

	return 0;

}*/
//运行快捷键ctrl f5
//快速注释快捷键CTRL k+c
//取消注释快捷键CTRL k+u

//printf的d c lf打印类型
/*int main()
{
	int a = 100;
	printf("%d\n", a);
	printf("%c\n", 'q');
	printf("%lf\n", 3.14);
	return 0;
}*/

/*常用ascll码值，以及怎么用数字代替想打印的ascll码值
0是48
A是65，a是65+32=97
\n是10,用c来打印ascll码值
int main()
{
	printf("%c", 65);
	printf("%c", 10); printf("%c", 10);
	printf("%c", 55);
	return 0;
}*/

//字符串和\0
//"dadada"多个字符组合起来用双引号的是字符串用s来打印
//int main()
//{
//	printf("%s\n", "asdffjw"); printf("dadwds");
//	return 0;
//	
//}
//字符串末尾隐藏了\0,这个\0也是一个字符，而且是字符串的结束标志
//可以把字符串放入字符串数组中观察
#define _CRT_SECURE_NO_WARNINGS 1
/*int main()
{
	char arr1[] = { 'a','s','d','\0'};
	char arr2[] ="abc";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}*/
//因为在a数组中没有\0作为结束标志，打印玩asd后还会显示随机值
 
//常用转义字符
//\n,\ddd,八进制\xdd,16进制，\0
int main()
{
	printf("%c\n", '\110');
	printf("%c", '\x30');
	return 0;
}
//先转换成ascll码值，再转换成对应的值

