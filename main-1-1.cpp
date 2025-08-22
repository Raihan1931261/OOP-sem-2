#include <iostream>
#include "Person.h"

Person* createPersonArray(int n); // from function-1-1.cpp

int main() {
    int n = 3;
    Person* arr = createPersonArray(n);
    for (int i = 0; i < n; ++i) {
        std::cout << i << ": " << arr[i].name << ", " << arr[i].age << '\n';
    }
    delete[] arr;
    return 0;
}
