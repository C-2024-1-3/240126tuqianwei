#include <iostream>
using namespace std;

int *f()
{
    // 使用new在堆上动态分配内存来创建数组，这样数组的内存空间不会随着函数结束而自动释放
    int *list = new int[4]{1, 2, 3, 4};
    return list;
}

int main()
{
    int *p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    // 使用完动态分配的内存后，要记得释放，防止内存泄漏
    delete[] p;
    return 0;
}