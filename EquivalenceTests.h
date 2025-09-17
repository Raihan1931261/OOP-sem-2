#pragma once
#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() { pos(); neg(); mixed(); }
private:
    void pos()   { Addition a; if (a.add(10,5)  != 15) std::cout << "pos failed\n"; }
    void neg()   { Addition a; if (a.add(-4,-5) != -9) std::cout << "neg failed\n"; }
    void mixed() { Addition a; if (a.add(-3,7)  != 4)  std::cout << "mixed failed\n"; }
};
