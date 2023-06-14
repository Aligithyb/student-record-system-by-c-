//
// Created by Asus on 4/30/2023.
//

#include "coursemark.h"

coursemark::coursemark(string n, int num) : course(n, num), grade("", 0, 0){

}

void coursemark::addGrade(string student, int score, int maxScore) {
    grades.push_back(new grade(getname(), score, maxScore));
    grades.back()->printinfo();
}

void coursemark::printGrades() {
    cout << "Grades for " << getname() << " (" << getnumber() << "):" << endl;
    for (int i = 0; i < grades.size(); i++) {
        cout << "- " << grades[i]->getsubject() << " (" << grades[i]->getscore() << "/" << grades[i]->getmaxscore() << "): " << grades[i]->getLetterGrade() << endl;
    }
}


