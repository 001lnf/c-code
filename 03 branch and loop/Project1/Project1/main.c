#define _CRT_SECURE_NO_WARNINGS
//if(表达式)
//语句

#include <stdio.h>

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 0)
//		printf("%d是偶数", num);
//	else
//		printf("%d是奇数", num);
//	return 0;
//}
//一个 if 最多只能绑定一个 else

//练习输入一个人的年龄
//如果年龄 < 18岁，打印"少年"
//	如果年龄在18岁至44岁打印"青年"
//	如果年龄在45岁至59岁打印"中老年"
//	如果年龄在60岁至89岁打印"老年"
//	如果90岁以上打印"老寿星"
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年");
//	}
//	else if (age <= 44)
//	{
//		printf("青年");
//	}
//	else if (age <= 59)
//	{
//		printf("中老年");
//	}
//	else if (age <= 89)
//	{
//		printf("老年");
//	}
//	else
//		printf("老寿星");
//	return 0;
//}
//这里要区分if else 和if else if
//if else if是从上往下判断，找到第一个满足条件就直接结束，后面条件不再判断；
//多个独立 if（不推荐）
//无论前面是否命中，所有 if 条件都会完整判断一遍，运算更多；
//else总是与最近的if匹配




//关系操作符<,>,<=,>=,==,!=
//0表示假，非0表示真
//多个关系运算符不宜连用，
//比如我要表示a<b<c,直接连用从左到右运算，a<b,返回0和1，接下来就是0或1和k的比较
//	可以a<b&&b<c,这样表示
//
//条件操作符，也叫做三目操作符
//_a_?_b_:_c_,主要看a，若a为真，b就是结算结果，a为假，c就是计算结果
//
//
//逻辑操作符&& ||  ！

//&&和||的短路，对于&&来说只要第一个不成立，后面的就不会再判断了
//对于||来说只要第一个成立，后面就不会再判断了
//
//练习，闰年的判断
//首先要知道闰年的判断规则，有两条，满足其中一条即可
//1，能被400整除的是闰年
//2，能被四整除但是不能被100整除的是闰年

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("%d是闰年", year);
//	}
//
//
//	else if (year % 400 == 0)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//		printf("%d是平年", year);
//		
//	return 0;
//}


//练习
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//a = 1
//b = 2
//c = 3
//d = 4  先执行第一条语句，a++，a=0后面的直接不执行了，所以这道题很坑
//
//switch和default
//switch (expression)
//{
//case value1: statement
//case value2: statement
//default: statement
//}
//value只能是整数，所以这个expression的返回值也只能是整数，而且每个case后面都必须添加break
//
//练习：输入一个整数，计算除三之后的余数
//int main()
//{
//	int q = 0;
//	scanf("%d", &q);
//	
//		switch (q % 3)
//		{
//case 0:
//	printf("余数是0");
//	break;
//case 1:
//	printf("余数是1");
//	break;
//case 2:
//	printf("余数是2");
//		break;
//	}
//	
//	return 0;
//}
//如果没有break，会导致语句继续向下执行

//练习
//输⼊⼀个1~7的数字，打印对应的星期⼏
//例如：
//输⼊：1 输出：星期⼀
//输⼊：2 输出：星期⼆
//输⼊：3 输出：星期三
//输⼊：4 输出：星期四
//输⼊：5 输出：星期五
//输⼊：6 输出：星期六
//输⼊：7 输出：星期天
//int main()
//{
//	int week = 0;
//	while(1)
//	{
//		scanf("%d", &week);
//		switch (week)
//		{
//		case 1:
//			printf("星期一\n");
//				break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//		default:
//			printf("输入错误请重新输入\n");
//			break;
//
//		}
//
//	}
//	
//	
//
//	return 0;
//}
//如果需求发⽣变化，变为：
//1. 输⼊1 - 5，输出的是“⼯作⽇”;
//2. 输⼊6 - 7，输出“休息⽇”

//int main()
//{
//	int day = 0;
//	while (1)
//	{
//		scanf_s("%d", &day);
//		switch (day)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//			printf("输入错误请重新输入\n");
//			break;
//
//		}
//	}
//}


