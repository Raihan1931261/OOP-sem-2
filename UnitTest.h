#pragma once
#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() { testAddition(); }
private:
    void testAddition() {
        Addition a;
        if (a.add(1,2) != 3) std::cout << "Test 1 failed\n";
        if (a.add(-1,-1) != -2) std::cout << "Test 2 failed\n";
        if (a.add(0,5) != 5) std::cout << "Test 3 failed\n";
    }
};
