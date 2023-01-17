#include <stdio.h>

int main(void) {
  int x = 5;
	int y = 2;
	printf("%d/%d=%f\n",x,y,(double)x/y); //強制轉換型別
  return 0;
}
