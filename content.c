#include <iostream>
using namespace std;

int main() {
	int n,sum=0;
	for(int i=1;i<8;i++){
		if (i==7){
			cout << "請輸入星期日的支出:";
		}else{
			cout << "請輸入星期" << i << "的支出:";
		}
		
		cin >> n;
		sum += n;
	}
	cout << "本星期的支出為:" << sum << "元\n";
	return 0;
}
