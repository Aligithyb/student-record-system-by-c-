//
// Created by Asus on 4/29/2023.
//

#include "internationalstudent.h"
#include "student.h"
using namespace std;
#include "iostream"


string internationalstudent::getCountry() {
    return country;
}

internationalstudent::internationalstudent(string n, int a, string m, double g, string c) :student(n,a,m,g){
    country = c;
}

void internationalstudent::printInfo() {
    cout << "Name: " << getname() << endl;
    cout << "Age: " << getage() << endl;
    cout << "Major: " << getmajor() << endl;
    cout << "GPA: " << getgpa() << endl;
    cout << "Country: " << country << endl;
}






