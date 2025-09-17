#include "Invoice.h"

// constructor
Invoice::Invoice(std::string id) : invoiceId(id), dollarsOwed(0) {}

// add cost (only if positive)
void Invoice::addServiceCost(double costDollars) {
    if (costDollars > 0) dollarsOwed += costDollars;
}

// getters
double Invoice::getDollarsOwed() { return dollarsOwed; }
std::string Invoice::getInvoiceId() { return invoiceId; }
