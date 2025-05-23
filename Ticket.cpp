#include "Ticket.h"
#include <sstream>

Ticket::Ticket(int price, std::string code, std::string date)
    : price(price), code(code), date(date) {}

std::string Ticket::showDetail(){
    std::ostringstream detail;
    detail <<"Ticket detail: \n"<<"======================\n"
    << "Code: " << code << "\n"
    << "Date: " << date << "\n"
    << "Price: " << price << "\n"
    <<"======================\n";

    return detail.str();
}

int Ticket::getPrice() const {
    return price;
}

int Ticket::getPrice(int price_discount) const {
    return price*(1 + price_discount);
}

std::string Ticket::getCode() const {
    return code;
}

std::string Ticket::getDate() const {
    return date;
}
