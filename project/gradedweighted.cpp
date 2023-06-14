//
// Created by Asus on 4/30/2023.
//

#include "gradedweighted.h"
gradedweighted::gradedweighted(string sub, int s, int max, double w) : grade(sub, s, max){
    weight = w;
}

double gradedweighted::getWeightedPercentage() {
    return getpercentage() * weight;
}

string gradedweighted::getLetterGrade() {
    double percentage = getWeightedPercentage();
    if (percentage >= 90) {
        return "A";
    } else if (percentage >= 80) {
        return "B";
    } else if (percentage >= 70) {
        return "C";
    } else if (percentage >= 60) {
        return "D";
    } else {
        return "F";
    }
}


