#include "BrowserHistory.h"

BrowserHistory::BrowserHistory() {
    currentPage = "home";
}

void BrowserHistory::visitPage(const std::string& url) {
    backHistory.push(currentPage);
    currentPage = url;
}

void BrowserHistory::goBack() {
    if (!backHistory.empty()) {
        currentPage = backHistory.top();
        backHistory.pop();
    }
}

bool BrowserHistory::canGoBack() const {
    return !backHistory.empty();
}

std::string BrowserHistory::getCurrentPage() const {
    return currentPage;
}

int BrowserHistory::getBackHistorySize() const {
    return static_cast<int>(backHistory.size());
}
