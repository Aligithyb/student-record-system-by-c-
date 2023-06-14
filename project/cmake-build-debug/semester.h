//
// Created by Asus on 4/25/2023.
//

#ifndef UNTITLED_SEMESTER_H
#define UNTITLED_SEMESTER_H
#include "iostream"
#include "string"
#include "vector"
using namespace std;

class semester {
    string name;
    int year;
    vector<string> subjects;
    vector<int> grades;
    public:
    semester(string n , int y);
    void setname(string n);
    void setyear(int y);
    void setsubjects(vector<string> s);
    void setgrades(vector<int> g);
    string getname();
    int getyear();
    vector<string> getsubjects();
    vector<int> getgrades();
    void addSubject(string subject);
    void removeSubject(string subject);
    void setGrade(string subject, int grade);
    double getGPA();




};


#endif //UNTITLED_SEMESTER_H
