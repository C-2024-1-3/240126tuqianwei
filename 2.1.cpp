#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "请输入一个字符: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') { 
        ch -= 32;  
        cout << "转换后的大写字符: " << ch << endl;
    }
    else {  
        int ASCII = static_cast<int>(ch) + 1;  // 转为ASCII 码值
        cout << "其后继字符的 ASCII 码值: " << ASCII << endl;
    }
    
    return 0;
}