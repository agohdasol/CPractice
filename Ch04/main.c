#include <stdio.h>

void ch04_01(void)
{
  int a, b;
  printf("�� ������ �Է��ϼ���. : ");
  scanf("%d%d", &a, &b);

  printf("%.2f", (a + b) / 2.0);
}

int main(void)
{
  ch04_01();
  return 0;
}