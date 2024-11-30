#include <iostream>
using namespace std;
int main(){
	int num[10];
	int count = 0;
	for (int i = 0; i < 10; i++) {
		int temp;
		cin >> temp;
		bool isNew = true;
		for (int j = 0; j < count; j++) {
			if (temp == num[j]) {
				isNew = false;
				break;
			}
		}
		if (isNew) {
			num[count++] = temp;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}