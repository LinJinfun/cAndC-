#include <iostream>
using namespace std;

bool isPrimeNumber(int num){
	bool isPrimeNumber=true;
	for(int i=2;i < num; i++){
		if(num % i == 0){
			isPrimeNumber = false;
			break;
		}
	}
	return isPrimeNumber;
}

int main() {
	int num;	
	cout << "請輸入一個數值:";
	cin >> num;	

	string message = isPrimeNumber(num) ? "是質數" : "不是質數";
	cout << num << message << endl;
	return 0;
}
