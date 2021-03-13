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

int main(void)
{
  gets01();
  return 0;
}