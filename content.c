#include <iostream>
using namespace std;
class Student{
	public:
	//實體欄位
	string name;
	string id;
	int chinese;
	int english;
	int math;
	//實體方法
	int sum();
	float average();
};

int Student::sum(){
	return chinese + english + math;
}
float Student::average(){
	return sum()/3.0;
}

int main() {
	Student stu1;
	stu1.name = "stu1";
	stu1.id = "A10001";
	stu1.chinese = 87;
	stu1.english = 96;
	stu1.math = 76;

	cout << "學生姓名:" << stu1.name << endl;
	cout << "學號:" << stu1.id << endl;
	cout << "國文:" << stu1.chinese << endl;
	cout << "英文:" << stu1.english << endl;
	cout << "數學:" << stu1.math << endl;
	cout << "總分:" << stu1.sum() << endl;
	printf("平均:%.2f\n",stu1.average());
	return 0;
}
