#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"

int main() {
    UnitTest u; u.runTests();
    EquivalenceTests e; e.runTests();
    InvoiceTest i; i.runTests();
    return 0;
}
