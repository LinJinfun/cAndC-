#include <stdio.h>

int main(void) {
  short chinese;
  short english;
  short math;
  printf("請輸入國文分數:");
  scanf("%hi", &chinese);
  printf("請輸入英文分數:");
  scanf("%hi", &english);
  printf("請輸入數學分數:");
  scanf("%hi", &math);

  short sum = chinese + english + math;

  printf("國文分數%hi\n", chinese);
  printf("英文分數%hi\n", english);
  printf("數學分數%hi\n", math);
  printf("總分是%hi\n", sum);
  return 0;
}
