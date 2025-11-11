#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;


class Instructor:public Person{
private:
string department;
int experienceYears;
public:
Instructor();
Instructor(string name,int id,string department , int experienceYears);
void setDepartment(string d);
void setExperienceYears(int e);

getDepartment();
string getDepartment() const;
int getExperienceYears() const;
void display();











#endif
