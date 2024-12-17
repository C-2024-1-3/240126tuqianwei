#include<iostream>
class Student {
public:
	int id;
	int score;
};
void max(Student* students, int size) {
	int maxIndex = 0;
	for (int i = 1; i < size; i++) {
		if (students[i].score > students[maxIndex].score) {
			maxIndex = i;
		}
	}
	std::cout << "成绩最高的学号是：" << students[maxIndex].id<< std::endl;
}
int main() {
	Student students[5] = {
		{1,85},
		{ 2,90 },
	{ 3,76 },
	{ 4,86 },
	{ 5,94 }
	};
	max(students, 5);
	return 0;
}