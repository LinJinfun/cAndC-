#include <iostream>
using namespace std;
//請使用者輸入一個任意數，程式會顯示此數的平方值及立方值
int main() {
  int num, result;
  cout << "請輸入任意整數:";
  cin >> num;
  result = num;
  result *= num;
  cout << "此數的平方是:" << result << endl;
  result *= num;
  cout << "此數的立方是:" << result << endl;
}
