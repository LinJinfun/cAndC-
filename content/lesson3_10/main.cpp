#include <iostream>
//讓使用者輸入成績, 若成績在90分以上就顯示「優等」,
//80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以下顯示「丁等」。

using namespace std;
int main() {
  int scores;
  cout << "請輸入成績(0-100):";
  cin >> scores;

	if(scores >= 90){
		cout << "優等\n"; 
	}else{
		if(scores >= 80){
			cout << "甲等\n";
		}else{
			if(scores >= 70){
				cout << "乙等\n";
			}else{
				if(scores >= 60){
					cout << "丙等\n";
				}else{
					cout << "丁等\n";
				}
			}
		}
	}
}
