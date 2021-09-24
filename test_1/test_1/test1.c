# define _CRT_SECURE_NO_WARNINGS 1
// fn f7 -编译
//c语言规定，变量要定义在当前代码块的最前端
#include <stdio.h>

//char 字符类型
//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数-小数
//%p - 以地址的形式打印
//%x - 打印16进制数字
//%o - ...
// 								字节数 byte		比特位
//char		- 字符数据类型		1				8
//short int	- 短整型				2				16
//int		- 整型				4				32
//long		- 长整型				4/8				32/64
//long long - 更长的整型			8				64
//float		- 单精度浮点数		4				32
//double	- 双精度浮点数		8				64

//有没有字符串类型？
//long 为什么有4有8？ c语言标准规定 sizeof(long)>=sizeof(int)

//定义变量：
//变量类型：局部 全局

//变量的作用域scope和生命周期
//局部变量的作用域是变量所在的局部范围
//全局变量的作用域是整个工程

//生命周期
//全局变量的生命周期是整个程序的生命周期
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束

int main()
{
	//未声明标识符
	//声明extern外部符号的
	extern int g_val;
	printf("g_val --%d\n", g_val);
	return 0;
}


//int global = 20;
//void test()
//{
//	printf("test() -- %d\n", global);
//}
//int main()
//{
//	printf("%d\n", global);
//	test();
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	{
//		int num2 = 10;
//		printf("num1 = %d\n", num);
//		printf("num2 = %d\n", num);
//	}
//	printf("num1 = %d\n", num);
//	return 0;
//}

//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	//int sum = 0;
//	//c语言规定，变量要定义在当前代码块的最前端
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//int mian()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//}


//int num2 = 20;//全局变量 - 定义在代码块{}之外的变量 
//int main()
//{
//	int num = 10;    //局部变量 - 定义在代码块内部的变量
//	int num2 = 100;  //局部变量和全局变量的名字不要相同，容易误会产生bug
//					 //当全局变量和局部变量名字相同时，局部变量优先
//	printf("%d\n", num2);
//	return 0;
//}





//int main()
//{
//	short age = 20; //向内存申请两个字节用来存放20
//	float weight = 95.6f; //默认double f表示是float类型
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main() // 主函数-程序的入口- main函数有且只有一个
//{
//	char ch = "A";//内存申请一块空间
//	int age = 20;
//	float f = 5.0;
//	double d = 3.14;
//	printf("%c\n", ch);//%c -- 打印字符格式的数据
//	printf("%d\n" , age);//%d --打印整型十进制数据
//	printf("%f\n", f);
//	printf("%lf\n", d);//%lf -- 打印双精度浮点数
//	return 0; //返回 0
//}

