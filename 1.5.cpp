#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double F;
    cout << "请输入华氏温度: ";
    cin >> F;

    double C = (F - 32) * 5.0 / 9.0;

    // 保留两位小数输出
    cout << "对应的摄氏温度为: "<<fixed  <<setprecision(2)<< C << endl;

    return 0;
    }