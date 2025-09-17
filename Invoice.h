#include <string>

class Invoice {
private:
    std::string invoiceId;
    double dollarsOwed;

public:
    Invoice(std::string id); // constructor only declared
    void addServiceCost(double costDollars);
    double getDollarsOwed();
    std::string getInvoiceId();
};
