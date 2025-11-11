#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

Person class{
private:
string name;
int id;
public:
Person();
Person(string name, int id);
void setName(string name);
void setId(int id);
string getName() const;
int getId() const;
void display();
};












#endif
