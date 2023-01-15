#include <iostream>
#include <time.h>

using namespace std;

int main() {
	//cout << time(NULL) << endl;
	srandom(time(NULL));
  cout << random() << endl;
	cout << "1~10的亂數:";
	cout << random() % 10 + 1 << endl;
}
