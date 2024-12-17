#include<iostream>
class Point {
private:
	int x;
	int y;
public:
	Point():x(60),y(80){}
	void setPoint(int i,int j){
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		std::cout << "坐标为：（" << x << "," << y << ")" << std::endl;
	}
};
int main() {
	Point p;
	p.display();
	p.setPoint(60, 10);
	p.display();
	return 0;
}