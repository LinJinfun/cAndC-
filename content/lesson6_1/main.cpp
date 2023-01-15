#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srandom(time(NULL));
	int min = 1;
	int max = 100;
	int guess = random() % (max-min+1) + min;	
  cout << guess << endl;
}
