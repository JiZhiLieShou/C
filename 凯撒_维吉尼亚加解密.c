#include <stdio.h>
#include <string.h>
//����
void entranslocation(char string[])
{
  printf("�������ܳף�������1/2/3�ȵȣ���");
  const int n;
  scanf("%d", &n);
  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] >= 'a' && string[i] <= 'z')
      string[i] = (string[i] + n >= 'z' ? string[i] + n - 26 : string[i] + n);
  }
  printf("���ģ�%s", string);
}

void detranslocation(char string[])
{
  printf("�������ܳף�������1/2/3�ȵȣ���");
  const int n;
  scanf("%d", &n);
  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] >= 'a' && string[i] <= 'z')
      string[i] = (string[i] - n >= 'z' ? string[i] - n - 26 : string[i] - n);
  }
  printf("���ģ�%s", string);
}

//ά������
void envigenere(char string[])
{
  int a, b, j = 0;
  char y[100];
  printf("��������Կ��һ�����֣�:");
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
  printf("���ģ�%s", y);
}

void devigenere(char string[])
{
  int a, b, j = 0;
  char y[100];
  printf("��������Կ��һ�����֣�:");
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
  printf("���ģ�%s", y);
}

void main()
{
  printf("������һ�����֣�");
  char str[100];
  gets(str);
  printf("���뷽ʽ���������ܣ�1   �������ܣ�2   ά�����Ǽ��ܣ�3   ά�����ǽ��ܣ�4����");
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
