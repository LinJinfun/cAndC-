#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int student_num,subject_num;
	cout << "請輸入學生人數:";
	cin >> 	student_num;
	cout << "請輸入科目數:";
	cin >> 	subject_num;
	int num = student_num * subject_num;
	int scores[num];
	
	for (int i=0;i<num;i++){
		scores[i] = random() % (100-60+1) + 60;
		cout << scores[i] << endl;
	}
}
