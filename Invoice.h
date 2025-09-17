#include <string>

// Class representing a billing invoice
class Invoice {
private:
    std::string invoiceId;   // Unique invoice ID
    double dollarsOwed;      // Amount owed in dollars

public:
    // Constructor initializes invoice with an ID
    Invoice(std::string id) : invoiceId(id), dollarsOwed(0) {}

    // Adds service cost to the invoice (only positive values allowed)
    void addServiceCost(double costDollars) {
        if (costDollars > 0) {
            dollarsOwed += costDollars;
        }
    }

    // Returns the total amount owed
    double getDollarsOwed() {
        return dollarsOwed;
    }

    // Returns the invoice ID
    std::string getInvoiceId() {
        return invoiceId;
    }
};
