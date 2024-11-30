#include <iostream>
#include <cstring>

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];

    std::cout << "Enter the first string: ";
    std::cin >> s1;

    std::cout << "Enter the second string: ";
    std::cin >> s2;

    int index = indexOf(s1, s2);

    if (index != -1) {
        std::cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << index << std::endl;
    }
    else {
        std::cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is -1" << std::endl;
    }

    return 0;
}
