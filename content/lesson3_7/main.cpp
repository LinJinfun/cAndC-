#include <iostream>
using namespace std;
//學生符合加分條件就加5%分,如果超過300分,就以300為主。
int main() {
	int score;
	bool add;
	cout << "請輸入學生的分數:";
	cin >> score;
	cout << "學生符合加分條件嗎? yes請輸入1,no請輸入0:";
	cin >> add;
	if(add){
		score *= 1.05;
		if(score > 300){
			score = 300;
		}
	}
	cout << "學生分數是:" << score << endl;
}
