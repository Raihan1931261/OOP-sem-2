#include <iostream>
#include "BrowserHistory.h"

int main() {
    BrowserHistory bh;
    std::cout << "Current: " << bh.getCurrentPage() << "\n";

    bh.visitPage("google.com");
    bh.visitPage("github.com");
    bh.visitPage("stackoverflow.com");

    std::cout << "Current: " << bh.getCurrentPage() << "\n";
    bh.goBack();
    std::cout << "After going back: " << bh.getCurrentPage() << "\n";

    std::cout << "Can go back? " << (bh.canGoBack() ? "Yes" : "No") << "\n";
    std::cout << "Back history size: " << bh.getBackHistorySize() << "\n";
}
