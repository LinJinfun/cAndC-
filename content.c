//============================================================================
// Name        : for2.cpp
//計算固定中的支出，媽媽每天會將家裡的花費記錄下來，並且計算本週的花費總和
//================================================================
/*
請輸入星期1 的支出567
請輸入星期2 的支出456
請輸入星期3 的支出567
請輸入星期4 的支出890
請輸入星期5 的支出345
請輸入星期6 的支出534
請輸入星期日 的支出678
本星期的支出為:4037元
*/
//==================================================================//
#include <iostream>
using namespace std;

int main() {
	int n, sum=0;
	for(int i=1; i<=7; i+=1){
		if(i==7){
			cout << "請輸入星期日的支出:";
		}else{
			cout << "請輸入星期" << i << "的支出:";
		}
		cin >> n;
		sum += n;		
	}
	cout << "本星期的支出為:" << sum << "元\n";
}
