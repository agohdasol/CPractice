#include <stdio.h>
#include <conio.h>

void getchar01(void)
{
  char ch = 0;

  ch = getchar();

  putchar(ch);
  putchar('Z');

  return;
}

void getch01(void)
{
  char ch = 0;
  printf("�ƹ�Ű�� �Է� \n");
  ch = _getch();

  printf("�Է��� Ű�� ");
  putchar(ch);
  printf("�Դϴ�.\n");
  return;
}

void gets01(void)
{
  char szName[32] = { 0 };
  printf("�̸��� �Է��ϼ��� : ");
  gets(szName);

  printf("����� �̸��� ");
  puts(szName);
  puts("�Դϴ�.");

  return;
}

void scanfint01(void)
{
  int nAge = 0;
  printf("���̸� �Է��ϼ��� : ");
  scanf("%d", &nAge);
  printf("����� ���̴� %d�� �Դϴ�.\n", nAge);
  return;
}

void scanfagename(void)
{
  int nAge = 0;
  char name[32] = { 0 };
  printf("���̸� �Է��ϼ��� : ");
  scanf("%d", &nAge);
  printf("�̸��� �Է��ϼ��� : ");
  scanf("%s", &name);
  printf("����� ���̴� %d��, �̸��� %s �Դϴ�.\n", nAge, name);
  return;
}

int main(void)
{
  scanfagename();
  return 0;
}