#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include <stdlib.h>
#include <iostream>

class People
{
    protected:
        std::string name;
        int age;
    public:
        People();
        People(string name, int age);
        std::string get_name();
        void set_name(string name);
        int get_age();
        void set_age(int age);
};

#endif