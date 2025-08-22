#include "Person.h"

PersonList createPersonList(int n) {
    PersonList list;
    list.numPeople = (n > 0) ? n : 0;
    if (list.numPeople > 0) {
        list.people = new Person[list.numPeople];
        for (int i = 0; i < list.numPeople; ++i) {
            list.people[i].name = "Jane Doe";
            list.people[i].age = 1;
        }
    }
    return list;
}
