#include<iostream>
using namespace std;
int main() {
    double num1, num2;
    char op;
    cout << "输入一个数：" << endl;
    cin >> num1;
    cout << "输入运算符：" << endl;
    cin >> op;
    cout << "再输入一个数" << endl;
    cin >> num2;
    double result;
    if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '+') {
        result = num1 + num2;

    }
    else if (op == '*') {
        result = num1 * num2;

    }
    else if (op == '/') {
        if (num2 == 0) {
            cout << "除数不能为0" << endl;
            return 0;
        }
        result = num1 / num2;
    }
    else if (op == '%') {
        if (static_cast<int>(num2) == 0) {
            
            cout << "除数不能为0" << endl;
            return 0;
        }
        result = static_cast<int>(num1) % static_cast<int>(num2);
    }
    else {
        cout << "非法的运算符" << endl;
        return 0;
    }
    cout << num1 << " " << op << num2 << "=" << result << endl;
    return 0;}