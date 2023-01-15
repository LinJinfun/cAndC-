#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	int keyin;
	int count = 0;
	int min = 1;
	int max = 100;
	int guess = random() % (max-min+1) + min;	
  //cout << guess << endl;

	cout << "=========猜數字遊戲==============\n\n";
	while(true){
		cout << "猜數字的範圍" << min << "~" << max  << ":";
		cin >> keyin;
		count++;
		if(keyin >= min && keyin <= max){
			if(keyin == guess){
				cout << "賓果!猜對了,答案是" << guess << endl;
				cout << "您猜了" << count << "次" << endl;
				break;
			}else if(keyin > guess){
				cout << "再小一點";
				max = keyin - 1;
			}else if(keyin < guess){
				cout << "再大一點";
				min =  keyin + 1;
			}
			cout << "您已經猜了" << count << "次" << endl;
		}else{
			cout << "請輸入提示範圍內的數字!\n";
			continue;
		}
	}

	cout << "遊戲結束" << endl;
}
