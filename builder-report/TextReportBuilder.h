#pragma once
#include "IReportBuilder.h"

class TextReportBuilder : public IReportBuilder {
private:
    Report report;
public:
    void SetHeader(const std::string& h) override;
    void SetContent(const std::string& c) override;
    void SetFooter(const std::string& f) override;
    Report GetReport() override;
};
