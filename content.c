#include <stdio.h>

int main(void) {
  const char *name;
  name = "徐國堂";
  printf("我的姓名是:%s\n", name);

  printf("請輸入您的新姓名:");
  scanf("%s", &name);
  printf("我的新姓名是:%s\n", name);
  return 0;
}
