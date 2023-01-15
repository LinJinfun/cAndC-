#include <iostream>
using namespace std;

string sayHello(string name){
	return name + " 歡迎光臨!";
}

int main() {
	cout << sayHello("robert") << endl;
	cout << sayHello("Alice") << endl;
	cout << sayHello("Jenny") << endl;
	
	return 0;
}
