//
// Created by Asus on 4/29/2023.
//

#ifndef UNTITLED_IML_HONORSTUDENT_H
#define UNTITLED_IML_HONORSTUDENT_H
#include "student.h"

class honorstudent: public virtual student{
public:
    honorstudent(string n, int a, string m, double g);
    bool hasHonors();

};


#endif //UNTITLED_IML_HONORSTUDENT_H
