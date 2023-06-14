//
// Created by Asus on 5/18/2023.
#include "string"
#include "iostream"
using namespace std;
#include "grade.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <memory>


grade::grade(string s, double sc, double m, double c) {
    subject=s;
    score=sc;
    maxScore=m;
    credits=c;

}

void grade::printinfo() {
    cout<<"subjects"<<subject<<endl;
    cout<<"score"<<fixed<<setprecision(2)<<score<<"/"<<maxScore<<endl;
    cout<<"grade"<<getlettergrade()<<endl;
    cout<<"credits"<<fixed<<setprecision(2)<<credits<<endl;



}

double grade::getpercentage() {
    return score/maxScore*100.0;
}

string grade::getlettergrade() {
    double percentage=getpercentage();
    if(percentage >= 90.0){
        return "A";
    } else if(percentage >= 80.0){
        return "B";
    } else if(percentage >= 70.0){
        return "C";
    } else if(percentage >= 60.0){
        return "D";
    } else{
        return "F";
    }
}

double grade::getgradepoints() {
    string lettergrade=getlettergrade();
    if(lettergrade == "A"){
        return 4.0;
    } else if(lettergrade == "B"){
        return 3.0;
    } else if(lettergrade == "C"){
        return 2.0;
    } else if(lettergrade == "D"){
        return 1.0;
    } else{
        return 0.0;
    }
}

double grade::getcredits() {
    return credits;
}
