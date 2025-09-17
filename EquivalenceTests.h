#include <iostream>
#include "Addition.h"

// A class to test different input categories (equivalence classes)
class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedNumbers();
    }

private:
    // Positive numbers test
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(10, 5) != 15) {
            std::cout << "Positive integers test failed!" << std::endl;
        }
    }

    // Negative numbers test
    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Negative integers test failed!" << std::endl;
        }
    }

    // One negative, one positive
    void testMixedNumbers() {
        Addition addition;
        if (addition.add(-3, 7) != 4) {
            std::cout << "Mixed numbers test failed!" << std::endl;
        }
    }
};
