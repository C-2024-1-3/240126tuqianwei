#include <iostream>
using namespace std;
	void swap(double& a, double& b) {
		double temp = a;
		a = b;
		b = temp;
	}
	void bubblesort(double list[], int listsize) {
		bool changed = true;
		do {
			changed = false;
			for (int j = 0; j < listsize - 1; j++) {
				if (list[j] > list[j + 1]) {
					swap(list[j], list[j + 1]);
					changed = true;

				}
			}
		} while (changed);
	}
	int main(){
		double arr[10];
		cout << "请输入10个数字：" << endl;
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		bubblesort(arr, 10);
		cout << "排序后的数字：" << endl;
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << "";
		}
		cout << endl;
	return 0;
}