#include <iostream>
#include "grade.h"
#include "course.h"
#include "student.h"
#include "semster.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <memory>
#include <limits>
using namespace  std;

int main() {
        // create students
        vector<shared_ptr<student>> students;
        int numStudents;
        cout << "Enter the number of students: ";
        while (!(cin >> numStudents) || numStudents <= 0) {
            cout << "Invalid input. Please enter a positive integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        for (int i = 0; i < numStudents; i++) {
            string name, major;
            int age;
            double gpa;
            cout << "Enter the name of student " << i + 1 << ": ";
            cin >> name;
            cout << "Enter the age of student " << i + 1 << ": ";
            while (!(cin >> age) || age <= 0) {
                cout << "Invalid input. Please enter a positive integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Enter the major of student " << i + 1 << ": ";
            cin >> major;
            cout << "Enter the GPA of student " << i + 1 << ": ";
            while (!(cin >> gpa) || gpa < 0 || gpa > 4) {
                cout << "Invalid input. Please enter a GPA between 0 and 4: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            shared_ptr<student> Student = make_shared<student>(name, age, major, gpa);
            students.push_back(Student);
        }

        // create grades
        vector<shared_ptr<grade>> grades;
        int numGrades;
        cout << "Enter the number of grades: ";
        while (!(cin >> numGrades) || numGrades <= 0) {
            cout << "Invalid input. Please enter a positive integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        for (int i = 0; i < numGrades; i++) {
            string subject;
            double score, maxScore, credits;
            cout << "Enter the subject of grade " << i + 1 << ": ";
            cin >> subject;
            cout << "Enter the score of grade " << i + 1 << ": ";
            while (!(cin >> score) || score < 0 || score > 100) {
                cout << "Invalid input. Please enter a score between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Enter the maximumscore of grade " << i + 1 << ": ";
            while (!(cin >> maxScore) || maxScore <= 0) {
                cout << "Invalid input. Please enter a positive number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Enter the credits of grade " << i + 1 << ": ";
            while (!(cin >> credits) || credits <= 0) {
                cout << "Invalid input. Please enter a positive number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            shared_ptr<grade> Grade = make_shared<grade>(subject, score, maxScore, credits);
            grades.push_back(Grade);
        }

        // create courses
        vector<shared_ptr<course>> courses;
        int numCourses;
        cout << "Enter the number of courses: ";
        while (!(cin >> numCourses) || numCourses <= 0) {
            cout << "Invalid input. Please enter a positive integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        for (int i = 0; i < numCourses; i++) {
            string name;
            int number;
            cout << "Enter the name of course " << i + 1 << ": ";
            cin >> name;
            cout << "Enter the number of course "<< i + 1 << ": ";
            while (!(cin >> number) || number <= 0) {
                cout << "Invalid input. Please enter a positive integer: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            shared_ptr<course> Course = make_shared<course>(name, number);
            courses.push_back(Course);

            // add students to course
            int numStudentsInCourse;
            cout << "Enter the number of students in course " << i + 1 << ": ";
            while (!(cin >> numStudentsInCourse) || numStudentsInCourse < 0 || numStudentsInCourse > numStudents) {
                cout << "Invalid input. Please enter a number between 0 and " << numStudents << ": ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            for (int j = 0; j < numStudentsInCourse; j++) {
                cout << "Enter the index (1-" << numStudents << ") of student " << j + 1 << " in course " << i + 1 << ": ";
                int studentIndex;
                while (!(cin >> studentIndex) || studentIndex < 1 || studentIndex > numStudents) {
                    cout << "Invalid input. Please enter a number between 1 and " << numStudents << ": ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                shared_ptr<student> student = students[studentIndex - 1];
                Course->addstudents(student);
            }

            // add grades to course
            int numGradesInCourse;
            cout << "Enter the number of grades in course " << i + 1 << ": ";
            while (!(cin >> numGradesInCourse) || numGradesInCourse < 0 || numGradesInCourse > numGrades) {
                cout << "Invalid input. Please enter a number between 0 and " << numGrades << ": ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            for (int j = 0; j < numGradesInCourse; j++) {
                cout << "Enter the index (1-" << numGrades << ") of grade " << j + 1 << " in course " << i + 1 << ": ";
                int gradeIndex;
                while (!(cin >> gradeIndex) || gradeIndex < 1 || gradeIndex > numGrades) {
                    cout << "Invalid input. Please enter a number between 1 and " << numGrades << ": ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                shared_ptr<grade> grade = grades[gradeIndex - 1];
                Course->addgrade(grade);
            }
        }

// create semester
        string semesterName;
        cout << "Enter the name of the semester: ";
        cin >> semesterName;
        shared_ptr<semester> semesters = make_shared<semester>(semesterName);

        // add courses to semester
        for (const auto& course : courses) {
            semesters->addcouse(course);
        }

        // print info for semester, courses, and students
        cout << "Semester: " << semesters->getname() << endl;
        cout << "Average grade: " << fixed << setprecision(2) << semesters->getavggrade() << endl;
        semesters->printcourses();
        for ( auto& course : semesters->getcourses()) {
            course->printstudents();
            course->printgrades();
        }

    }

