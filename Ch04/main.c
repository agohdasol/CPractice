#include <stdio.h>

void ch04_01(void)
{
  int a, b;
  printf("두 정수를 입력하세요. : ");
  scanf("%d%d", &a, &b);

  printf("%.2f", (a + b) / 2.0);
}

void ch04_02(void)
{
  int input_time;
  printf("정수 초를 입력하세요. : ");
  scanf("%d", &input_time);

  int hours = input_time / 3600;
  int minutes = (input_time % 3600) / 60;
  int seconds = (input_time % 3600) % 60;
  printf("%d 초는 %d 시간 %d 분 %d 초입니다.", input_time, hours, minutes, seconds);
}

int main(void)
{
  ch04_02();
  return 0;
}