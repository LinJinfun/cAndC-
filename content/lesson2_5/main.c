#include <stdio.h>

int main(void) {
	int radius;
	const double PI=3.14159; //常數
  printf("請輸入圓半徑(整數):");
	scanf("%d",&radius);
	printf("圓面積:%f\n",PI * radius * radius); //自動轉換
	
  return 0;
}
