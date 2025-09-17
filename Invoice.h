#pragma once
#include <string>

class Invoice {
private:
    std::string invoiceId;
    double dollarsOwed;
public:
    Invoice(std::string id);
    void addServiceCost(double costDollars);
    double getDollarsOwed();
    std::string getInvoiceId();
};
