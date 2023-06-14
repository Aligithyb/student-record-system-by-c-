//
// Created by Asus on 4/30/2023.
//

#ifndef UNTITLED_IML_COURSEMARK_H
#define UNTITLED_IML_COURSEMARK_H
#include "course.h"
#include "grade.h"
//a class made from inheritance and polymorphism
class coursemark : public course,public grade{
    vector<grade*> grades;
public:
    coursemark(string n, int num);
    void addGrade(string student, int score, int maxScore);
    void printGrades();



};


#endif //UNTITLED_IML_COURSEMARK_H
