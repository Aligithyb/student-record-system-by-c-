//
// Created by Asus on 5/18/2023.
//

#include "semster.h"
#include "course.h"
#include "grade.h"
#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <memory>
semester::semester(string n) {
    name=n;

}

void semester::addcouse(shared_ptr<course> Course) {
    courses.push_back(Course);


}

void semester::printcourses() {
    cout<<"courses in "<<name<<":"<<endl;
    for(auto& Course: courses){
        cout<<Course->getname()<<" ("<<Course->getnumber()<<")"<<endl;

    }

}

double semester::getavggrade () {
    if(courses.empty()){
        return 0.0;
    }
    double totalgradescore=0.0;
    double allcredits=0.0;
//    we will make for each and makke the grade passed in the vector by reference to make a direct contact with it not a copy
    for(auto& Course:courses){
        double coursegrade= Course->getaverage();
        double coursecredits=3.0;
        totalgradescore+=coursegrade*coursecredits;
        allcredits+=coursecredits;
    }
    return totalgradescore/allcredits;

}

string semester::getname() {
    return name;
}

vector<shared_ptr<course>> semester::getcourses() {
    return courses;
}

