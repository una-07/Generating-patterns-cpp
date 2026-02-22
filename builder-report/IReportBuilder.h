#pragma once
#include <string>
#include "Report.h"

class IReportBuilder {
public:
    virtual void SetHeader(const std::string&) = 0;
    virtual void SetContent(const std::string&) = 0;
    virtual void SetFooter(const std::string&) = 0;
    virtual Report GetReport() = 0;
    virtual ~IReportBuilder() = default;
};
