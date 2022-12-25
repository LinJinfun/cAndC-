#include <stdio.h>

int main(void) {
  short x = 101;
  int y = 210;
  int sum = x + y; // x的型別,運算時,自動轉換為int
  printf("sum值是:%d\n", sum);
  //double average = sum / 2.0;
	double average = (double)sum / 2; //強迫轉換
  printf("平均是:%.2lf\n", average);
  return 0;
}
