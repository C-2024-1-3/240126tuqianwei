#include<iostream>
using namespace std;
int main() {
  char c;
    int EnglishCount = 0;
    int spaceCount = 0;
    int number = 0;
    int otherCount = 0;
    cout << "请输入一行字符:";
       while ((c = getchar()) != '\n') {
           if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
               EnglishCount++;
           }
           else if ((c == ' ')) {
               spaceCount++;
           }
           else if ((c >= '0' && c <= '9')) {
               number++;
           }
           else {
               otherCount++;
           }
       }
       cout << "EnglishCount=" << EnglishCount << endl;
       cout << "spaceCount=" << spaceCount << endl;
       cout << "number=" << number << endl;
       cout << "otherCount=" << otherCount << endl;
   return 0;
}