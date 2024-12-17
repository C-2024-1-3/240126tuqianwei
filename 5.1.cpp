#include<iostream>
using namespace std;
class Time            
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void setTime() {
		cout << "请输入小时" ;
		cin >> hour;
		cout << "请输入分钟";
		cin >> minute;
		cout << "请输入秒";
			cin >> sec;
	}
	void showTime() {
		cout << hour << ":" << minute << ":" << sec << ":" << endl;
	}
};
int main()
{
	Time t1;
	t1.setTime();
	t1.showTime();
	return 0;
}
