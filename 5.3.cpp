#include<iostream>
class Chang {
private:
	double length;
	double width;
	double height;
public:
	void input() {
		std::cout << "请输入长：";
		std::cin >> length;
		std::cout << "请输入宽：";
		std::cin >> width;
		std::cout << "请输入高：";
		std::cin >> height;
	}
	double volume() {
		return length * width * height;
	}
	void output() {
		std::cout << "体积为：" << volume() << std::endl;
	}
};
int main(){
	Chang chang[3];
	for (int i = 0; i < 3; i++) {
		std::cout << "输入第" << i + 1 << "个长方体的参数" << std::endl;
		chang[i].input();
	}
	for (int i = 0; i < 3; i++) {
		std::cout << "第" << i + 1 << "个长方体";
		chang[i].output();
	}
	return 0;
}
