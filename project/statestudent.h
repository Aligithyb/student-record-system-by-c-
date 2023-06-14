//
// Created by Asus on 4/30/2023.
//

#ifndef UNTITLED_IML_STATESTUDENT_H
#define UNTITLED_IML_STATESTUDENT_H
#include "student.h"
//inhertince

class statestudent :public virtual student{
    string state;
public:
    statestudent(string n, int a, string m, double g, string s);
//    override
    void printinformation()  ;


};


#endif //UNTITLED_IML_STATESTUDENT_H
