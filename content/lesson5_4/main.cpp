#include <iostream>
using namespace std;
//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。

int main() {
	int deposit = 0;
	int num = 0;
	int inputNum;
	while(deposit<30000){
		num += 1;
		cout << "請輸入第" << num << "月份的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	cout << "您已經存了"<< num <<"月,目前存款為:" << deposit << "元\n"; 
}
