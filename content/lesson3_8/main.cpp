#include <iostream>
using namespace std;
//讓使用者輸入密碼,如果輸入的密碼正確(abcd), 要顯示「密碼正確!歡迎光臨!」。如果不正確就顯示密碼錯誤訊息

int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;
	if(password == "abcd"){
		cout << "歡迎光臨!\n";
	}else{
		cout << "密碼錯誤!\n";
		cout << "請重新輸入!\n";
	}
}
