#include "People.h"
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;


People::People()
{
    name = "None Given";
    age = -1;

}

People::People(string name, int age)
{
    this->name = name;
    this->age = age;
}

string People::get_name()
{
    return name;
}

void People::set_name(string name)
{
    this->name = name;
}

int People::get_age()
{
    return age;
}

void People::set_age(int age)
{
    this->age = age;
}