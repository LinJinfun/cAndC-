#include <stdio.h>

int main(void) {
  int chinese;
  int  english;
  int math;
  printf("請輸入國文分數:");
  scanf("%d", &chinese);
  printf("請輸入英文分數:");
  scanf("%d", &english);
  printf("請輸入數學分數:");
  scanf("%d", &math);

  int sum = chinese + english + math;

  printf("國文分數%d\n", chinese);
  printf("英文分數%d\n", english);
  printf("數學分數%d\n", math);
  printf("總分是%d\n", sum);
  return 0;
}
