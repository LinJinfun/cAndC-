#include <iostream>
//讓使用者輸入被除數(整數)及除數(整數，不可以是零)，程式會顯示兩數相除的商及餘數。

using namespace std;
int main() {
	int n,m;
	cout << "請輸入被除數(整數):";
	cin >> n;
	cout << "請輸入除數(整數，不可以是零):";
	cin >> m;
	cout << "商:" << n/m  << "餘數:" << n%m << endl;
}
