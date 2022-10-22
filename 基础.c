/*
预处理指令：
	define--不是关键字
	include--不是关键字
''中的是一个字符
""中的是一串字符
单目运算符：一个操作数
双目运算符：两个操作数
三目运算符：表达式1? 表达式2:表达式3
++a:先++，后使用
a++:先使用，后++	//b=a++	b=++a
逗号运算符：(表达式1,表达式2,表达式3,表达式4)【代码从前到后依次执行，最后一个表达式结果为返回值】
寄存器关键字：register	
	register int num=181;  //建议num的值放在寄存器中
	（目前编译器会自动将大量频繁使用的数据自动放在寄存器中，提升效率）
static:
	静态的
	修饰局部变量：
		改变了局部变量的生命周期（本质上是改变了变量的存储类型）-- 由栈区改为静态区，和全局变量一个生命周期
	修饰全局变量：
		使得这个全局变量只能在自己所在的源文件(.c)内部可以使用，其他源文件不能使用！
		全局变量在其他源文件内部可以被使用：全局变量具有外部链接属性;
		全局变量被static修饰之后-->内部链接属性，其他源文件就不能链接到这个静态的全局变量了！
	修饰函数:
		使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用!
		本质上：将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样！）
struct:结构体关键字
typedef:
	类型重定义 类型重命名	
	typedef unsigned int u_int;
union:联合体（共用体）
void: 无-空
volatile：神秘~~~
逗号表达式：从左往右依次计算，整个表达式的结果事最后一个表达式的结果。	//int d = (a = b + 2, c = a - 4, b = c + 2)
malloc:
该函数返回一个指针 ，指向已分配大小的内存。如果请求失败，则返回 NULL。
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define add(x,y) (x+y)	//define定义宏，宏是有参数的，可被替换

typedef unsigned int u_int;
#define x 5

int z = 7;

enum SEX
{
	male,
	female,
	secret
};

int main()
{
	int y = 3;
	u_int d=4;
	enum SEX s = female;

	printf("%d", s); //枚举常量
	printf("%d", x); //自定义标识符
	printf("%d", z); //全局变量
	printf("%d", y); //局部变量
	printf("%d", d); //类型重命名

	return 0;
}
