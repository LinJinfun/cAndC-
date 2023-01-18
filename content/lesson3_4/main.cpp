#include <iostream>
using namespace std;
//請以(複合指定運算子)設計程式,讓用者輸入三個任意數，程式會顯示3數相加的總和(float)

int main() {
	float input_value,sum=0;
	cout << "請輸入第一個數:";
	cin >> input_value;
	sum += input_value;

	cout << "請輸入第二個數:";
	cin >> input_value;
	sum += input_value;

	cout << "請輸入第三個數:";
	cin >> input_value;
	sum += input_value;

	cout << "3數總合為:" << sum << endl;
}
