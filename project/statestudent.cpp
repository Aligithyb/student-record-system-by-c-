//
// Created by Asus on 4/30/2023.
//

#include "statestudent.h"
#include "iostream"
using namespace std;
statestudent::statestudent(string n, int a, string m, double g, string s) : student(n, a, m, g){
    state = s;
}

void statestudent::printinformation() {
    student::printinformation();
    cout << "State: " << state << endl;
}

