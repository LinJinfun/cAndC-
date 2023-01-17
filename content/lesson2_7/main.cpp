#include <iostream>
using namespace std;
int main() {
  int chinese,english,math,sum;
	double average;
	string name; //c++語言的字串
	cout << "請輸入學生姓名:";
	cin >> name;
  cout << "請輸入國文,英文,數學(國文 英文 數學):";
	cin >> chinese >> english >> math;

	sum = chinese + english + math;
	//average = (double)sum/3; //強迫轉換
	average = sum/3.0; //自動轉換
	cout << "學生姓名:" << name << endl;
	cout << "總分是"<< sum << "分";
	cout << ",平均為" << average << endl;
  return 0;
}
