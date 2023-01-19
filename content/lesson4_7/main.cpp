#include <iostream>
//小王班上有五位學生，請您為小王設計一個輸入成績的程式，並且在輸入成績後顯示班上總成績及平均成績。
using namespace std;

int main() {
	int score;
	int totals = 0;
	for(int i=1; i<=5; i++){
		cout << "請輸入第" << i << "學生成績:";
		cin >> score;
		totals += score;
	}

	cout << "全班總成績為:" << totals << "分";
	cout << ",平均為:" << totals/5.0 << endl;
}
