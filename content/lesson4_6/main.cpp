#include <iostream>
//計算1~10的總和
using namespace std;

int main() {
	int m;
	cout << "請輸入結束值:";
	cin >> m;
	
	int total = 0;
	int count = 0;
	for(int i=2; i<=m; i+=2){
		count++;
		total += i;
	}
	cout << "總共執行:" << count << "次\n";
	cout << "2~" << m << "的偶數總和為:" << total << endl;
}
