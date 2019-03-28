//
// Created by Luzh on 2019-03-15.
//

#include "PageMaker.h"
#include "DataBase.h"
#include "HtmlWriter.h"

void PageMaker::makeWelcomePage(std::string mailaddr, std::string fileName) {
    Properties mailprop = DataBase::getProperties("maildata.txt");
    std::string username;
    Properties::iterator it = mailprop.find(mailaddr);
    if (it != mailprop.end()) {
        username = it->second;
    }
    HtmlWriter *writer = new HtmlWriter(fileName);
    writer->title("Welcome to " + username + "'s page!");
    writer->paragraph(username  + "欢迎来到" + username + "的主页");
    writer->paragraph("等着你的邮件哦");
    writer->mailto(mailaddr, username);
    writer->close();
    delete(writer);
    writer = nullptr;
}
