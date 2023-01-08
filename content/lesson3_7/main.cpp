#include <iostream>
using namespace std;
//讓使用者輸入三個任意數，程式會顯示三數中的最大數。

int main() {
  int n1, n2, n3, max;
  cout << "請輸入第1個數值:";
  cin >> n1;
  cout << "請輸入第2個數值:";
  cin >> n2;
  max = n1 > n2 ? n1 : n2;
  cout << "請輸入第3個數值:";
  cin >> n3;
  max = max > n3 ? max : n3;

  cout << "輸入三個數中最大的數為:" << max << endl;
}
