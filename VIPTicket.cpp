#include "VIPTicket.h"
#include <string>
#include <sstream>

VIPTicket::VIPTicket(int price, std::string code, std::string date, std::string benefits):
    Ticket(price, code, date), benefits(benefits) { }

std::string VIPTicket::showDetail() {
    std::ostringstream detail;
    detail <<"VIP TICKET:  \n"<<"======================\n"
    << "Code: " << code << "\n"
    << "Date: " << date << "\n"
    << "Benefits" << benefits << "\n"
    << "Final Price: " << price * (1.25) << "\n"
    <<"======================\n";

    return detail.str();
}

