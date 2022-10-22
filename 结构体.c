/*
为了减少开销：结构体传参的时候，要传结构体的地址。
    函数传参的时候，参数是需要压栈的。
    如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
*/
#include<stdio.h>
struct book
{
    //结构体的成员（变量）
    char name[20];
    char id[20];
    int price;
}s1,s2;

int main(){
    struct book philosophy={"C语言","C12682378",20};
    //结构体变量名.成员名
    printf("书名：%s\n",philosophy.name);
    printf("书号：%s\n",philosophy.id);
    printf("定价：%d\n",philosophy.price);
    return 0;
}