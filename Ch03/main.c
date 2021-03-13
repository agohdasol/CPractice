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

int main(void)
{
  getch01();
  return 0;
}