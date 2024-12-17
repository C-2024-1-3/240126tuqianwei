#include <iostream>         
#include "student.h"
int main()
{
	student stud;               
	stud.set_value(101, "xiaoming", 'f');
	stud.display();              
	return 0;
}