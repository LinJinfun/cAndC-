#include <stdio.h>

int main(void) {
  float m,n;
	printf("請輸入m:");
	scanf("%f",&m);
	printf("請輸入n:");
	scanf("%f",&n);

	printf("%.0f + %.0f = %.2f\n",m,n,m+n);
	printf("%.0f - %.0f = %.2f\n",m,n,m-n);
	printf("%.0f * %.0f = %.2f\n",m,n,m*n);
	printf("%.0f / %.0f = %.2f\n",m,n,m/n);
	
  return 0;
}
