#include <iostream>
using namespace std;
int Peach(int n) {
	if (n ==10) {
		return 1;
	}
	else {
		return (Peach(n + 1) + 1) * 2;
	}
}
int main() {
	int n = 1;
	int peach = Peach(n);
	cout << "第一天有" << peach << "只桃子" << endl;
	return 0;
}