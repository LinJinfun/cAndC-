#include <stdio.h>

int main(void) {
  //一次輸入3個整數,計算3數的平均值
  int num1, num2, num3;
  printf("請輸入3個數值(數值1,數值2,數值3):");
  scanf("%d,%d,%d", &num1, &num2, &num3);
  double average = (num1 + num2 + num3) / 3.0;
	printf("3數的平均值是:%.2lf\n",average);

  return 0;
}
