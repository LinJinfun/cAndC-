#include <iostream>
using namespace std;
//計算2 - 10所有偶數的總和

int main() {
	int sum = 0;
	int n = 10;
	for(int i=2;i<=n;i+=2){
		sum += i;
	}
	cout << "2-" << n << "的所有偶數總和是:" << sum << endl;
}
