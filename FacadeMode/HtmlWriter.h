//
// Created by Luzh on 2019-03-08.
//

#ifndef FACADEMODE_HTMLWRITER_H
#define FACADEMODE_HTMLWRITER_H

#include <fstream>
#include <string>

class HtmlWriter {
public:
    HtmlWriter(std::string fileName) {
        writer.open(fileName);
    }
    void title(std::string title);
    void paragraph(std::string msg);
    void link(std::string href, std::string caption);
    void mailto(std::string mailaddr, std::string usrName);
    void close();
private:
    std::ofstream writer;

};


#endif //FACADEMODE_HTMLWRITER_H
