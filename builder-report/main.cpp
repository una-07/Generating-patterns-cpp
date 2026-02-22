#include "TextReportBuilder.h"
#include "HtmlReportBuilder.h"
#include "ReportDirector.h"

int main() {
    ReportDirector director;

    TextReportBuilder textBuilder;
    director.Construct(textBuilder);
    Report textReport = textBuilder.GetReport();
    textReport.Show();

    HtmlReportBuilder htmlBuilder;
    director.Construct(htmlBuilder);
    Report htmlReport = htmlBuilder.GetReport();
    htmlReport.Show();

    return 0;
}
