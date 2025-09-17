#include "Invoice.h"

// constructor
Invoice::Invoice(std::string id) : invoiceId(id), dollarsOwed(0) {}

// add cost to invoice (only if positive)
void Invoice::addServiceCost(double costDollars) {
    if (costDollars > 0) {
        dollarsOwed += costDollars;
    }
}

// return total owed
double Invoice::getDollarsOwed() {
    return dollarsOwed;
}

// return invoice id
std::string Invoice::getInvoiceId() {
    return invoiceId;
}
