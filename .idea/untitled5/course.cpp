//
// Created by Asus on 5/18/2023.
//

#include "course.h"
#include "course.h"


course::course(string n, int nu) {
    name=n;
    number=nu;

}

void course::addstudents(shared_ptr<student> Student) {
    students.push_back(Student);

}

void course::addgrade(shared_ptr<grade> Grade) {
    Grades.push_back(Grade);


}

void course::printstudents() {
    cout<<"students in"<<name<<" ("<<number<<"):"<<endl;
    for( const auto& Student : students ){
        Student->printinfo();
    }

}

void course::printgrades() {
    cout<<"grades for"<<name<<" ("<<number<<") "<<endl;
    for( const auto& Grade:Grades ){
        Grade->printinfo();
    }

}

double course::getaverage() {
    if(Grades.empty()){
        return 0.0;
    }
    double totalgradescore=0.0;
    double allcredits=0.0;
//    we will make for each and makke the grade passed in the vector by reference to make a direct contact with it not a copy
    for(auto& Grade:Grades){
        double pointsgrade= Grade->getgradepoints();
        double credits=Grade->getcredits();
        totalgradescore+=pointsgrade*credits;
        allcredits+=credits;
    }
    return totalgradescore/allcredits;
}

vector<shared_ptr<student>> course::getstudentss() {
    return students;
}

string course::getname() {
    return name;
}

int course::getnumber() {
    return number;
}
