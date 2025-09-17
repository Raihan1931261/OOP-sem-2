#include <iostream>
#include "Addition.h"

// A test class to check whether Addition class works correctly
class UnitTest {
public:
    // Public function that runs all test cases
    void runTests() {
        testAddition();
    }

private:
    // Private function to test Addition::add
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        if (addition.add(-1, -1) != -2) {
            std::cout << "Test 2 failed!" << std::endl;
        }

        if (addition.add(0, 5) != 5) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
};
