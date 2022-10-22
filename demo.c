/*
“ && ”的短路特性：左边为假，右边不用算
“ || ”的短路特性：左边为真，右边不用算
*/
#include <stdio.h>
int main()
{
    int i = 0,a=1,b=2,c =3,d=4;
    //i = a++ && ++b && d++;
    i = a++ || ++b || d++;
    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
    return 0;
}

// 1 3 3 4
// 2 2 3 4


