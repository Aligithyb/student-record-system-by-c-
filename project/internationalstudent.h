//
// Created by Asus on 4/29/2023.
//

#ifndef UNTITLED_IML_INTERNATIONALSTUDENT_H
#define UNTITLED_IML_INTERNATIONALSTUDENT_H
#include "string"
#include "student.h"


class internationalstudent:public virtual student{
    string country;
public:
    string getCountry();
    internationalstudent(string n, int a, string m, double g, string c);
    void printInfo();


};


#endif //UNTITLED_IML_INTERNATIONALSTUDENT_H
