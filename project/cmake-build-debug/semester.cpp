//
// Created by Asus on 4/25/2023.
//

#include "semester.h"

semester::semester(string n, int y) {
    name = n;
    year = y;

}

void semester::setname(string n) {
    name = n;

}

void semester::setyear(int y) {
    year = y;

}

void semester::setsubjects(vector<string> s) {
    subjects = s;

}

void semester::setgrades(vector<int> g) {
    grades = g;

}

string semester::getname() {
    return name;
}

int semester::getyear() {
    return year;
}

vector<string> semester::getsubjects() {
    return subjects;
}

vector<int> semester::getgrades() {
    return grades;
}

void semester::addSubject(string subject) {
    subjects.push_back(subject);
    grades.push_back(-1);

}

void semester::removeSubject(string subject) {
    for (int i = 0; i < subjects.size(); i++) {
        if (subjects[i] == subject) {
            subjects.erase(subjects.begin() + i);
            grades.erase(grades.begin() + i);
            break;
        }
    }

}

void semester::setGrade(string subject, int grade) {
    for (int i = 0; i < subjects.size(); i++) {
        if (subjects[i] == subject) {
            grades[i] = grade;
            break;
        }
    }

}

double semester::getGPA() {
    double totalGradePoints = 0;
    int totalCredits = 0;
    for (int i = 0; i < subjects.size(); i++) {
        int grade = grades[i];
        if (grade >= 0 && grade <= 100) {
            int credits = 3; // all subjects 3 credits
            totalGradePoints += grade * credits;
            totalCredits += credits;
        }
    }
    if (totalCredits == 0) {
        return 0;
    } else {
        return totalGradePoints / (totalCredits * 1.0);
    }

}
