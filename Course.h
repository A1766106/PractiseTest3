#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <stdlib.h>
#include <iostream>

class Course
{
    private:
        std::string Class_Time;
        int Room_Number;
        Teacher Course_Teacher;
    public:
        Course(std::string Class_Time, int Room_Number);
        Course();
        void Set_Room_Number();
        void Set_Class_Time();
        void Set_Course_Teacher();
        std::string Get_Class_Time();
        int Get_Room_Number();
        Teacher Get_Course_Teacher();

};

#endif