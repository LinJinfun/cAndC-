#include <iostream>
using namespace std;
//預設的密碼為abcd，使用者若輸入的密碼錯誤，將不斷出現輸入密碼訊息，直到輸入的密碼正確才顯示正確訊息

int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;
	
	while(password != "abcd"){
		cout << "密碼錯誤,請重新輸入:";
		cin >> password;
	}

	cout << "密碼正確" << endl;
}
