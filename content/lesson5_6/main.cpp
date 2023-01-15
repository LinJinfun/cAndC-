#include <iostream>
using namespace std;
//小美是一位教師，請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績。
int main() {
	int score;
	int sum = 0;	
	int nums = 0;
	
	while(true){		
		cout << "請輸入學生成績:";
		cin >> score;
		if(score<0){
			break;
		}
		sum += score;
		nums++;
				
	}

	cout << "學生總成績為:" << sum << endl;
	cout  << "學生數是:" << nums << endl;
	cout << "學生平均為:" << (float)sum/nums << endl;
}
