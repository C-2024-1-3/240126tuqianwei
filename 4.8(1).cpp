#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char *s1, const char *s2) {
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);
    if (s1Len == 0) return 0;  
    if (s1Len > s2Len) return -1;  
    for (int i = 0; i <= s2Len - s1Len; i++) {
        int j;
        for (j = 0; j < s1Len; j++) {
            if (s2[i + j]!= s1[j]) break;
        }
        if (j == s1Len) return i;  
    }
    return -1;  
}

int main() {
    char s1[100], s2[100];
    cout << "请输入字符串s1: ";
    cin >> s1;
    cout << "请输入字符串s2: ";
    cin >> s2;
    int result = indexof(s1, s2);
    if (result == -1) {
        cout << "s1不是s2的子串" << endl;
    } else {
        cout << "s1是s2的子串，第一次匹配的下标为: " << result << endl;
    }
    return 0;
}