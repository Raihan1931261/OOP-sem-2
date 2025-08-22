#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);              // from function-1-2.cpp
PersonList deepCopyPersonList(PersonList pl);    // from function-1-3.cpp

int main() {
    PersonList original = createPersonList(3);
    original.people[0].name = "Alice";
    original.people[0].age = 20;

    PersonList deep = deepCopyPersonList(original);

    // mutate original to confirm independence
    original.people[0].name = "Changed";
    original.people[0].age = 99;

    std::cout << "original[0]: " << original.people[0].name << ", " << original.people[0].age << '\n';
    std::cout << "deep[0]:     " << deep.people[0].name << ", " << deep.people[0].age << '\n';

    delete[] original.people;
    delete[] deep.people;
    return 0;
}
