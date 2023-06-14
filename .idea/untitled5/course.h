//
// Created by Asus on 5/18/2023.
//


#define UNTITLED5_COURSE_H



#include "student.h"
#ifndef UNTITLED_COURSE_H
#define UNTITLED_COURSE_H
#include "iostream"
using namespace std;
#include "string"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <memory>
using namespace std;
class course {
    string name;
    int number;
    vector<shared_ptr<student>> students;
    vector<shared_ptr<grade>> Grades;
public:
    course(string n, int nu);
    void addstudents(shared_ptr<student>Student);
    void addgrade(shared_ptr<grade>Grade);
    void printstudents();
    void printgrades();
    double getaverage();
    vector<shared_ptr<student>>getstudentss();
    string getname();
    int getnumber();





};


#endif //UNTITLED5_COURSE_H
