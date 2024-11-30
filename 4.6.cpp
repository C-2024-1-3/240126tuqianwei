#include <iostream>
#include <cstring>

void count(const char s[], int counts[]) {
    memset(counts, 0, sizeof(int) * 26);  // 初始化数组为 0

    for (int i = 0; s[i]!= '\0'; i++) {
        char c = tolower(s[i]);  // 转换为小写
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;  // 统计字母出现的次数
        }
    }
}

int main() {
    char str[1000];
    int counts[26];

    std::cout << "Enter a string: ";
    std::cin.getline(str, sizeof(str));

    count(str, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i]!= 0) {
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << " times" << std::endl;
        }
    }

    return 0;
}