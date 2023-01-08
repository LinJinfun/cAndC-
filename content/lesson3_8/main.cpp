#include <iostream>
using namespace std;
int main() {
	int math;
	cout << "請輸入學生數學成績:";
	cin >> math;
	if(math >= 60){
		cout << "及格" << endl;
	}else{
		cout << "不及格" << endl;
	}
}
