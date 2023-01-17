#include <stdio.h>

int main(void) {
  unsigned short i = 45768;
  printf("%d\n", i);
  long m = 456789;
  printf("%ld\n", m);
  long long n = 12345678900;
  printf("%lld\n", n);

	float PI = 3.14159;
	printf("%f\n",PI);

	double myDouble = 34567.12345678;
	printf("%.8f\n",myDouble);
  return 0;
}
