#include <iostream>
#include <Lab01_Intro_to_c++/Student.h>

int main()
{
    Student* EW = new Student("Ellie", "Williams", 12345678, "Computer Science", 5);
    (*EW).outputMarks();
    return 0;
}
