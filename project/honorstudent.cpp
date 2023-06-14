//
// Created by Asus on 4/29/2023.
//

#include "honorstudent.h"

honorstudent::honorstudent(string n, int a, string m, double g) : student(n, a, m, g) {

}

bool honorstudent::hasHonors() {
    return getgpa() >= 3.75; // Honors for higher eductional students
}
