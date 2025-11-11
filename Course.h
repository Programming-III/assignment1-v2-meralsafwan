#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
#include "Instructor.h"
using namespace std;
class Course{
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;
public:
Course();
Course( string courseCode,string courseName, int maxStudents);
~Course();
void setInstructor( const Instructor instr);
bool addStudent(const Student s);
void displayCourseInfo() const;















#endif
