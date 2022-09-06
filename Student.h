#ifndef STUDENT_H
#define STUDENT_H
#include "People.h"
#include "Course.h"
#include <string>
#include <stdlib.h>
#include <iostream>

class Student: public People
{
    private:
        int Student_ID;
        Course Selected_Courses[];
    public:
        Student();
        Student(int Student_ID, Course Selected_Courses);
        void Set_ID(int Student_ID);
        int Get_ID();
        void Add_Course(Course Selected_Course);
        std::string Get_Course();

};

#endif