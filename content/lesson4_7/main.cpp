#include <iostream>
using namespace std;

int main() {
  int presure;
  cout << "請輸入血壓值:";
  cin >> presure;
/*
  if (presure >= 90 && presure <= 140) {
    cout << "血壓正常" << endl;
  } else {
    cout << "血壓不正常" << endl;
  }
*/
	if (presure < 90 || presure > 140){
		cout << "血壓不正常" << endl;
	}else{
		cout << "血壓正常" << endl;
	}
}
