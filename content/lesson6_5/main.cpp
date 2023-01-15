#include <iostream>
using namespace std;

int main() {
	int total = 0;
	int stu1[] = {78, 84, 93, 97, 73};

	for(int i=0; i<5; i++){
		total += stu1[i];
	}

	cout << "stu1的總分是:" << total << endl;
}
