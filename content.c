#include <iostream>
using namespace std;

typedef struct Student{
	string name;
	int scores[5];
} Student;

int main() {
	Student stus[3] = {{"robert",{78, 98, 78, 63, 83}},{"david",{78, 85, 67, 73, 73}},{"alice",{68, 98, 74, 63, 82}}};

	int stuCout = sizeof(stus) / sizeof(stus[0]);

	for (int i=0; i<stuCout; i++){
		int sum = 0;
		for(int j=0; j<5; j++){
			sum += stus[i].scores[j];
		}

		cout << "第" << i+1 << "位學生是" << stus[i].name << "總分數是" << sum << endl;
	}

}
