//
// Created by Asus on 5/18/2023.
//

#ifndef UNTITLED5_SEMSTER_H
#define UNTITLED5_SEMSTER_H


#include "iostream"
#include "string"
#include "vector"
#include "course.h"
using namespace std;

class semester {
    string name;
    vector<shared_ptr<course>> courses;
public:
    semester(string n);
    void addcouse(shared_ptr<course>Course);
    void printcourses();
    double getavggrade();
    string getname();
    vector<shared_ptr<course>> getcourses();



};


#endif //UNTITLED5_SEMSTER_H
