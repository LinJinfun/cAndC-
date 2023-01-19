#include <iostream>
//使用者輸入0程式結束
using namespace std;
int main() {
	int input_value;	
	
	do{
		cout << "請輸入數值:";
		cin >> input_value;
	}while(input_value != 0);
	
	cout << "程式結束" << endl;
}
