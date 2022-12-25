#include <stdio.h>

int main(void) {
  double top,bottom,height;
	printf("請輸入梯形資料(上底,下底,高):");
	scanf("%lf,%lf,%lf",&top,&bottom,&height);

	double area = (top + bottom) * height / 2;
	printf("梯形面積是%.2lf\n",area);
	
  return 0;
}
