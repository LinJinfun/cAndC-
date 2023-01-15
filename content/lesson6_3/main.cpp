#include <iostream>
using namespace std;

void sayHello(string name){
	cout << name + " 歡迎光臨!" << endl;
}

int main() {
	sayHello("robert");
	sayHello("jenny");
	sayHello("alice");
	return 0;
}
