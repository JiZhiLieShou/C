#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[10] = {0};
    system("shutdown -s -t 60");
again:
    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
    scanf("%s", input);
    if (0 == strcmp(input, "������"))
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}


