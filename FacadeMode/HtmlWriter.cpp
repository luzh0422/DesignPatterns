//
// Created by Luzh on 2019-03-08.
//

#include "HtmlWriter.h"

void HtmlWriter::title(std::string title) {
    writer << "<html>";
    writer << "<head>";
    writer << "<title>" + title + "</title>";
    writer << "</head>";
    writer << "<body>\n";
    writer << "<h1>" + title + "</h1>\n";
}

void HtmlWriter::paragraph(std::string msg) {
    writer << "<p>" + msg + "</p>";
}

void HtmlWriter::link(std::string href, std::string caption) {
    paragraph("<a href=\"" + href + "\">" + caption + "</a>");
}

void HtmlWriter::mailto(std::string mailaddr, std::string usrName) {
    link("mailto: " + mailaddr, usrName);
}

void HtmlWriter::close() {
    writer << "</body>";
    writer << "</html>\n";
    writer.close();
    writer.close();
}