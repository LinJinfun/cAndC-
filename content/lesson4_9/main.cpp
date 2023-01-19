#include <iostream>
using namespace std;
//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。

int main() {
	int deposit = 0;
	int input_value;
	int count = 0;
	while(deposit < 30000){		
		cout << "請輸入第"<< ++count << "月的存款:";
		cin >> input_value;
		deposit += input_value;
	}
	cout << "存了"<< count << "月總存款為:" << deposit << "元\n";
}
