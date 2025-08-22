#include <iostream>
#include "Person.h"

PersonList createPersonList(int n); // from function-1-2.cpp

int main() {
    PersonList list = createPersonList(4);
    std::cout << "numPeople=" << list.numPeople << '\n';
    for (int i = 0; i < list.numPeople; ++i) {
        std::cout << i << ": " << list.people[i].name << ", " << list.people[i].age << '\n';
    }
    delete[] list.people;
    return 0;
}
