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

int main(void)
{
  getch01();
  return 0;
}