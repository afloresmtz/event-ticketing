#include "Ticket.h"
#include <sstream>

Ticket::Ticket(int price, std::string code, std::string date)
    : price(price), code(code), date(date) {}

std::string Ticket::showDetail() const {
    std::ostringstream detail;
    detail <<"Ticket detail: \n"<<"======================\n"
<< "Code: " << code << "\n"
        << "Date: " << date << "\n"
           << "Price: " << price << "\n"
           <<"======================\n";
    
    return detail.str();
}

