#include <iostream>

int main() {
  int math;
	/*
  printf("請輸入數學分數:");
  scanf("%d", &math);
  printf("我的數學分數是:%d\n", math);
	*/

	std::cout << "請輸入數學分數:";
	std::cin >> math;
	std::cout << "我的數學分數是:" << math << std::endl;
}
