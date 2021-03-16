#include <stdio.h>

void ch04_01(void)
{
  int a, b;
  printf("두 정수를 입력하세요. : ");
  scanf("%d%d", &a, &b);

  printf("%.2f", (a + b) / 2.0);
}

int main(void)
{
  ch04_01();
  return 0;
}