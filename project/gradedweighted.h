//
// Created by Asus on 4/30/2023.
//

#ifndef UNTITLED_IML_GRADEDWEIGHTED_H
#define UNTITLED_IML_GRADEDWEIGHTED_H
#include "grade.h"
//inheritance
class gradedweighted :public grade{
    double weight;
public:
    gradedweighted(string sub, int s, int max, double w);
    double getWeightedPercentage();
    string getLetterGrade() override;

};


#endif //UNTITLED_IML_GRADEDWEIGHTED_H
