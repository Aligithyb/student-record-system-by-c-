//
// Created by Asus on 4/18/2023.
//

#include "student.h"
#include <iostream>
using namespace std;

student::student(string n, int a, string m, double g) {
    name = n;
    age = a;
    major = m;
    gpa = g;

}

void student::setname(string n) {
    name = n;

}

void student::setage(int a) {
    age = a;

}

void student::setmajor(string m) {
    major = m;

}

void student::setgpa(double g) {
    gpa = g;

}

string student::getname() {
    return name;
}

int student::getage() {
    return age;
}

string student::getmajor() {
    return major;
}

double student::getgpa() {
    return gpa;
}

void student::printinformation() {
    cout<<"name"<<name<<endl;
    cout<<"age"<<age<<endl;
    cout<<"major"<<major<<endl;
    cout<<"gpa"<<gpa<<endl;

}

bool student::highgpa() {
    return gpa >=3.65;
}

