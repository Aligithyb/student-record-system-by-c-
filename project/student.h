//
// Created by Asus on 4/18/2023.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H
#include "string"
using namespace std;

class student {
private:
    string name;
    int age;
    string major;
    double gpa;
public:
    student(string n,int a,string m,double g);

    student();

    virtual void setname(string n);
    void setage(int a);
    void setmajor(string m);
    void setgpa(double  g);
    string getname();
    int getage();
    string getmajor();
    double getgpa();

    virtual void printinformation();
    bool highgpa();



};


#endif //UNTITLED_STUDENT_H
