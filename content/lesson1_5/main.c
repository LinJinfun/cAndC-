#include <stdio.h>

int main(void) {
  int n = 456; //建立變數
	int m = 567; //建立變數
	double x = 456.0; //建立double變數
	printf("%d + %d = %d\n",n,m,n+m);
	printf("%d * %d = %d\n",n,m,n*m);
	printf("%.0f / %d = %.3f\n",x,m,x/m);
  return 0;
}
