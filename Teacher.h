#ifndef TEACHER_H
#define TEACH_H
#include "People.h"
#include "Course.h"
#include <string>
#include <stdlib.h>
#include <iostream>

class Teacher: public People
{
    private:
        std::string *specialty;
        int Teacher_ID;
    public:
        Teacher();
        Teacher(int Teacher_ID);
        int Get_ID();
        void Set_ID();
        void Set_Specialty(std::string Selected_Specialty);
        std::string Get_Specialties();
        void Remove_Specialty(std::string Selected_Specialty);

};


#endif