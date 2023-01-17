#include <stdio.h>

int main(void) {
  int x = 45;
	short y = 45; //自動轉換型別
	printf("%d\n",y);

	int m = 3.14159;
	printf("%d\n",m);

	double n = 3;
	printf("%f\n",n);

	printf("%f\n",x/2.0);
  return 0;
}
