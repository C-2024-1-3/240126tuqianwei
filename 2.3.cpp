#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "请输入三角形的第一条边: ";
    cin >> side1;
    cout << "请输入三角形的第二条边: ";
    cin >> side2;
    cout << "请输入三角形的第三条边: ";
    cin >> side3;

   
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        double c = side1 + side2 + side3;
        cout << "三角形的周长为: " << c << endl;

        if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1)) {
            cout << "该三角形是等腰三角形" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else {
        cout << "输入的三条边无法构成三角形" << endl;
    }

    return 0;
}