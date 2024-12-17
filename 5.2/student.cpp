#include <iostream>
#include"student.h"           
void student::display()  
{
    std::cout << "num：" << num << std::endl;
    std::cout << "name：" << name << std::endl;
    std::cout << "sex：" << sex << std::endl;
}
void student::set_value(int num, const char* name, char sex) {
    this->num = num;
    strcpy_s(this->name, name);
    this->sex = sex;
}
