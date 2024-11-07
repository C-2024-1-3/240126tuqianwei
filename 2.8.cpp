#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a, xn, xn1;
    cout << "请输入a的值：" << endl;
    cin >> a;
   if (a < 0) {
        cout << "不能输入负数的平方根" << endl;
    }
    xn = a;
    do {
        xn1 = 0.5 * (xn + a / xn);
        if (fabs(xn1 - xn) < 1e-5) { break; }
        xn = xn1;


    } while (1);
    cout << "平方根为=" << xn1 << endl;
    return 0;
}