#include <stdio.h>
//範例:請讓使用者輸入三科成績後，自動計算其總分及平均
int main(void) {
	int chinese,english,math,sum;
	double average;
  printf("請輸入國文,英文,數學(國文,英文,數學):");
	scanf("%d,%d,%d",&chinese,&english,&math);

	sum = chinese + english + math;
	//average = (double)sum/3; //強迫轉換
	average = sum/3.0; //自動轉換
	printf("您的總分是%d分,平均為%.2f\n",sum,average);
  return 0;
}