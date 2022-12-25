#include <stdio.h>

int main(void) {
  short x = 101;
	int y = 210;
	int sum = x + y; // x的型別,運算時,自動轉換為int
	printf("sum值是:%d\n",sum);
	printf("平均是:%.2f\n", sum/2.0);	
  return 0;
}
