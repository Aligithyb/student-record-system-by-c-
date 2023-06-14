//
// Created by Asus on 4/24/2023.
//

#include "grade.h"
#include "iostream"
using namespace std;
grade::grade(string sub, int s, int max) {
    subject = sub;
    score = s;
    maxscore = max;

}

void grade::setsubject(string s) {
    subject = s;

}

void grade::setscore(int s) {
    score = s;

}

void grade::setmaxscore(int max) {
    maxscore = max;

}

string grade::getsubject() {
    return subject;
}

int grade::getscore() {
    return score;
}

int grade::getmaxscore() {
    return maxscore;
}

void grade::printinfo() {
    cout<<"subject"<<subject<<endl;
    cout<<"score"<<score<<"/"<<maxscore<<endl;
    cout<<"grade"<<getlettergrade()<<endl;


}

double grade::getpercentage() {
    return (double) score /maxscore*100;
}

string grade::getlettergrade() {
    double percentage = getpercentage();
    if (percentage>=90){
        return "A";}
    else if (percentage>=80){
        return "B";}
    else if (percentage>=70){
        return "C";}
    else if(percentage>=60){
        return "D";}
    else{
        return "F";}


    }




