/*
Ϊ�˼��ٿ������ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
    �������ε�ʱ�򣬲�������Ҫѹջ�ġ�
    �������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
*/
#include<stdio.h>
struct book
{
    //�ṹ��ĳ�Ա��������
    char name[20];
    char id[20];
    int price;
}s1,s2;

int main(){
    struct book philosophy={"C����","C12682378",20};
    //�ṹ�������.��Ա��
    printf("������%s\n",philosophy.name);
    printf("��ţ�%s\n",philosophy.id);
    printf("���ۣ�%d\n",philosophy.price);
    return 0;
}