//
// Created by Asus on 4/18/2023.
//

#include "course.h"

course::course(string n, int num) {
    name = n;
    number = num;




}

void course::setname(string n) {
    name = n;
}

void course::setnumber(int nu) {
    number = nu;

}

void course::setstudents(vector<string> s) {
    students = s;

}

string course::getname() {
    return name;
}

int course::getnumber() {
    return number;
}

vector<string> course::getstudents() {
    return students;
}

void course::addstudents(string student) {
   students.push_back(student);
}

void course::removestudent(string student) {
    for (int i = 0;i<students.size();i++){
        if (students[i] == student){
            students.erase(students.begin() + i);
            break;

        }
    }


}

void course::printstudents() {
    cout << "Students in " << name << " (" << number << "):" << endl;
    for (int i = 0; i < students.size(); i++){
        cout << "- " << students[i] << endl;
}

}



