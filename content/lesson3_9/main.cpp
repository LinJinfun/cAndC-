#include <iostream>
using namespace std;

int main() {
  /*
  int pressure;
  cout << "請輸入血壓值:";
  cin >> pressure;
  if(pressure >= 70){
          if(pressure <= 140){
                  cout << "血壓正常\n";
          }else{
                  cout << "血壓太高\n";
          }
  }else{
          cout << "血壓太低\n";
  }
  */

	/*
  int pressure;
  cout << "請輸入血壓值:";
  cin >> pressure;
  if (pressure >= 70 && pressure <= 140) {
    cout << "血壓正常\n";
  } else {
    cout << "血壓不正常\n";
  }
	*/

	int pressure;
  cout << "請輸入血壓值:";
  cin >> pressure;
  if (pressure < 70 || pressure > 140) {
		cout << "血壓不正常\n";    
  } else {
    cout << "血壓正常\n";
  }
}
