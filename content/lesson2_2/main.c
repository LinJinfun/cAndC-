#include <stdio.h>

int main(void) {
  short chinese;
  short english;
  short math;
  chinese = 89;
  english = 65;
  math = 92;

  short sum = chinese + english + math;

  printf("國文分數%d\n", chinese);
  printf("英文分數%d\n", english);
  printf("數學分數%d\n", math);
	printf("總分是%d\n",sum);
  return 0;
}
