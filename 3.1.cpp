#include <iostream>
using namespace std;
void gcd_lcm(int m, int n, int& gcd, int& lcm) {
    int a = m, b = n;
    while (b!= 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = m * n / gcd;
}
int main() {
    int m, n;
    cout << "请输入第一个自然数m: ";
    cin >> m;
    cout << "请输入第二个自然数n: ";
    cin >> n;
    int gcd, lcm;
    gcd_lcm(m, n, gcd, lcm);
    cout << m << "和" << n << "的最大公约数是: " << gcd << endl;
    cout << m << "和" << n << "的最小公倍数是: " << lcm << endl;
    return 0;
}