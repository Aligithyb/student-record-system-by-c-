//
// Created by Asus on 5/18/2023.
//

#ifndef UNTITLED5_STUDENT_H
#define UNTITLED5_STUDENT_H


#include "string"
using namespace std;
#include "pearson.h"
#include "grade.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <memory>

class student : public pearson{
private:
    string major;
    double gpa;
    vector<shared_ptr<grade>> Grades;

public:
    student(string name, int age, string m, double g);
    void printinfo();
    void addgrade(shared_ptr<grade> Grade);
    double getgpa();




};


#endif //UNTITLED5_STUDENT_H
