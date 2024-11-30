#include <iostream>
using namespace std;

int main() {
    double price = 0.8; 
    int day = 1;  
    int numApples = 2;  
    int totalApples = 2;  
    double totalCost = 0.8 * 2;  

    while (totalApples + numApples * 2 <= 100) {  
        numApples *= 2;  
        totalApples += numApples; 
        totalCost += price * numApples;  
        day++;
    }
    double averageCost = totalCost / day;

    cout << "每天平均花费: " << averageCost << " 元" << endl;

    return 0;
}