//while循环介绍
//练习：在屏幕上打印 1~10 的值
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//
//	}
//
//	return 0;
//}
//练习
//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//例如：
//输⼊：1234，输出：4 3 2 1
//输⼊：521，输出：1 2 5

//想要得到n的最低位，可以一遍一遍得模10，模一次得个位，模两次得十位
//可以用除10去掉最低位，然后模10就是第二位
//打印第一位就是模10
//打印第二位就是先除10，再模10
//以此类推，
//11可以除两次，111可以除三次

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		printf("%d ", a%10);
//		a/= 10;
//	}
//
//	return 0;
//
//}

//for循环
//for (表达式1; 表达式2; 表达式3)
//
//表达式1 ⽤于循环变量的初始化
//表达式2 ⽤于循环结束条件的判断
//表达式3 ⽤于循环变量的调整
//
//练习：在屏幕上打印1~10的值
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//练习：计算1~100之间3的倍数的数字之和
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//
//	}
//	printf("%d", sum);
//	return 0;
//}


//do while 循环
//首先while和for，都是先判断是否满足条件再进入循环，虽然我觉得for的比较扯淡，for初始化之后要判断是否满足条件
//而dowhile 循环是直接进入循环，每执行一次就会判断条件
// 
// 
//练习：在屏幕上打印 1~10 的值
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//这里要有分号
//	return 0;
//}

//break和continue
//
//break 的作⽤是⽤于永久的终⽌循环，只要 break 被执⾏，直接就会跳出循环，继续往后执
//⾏。
//continue 的作⽤是跳过本次循环 continue 后边的代码，在 for 循环和 while 循环中有所
//差异的。

//练习
//找出100~200之间的素数，并打印在屏幕上。
//注：素数⼜称质数，只能被1和本⾝整除的数字。
//首先要生产出100-200之间的数字，用循环解决
//要判断一个数字是否是素数，可以用2-i-1的一个一个去整除，要是没有能让其整除的就是素数，也是用循环来解决

//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if(flag==1)
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//



//goto语句和跳转标号



//练习题
//写⼀个猜数字游戏
//游戏要求：
//1. 电脑⾃动⽣成1~100的随机数
//2. 玩家猜数字，猜数字的过程中，根据猜测数据的⼤⼩给出⼤了或⼩了的反馈，直到猜对，游戏结束
//
//
//首先要解决随机数的生成，c语言提供了一个函数叫做rand，，需要头文件stdlib.h
//int rand();生成的范围在0-32676
//测试一下啊
#include <stdlib.h>
#include<time.h>
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
//可见虽然数字是随机的，但是生成之后再次运行，就是固定的，是伪随机数，
//基于种子生成的随机数，现在要让这个种子是随机的
//c语言提供一个函数srand，srand可以设置这个种子seed，void srand(unsigned int seed)
//要让种子随机变化，变换的时间作为种子最好不过了
//使用time函数,需要头文件time.h
//time_t time(time_t* timer);
//time函数会返回当前的日历时间，其实返回的是1970，1，1，0，0，0到现在程序运行的时间差值
//单位是秒，返回类型是time_h,本质是整形类型
//传 NULL：只返回时间戳，不存入变量
//传变量地址：时间戳既存入该变量，同时函数返回


//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
//这个时候就完成了随机数的生成


//所以现在来生成随机数
//要生成1-100的随机数，直接%100就好了

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int r = rand() % 100 + 1;
//	int g = 0;
//
//	while (g != r)
//	{
//		scanf("%d", &g);
//		if (g < r)
//		{
//			printf("猜小了\n");
//		}
//
//
//		else if (g > r)
//		{
//			printf("猜大了\n");
//		}
//
//
//
//	}
//	while(g==r)
//	{
//		printf("猜对了\n");
//		break;
//	}
//
//
//	return 0;
//}
//上面是自己写的，能实现功能，下面看下写的好的
void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");

		}
		else if (guess >r)
		{
			printf("猜大了\n");

		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}
void menu()
{
	printf("*********************\n");
	printf("*******  1.play  ****\n");
	printf("*******  0.exit   ***\n");
	printf("*********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("请重新选择");
				break;
		}
	} while (input);




	return 0;
}






