//
// Created by Asus on 4/24/2023.
//

#ifndef UNTITLED_GRADE_H
#define UNTITLED_GRADE_H
#include "iostream"
using namespace std;
#include "string"

class grade {
    string subject;
    int score;
    int maxscore;

public:
    grade(string sub,int s,int max);
    void setsubject(string s);
    void setscore(int s);
    void setmaxscore(int max );
    string getsubject();
    int getscore();
    int getmaxscore();
    void printinfo();
    double getpercentage();
    string getlettergrade();
    virtual string getLetterGrade();

};


#endif //UNTITLED_GRADE_H
