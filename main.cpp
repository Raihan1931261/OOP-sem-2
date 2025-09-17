#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"

// Entry point of the program
int main() {
    // Run Addition tests
    UnitTest unittest;
    unittest.runTests();

    // Run equivalence class tests
    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();

    // Run Invoice class tests
    InvoiceTest invoiceTest;
    invoiceTest.runTests();

    return 0;
}
