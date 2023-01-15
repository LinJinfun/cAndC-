#include <iostream>
using namespace std;
//請設計一個程式，讓使用者輸入數值，只有加總正偶數值，不加總正奇數值，如果輸入負數，結束程式。

int main() {
	int input_value;
	int sum = 0;
	int count = 0;
	while(true){
		cout << "請輸入" << ++count << "數值:";
		cin  >> input_value;
		if(input_value < 0){
			break;
		}else if(input_value % 2 == 1){
			continue;
		}
		sum += input_value;		
	}

	cout << "所有輸入的正偶數的加總是:" << sum << endl;
	
}
