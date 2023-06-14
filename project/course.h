//
// Created by Asus on 4/18/2023.
//
#include "student.h"
#ifndef UNTITLED_COURSE_H
#define UNTITLED_COURSE_H
#include "iostream"
using namespace std;
#include "string"
#include "vector"
using namespace std;
class course {
    string name;
    int number;
    vector<string> students;
public:
    course(string n , int num);
    void setname(string n);
    void setnumber(int nu);
    void setstudents(vector<string> s);
    string getname();
    int getnumber();
    vector<string> getstudents();
    void addstudents(string student);
    void removestudent(string student);
    void printstudents();


};


#endif //UNTITLED_COURSE_H
