#include "Ticket.h"
#include <sstream>

Ticket::Ticket(int price, std::string code, std::string date)
    : price(price), code(code), date(date) {}

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
