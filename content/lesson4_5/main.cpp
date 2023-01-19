#include <iostream>
//計算1~10的總和
using namespace std;

int main() {
	int n,m;
	cout << "請輸入起始值:";
	cin >> n;

	cout << "請輸入結束值:";
	cin >> m;
	
	int total = 0;
	for(int i=n; i<=m; i++){
		total += i;
	}
	cout << n <<"~" << m << "的總和為:" << total << endl;
}
