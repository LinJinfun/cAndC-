#include <iostream>
//計算1~10的總和
using namespace std;
int main() {
	int total = 0;
	for(int i=1; i<=10; i++){
		total += i;
	}
	cout << "1~10的總和為:" << total << endl;
}
