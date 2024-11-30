#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// 函数将以字符串形式表示的一个16进制数转换为10进制数
int parseHex(const char *const hexString) {
    int len = strlen(hexString);
    int result = 0;
    int base = 1;
    for (int i = len - 1; i >= 0; i--) {
        char ch = hexString[i];
        int digit;
        if (isdigit(ch)) {
            digit = ch - '0';
        } else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        } else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        } else {
            return 0;
        }
        result += digit * base;
        base *= 16;
    }
    return result;
}

int main() {
    char hexStr[100];
    cout << "请输入一个十六进制数（以字符串形式）: ";
    cin >> hexStr;
    int decimal = parseHex(hexStr);
    cout << "转换后的十进制数为: " << decimal << endl;
    return 0;
}