//
// Created by Asus on 5/18/2023.
//

#include "student.h"
#include "student.h"
#include <iostream>
#include "vector"
using namespace std;

student::student(string name,int age,string m,double g): pearson(name,age),major(m),gpa(g){

}

void student::printinfo() {
//    override
    pearson::printInfo();
    cout<<"major"<<major<<endl;
//    to take twp decimals from the gpa
    cout<<"gpa"<<fixed<<setprecision(2)<<gpa<<endl;

}

void student::addgrade(shared_ptr<grade> Grade) {
   Grades.push_back(Grade);

}

double student::getgpa() {
    if(Grades.empty()){
        return 0.0;
    }
    double totalgradescore=0.0;
    double allcredits=0.0;
//    we will make for each and makke the grade passed in the vector by reference to make a direct contact with it not a copy
    for(auto& Grade:Grades){
        double pointsgrade= Grade->getgradepoints();
        double credits=Grade->getcredits();
        totalgradescore+=credits;

    }
    return totalgradescore/allcredits;
}









