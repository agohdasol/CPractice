#include <stdio.h>

void ch04_01(void)
{
  int a, b;
  printf("�� ������ �Է��ϼ���. : ");
  scanf("%d%d", &a, &b);

  printf("%.2f", (a + b) / 2.0);
}

void ch04_02(void)
{
  int input_time;
  printf("���� �ʸ� �Է��ϼ���. : ");
  scanf("%d", &input_time);

  int hours = input_time / 3600;
  int minutes = (input_time % 3600) / 60;
  int seconds = (input_time % 3600) % 60;
  printf("%d �ʴ� %d �ð� %d �� %d ���Դϴ�.", input_time, hours, minutes, seconds);
}

int main(void)
{
  ch04_02();
  return 0;
}