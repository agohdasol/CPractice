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
  printf("아무키나 입력 \n");
  ch = _getch();

  printf("입력한 키는 ");
  putchar(ch);
  printf("입니다.\n");
  return;
}

void gets01(void)
{
  char szName[32] = { 0 };
  printf("이름을 입력하세요 : ");
  gets(szName);

  printf("당신의 이름은 ");
  puts(szName);
  puts("입니다.");

  return;
}

void scanfint01(void)
{
  int nAge = 0;
  printf("나이를 입력하세요 : ");
  scanf("%d", &nAge);
  printf("당신의 나이는 %d세 입니다.\n", nAge);
  return;
}

void scanfagename(void)
{
  int nAge = 0;
  char name[32] = { 0 };
  printf("나이를 입력하세요 : ");
  scanf("%d", &nAge);
  printf("이름을 입력하세요 : ");
  scanf("%s", &name);
  printf("당신의 나이는 %d세, 이름은 %s 입니다.\n", nAge, name);
  return;
}

int main(void)
{
  scanfagename();
  return 0;
}