#include <iostream>
//小明想要存錢買一輛機車,機車每輛30000元，他將每月存的錢輸入，當存款足夠買機車時，就顯示提示訊息告知。
using namespace std;
int main() {
	int deposit = 0,month=0, inputNum;
	while(deposit < 30000){
		month++;
		cout << "請輸入第" << month << "個月份的存款:";
		cin >> inputNum;
		deposit += inputNum;
	}
	cout << "恭喜!已經存夠了,存了" << month << "個月的總存款為:" << deposit << "元\n";
}
