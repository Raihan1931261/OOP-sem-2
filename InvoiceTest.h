#include <iostream>
#include "Invoice.h"

// Test class for the Invoice class
class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testInvoiceId();
    }

private:
    // Check if adding service cost works properly
    void testAddServiceCost() {
        Invoice invoice("ABC1");
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed() != 10) {
            std::cout << "AddServiceCost test failed!" << std::endl;
        }
    }

    // Check if invoice ID is stored correctly
    void testInvoiceId() {
        Invoice invoice("XYZ123");
        if (invoice.getInvoiceId() != "XYZ123") {
            std::cout << "InvoiceId test failed!" << std::endl;
        }
    }
};
