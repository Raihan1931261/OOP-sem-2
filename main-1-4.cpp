#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);                 // from function-1-2.cpp
PersonList shallowCopyPersonList(PersonList pl);    // from function-1-4.cpp

int main() {
    PersonList original = createPersonList(2);
    PersonList shallow = shallowCopyPersonList(original);

    original.people[1].name = "Bob";
    original.people[1].age = 42;

    std::cout << "original[1]: " << original.people[1].name << ", " << original.people[1].age << '\n';
    std::cout << "shallow[1]:  " << shallow.people[1].name << ", " << shallow.people[1].age << '\n';

    // Only delete once since they share the same array
    delete[] original.people;
    shallow.people = nullptr; // avoid accidental double free in other tests
    return 0;
}
