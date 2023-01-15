#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srandom(time(NULL));
  int student_nums = 50;
  int subject_nums = 5;
  int element_nums = student_nums * subject_nums;
  int students[element_nums];

  for (int i = 0; i < element_nums; i++) {
    students[i] = random() % (100 - 50 + 1) + 50;
    cout << students[i] << endl;
  }
}
