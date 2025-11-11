#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person:Person():name(""),id(0){}
Person Person (const string name,int id) : name(name),id(id){
}

void Person::setName(string n){
name=n;
}
void Person :: setId(int i){
id=i;
}
string Person::getName() {
return name;
}
int Person:: getId(){
return id;
}
void Person::display(){
cout<<"Name:"<<name <<"Id:"<<id<<endl;
}
Person::~Person();








// ==================== Student Class Implementation ====================
Student::Student() : Person(), yearLevel(0), major("") {}
Student::Student(const string& name, int id, int yearLevel, const string& major)
    : Person(name, id), yearLevel(yearLevel), major(major) {}

void Student::setYearLevel(int y) { 
   yearLevel = y;
}

void Student::setMajor(const string& m) { 
   major = m;
}
int Student::getYearLevel() const {
   return yearLevel;
}
string Student::getMajor() const { 
   return major; 
}
void Student::display() const {
    cout << "Name: " << getName() << "Year: " << yearLevel << "Major: " << major << ;
}

// ==================== Instructor Class Implementation ====================
Instructor::Instructor() : Person(), department(""), experienceYears(0) {}
Instructor::Instructor(const string& name, int id, const string& department, int experienceYears)
    : Person(name, id), department(department), experienceYears(experienceYears) {}
void Instructor::setDepartment(const string& d) { department = d; }
void Instructor::setExperienceYears(int e) { experienceYears = e; }
string Instructor::getDepartment() const { return department; }
int Instructor::getExperienceYears() const { return experienceYears; }
void Instructor::display() const {
    cout << "Name: " << getName()
         << "\nDepartment: " << department
         << "\nExperience: " << experienceYears << " years\n";
}






// ==================== Course Class Implementation ====================


Course::Course() : courseCode(""), courseName(""), maxStudents(0), students(nullptr), currentStudents(0) {}
Course::Course(const string& courseCode, const string& courseName, int maxStudents)
    : courseCode(courseCode), courseName(courseName), maxStudents(maxStudents), currentStudents(0) {
    students = new Student[maxStudents];
}
Course::~Course() { delete[] students; }
void Course::setInstructor(const Instructor& instr) { instructor = instr; }
bool Course::addStudent(const Student& s) {
    if (currentStudents >= maxStudents) return false;
    students[currentStudents++] = s;
    return true;
}
void Course::displayCourseInfo() const {
    cout << "Course: " << courseCode << " - " << courseName << "\n";
    cout << "Max Students: " << maxStudents << "\n";
    cout << "Currently Enrolled: ";
    if (currentStudents > 0)
        cout << students[0].getName() << " (ID: " << students[0].getId() << ")\n\n";
    else
        cout << "None\n\n";

    cout << "Instructor Info:\n";
    instructor.display();
    cout << "\nStudent Info:\n";
    for (int i = 0; i < currentStudents; ++i) {
        students[i].display();
        cout << "\n";
    }
}








// ==================== Main Function ====================
int main() {
Course course("CS101","introduction to programming",3);   
Instructor instr("Dr.Lina Khaled,1001,"CS",5);
Student stu("Omar Nabil ,2200,2,"informatics);
course.setIstructor(instr);
course.addStudent(stu);
course.displayCourseInfo();

    return 0;
}
