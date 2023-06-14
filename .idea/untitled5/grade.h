//
// Created by Asus on 5/18/2023.
//

#ifndef UNTITLED5_GRADE_H
#define UNTITLED5_GRADE_H
#include "string"

class grade {
    string subject;
    double score;
    double maxScore;
    double credits;


public:
    grade(string s, double sc, double m, double c);
    void printinfo();
    double getpercentage();
    string getlettergrade();
    double getgradepoints();
    double getcredits();




};


#endif //UNTITLED5_GRADE_H
