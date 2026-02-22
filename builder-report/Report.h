#pragma once
#include <string>

class Report {
public:
    std::string header;
    std::string content;
    std::string footer;

    void Show() const;
};
