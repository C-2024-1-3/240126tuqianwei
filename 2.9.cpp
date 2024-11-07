#include<iostream>
using namespace std;
int main() {
    double price = 0.8; 
    int day = 1;  
    int number = 2;  
    int total = 2;  
    double totalCost = 0.8 * 2;  

    while (total <= 100) {
        number *= 2;  
        total += number;  
        totalCost += price * number;  
        day++;  
    }
    double averageCost = totalCost / (day - 1);

    cout << "每天平均花费: " << averageCost << " 元" << endl;

    return 0;
}