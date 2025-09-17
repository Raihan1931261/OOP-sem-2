#pragma once
#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() { addCost(); idOk(); }
private:
    void addCost() {
        Invoice inv("A1");
        inv.addServiceCost(10);
        if (inv.getDollarsOwed() != 10) std::cout << "add cost failed\n";
    }
    void idOk() {
        Invoice inv("XYZ");
        if (inv.getInvoiceId() != "XYZ") std::cout << "id failed\n";
    }
};
