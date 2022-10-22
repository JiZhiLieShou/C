#include <stdio.h>
#include <string.h>
//凯撒
void entranslocation(char string[])
{
  printf("请输入密匙（数字如1/2/3等等）：");
  const int n;
  scanf("%d", &n);
  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] >= 'a' && string[i] <= 'z')
      string[i] = (string[i] + n >= 'z' ? string[i] + n - 26 : string[i] + n);
  }
  printf("密文：%s", string);
}

void detranslocation(char string[])
{
  printf("请输入密匙（数字如1/2/3等等）：");
  const int n;
  scanf("%d", &n);
  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] >= 'a' && string[i] <= 'z')
      string[i] = (string[i] - n >= 'z' ? string[i] - n - 26 : string[i] - n);
  }
  printf("明文：%s", string);
}

//维吉尼亚
void envigenere(char string[])
{
  int a, b, j = 0;
  char y[100];
  printf("请输入密钥（一段文字）:");
  char key[100];
  scanf("%s", key);

  a = strlen(string);
  b = strlen(key);
  strlwr(key);

  if (a > b)
  {
    for (int i = 0; i < a; i++)
    {
      y[i] = (string[i] + key[j] - 97 - 97) % 26 + 97;
      j++;
      if (j >= b)
      {
        j = 0;
      }
    }
  }
  else
  {
    for (int i = 0; i < a; i++)
    {
      y[i] = (string[i] + key[j] - 97 - 97) % 26 + 97;

      j++;
    }
  }
  printf("密文：%s", y);
}

void devigenere(char string[])
{
  int a, b, j = 0;
  char y[100];
  printf("请输入密钥（一段文字）:");
  char key[100];
  scanf("%s", key);

  a = strlen(string);
  b = strlen(key);
  strlwr(key);

  if (a > b)
  {
    for (int i = 0; i < a; i++)
    {
      if (string[i] < 97)
      {
        y[i] = (string[i] - (key[j] - 32) + 26) % 26 + 65;
      }
      else
      {
        y[i] = (string[i] - key[j] + 26) % 26 + 97;
      }
      j++;
      if (j >= b)
      {
        j = 0;
      }
    }
  }
  else
  {
    for (int i = 0; i < a; i++)
    {
      y[i] = (string[i] - key[j] + 26) % 26 + 97;
      j++;
    }
  }
  printf("明文：%s", y);
}

void main()
{
  printf("请输入一段文字：");
  char str[100];
  gets(str);
  printf("输入方式（凯撒加密：1   凯撒解密：2   维吉尼亚加密：3   维吉尼亚解密：4）：");
  int i;scanf("%d", &i);
  switch (i)
  {
  case 1:
    entranslocation(str);
    break;
  case 2:
    detranslocation(str);
    break;
  case 3:
    envigenere(str);
    break;
  case 4:
    devigenere(str);
    break;
  default:
    break;
  }
}
