#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people = nullptr;
    int numPeople = 0;
};

#endif // PERSON_H
