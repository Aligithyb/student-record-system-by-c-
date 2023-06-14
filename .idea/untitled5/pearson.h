//
// Created by Asus on 5/19/2023.
//

#ifndef UNTITLED5_PEARSON_H
#define UNTITLED5_PEARSON_H
#include "iostream"
#include "string"
using namespace std;

class pearson {
protected:
    string name;
    int age;
public:
    pearson(string n, int a);
    virtual void printinfo();



};


#endif //UNTITLED5_PEARSON_H
