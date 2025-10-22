#ifndef BROWSERHISTORY_H
#define BROWSERHISTORY_H

#include <stack>
#include <string>

class BrowserHistory {
private:
    std::stack<std::string> backHistory;
    std::string currentPage;

public:
    BrowserHistory(); // constructor
    void visitPage(const std::string& url);
    void goBack();
    bool canGoBack() const;
    std::string getCurrentPage() const;
    int getBackHistorySize() const;
};

#endif
