#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket {
protected:
    int price;
    std::string code;
    std::string date;

public:
    Ticket(int price, std::string code, std::string date);

    virtual std::string showDetail() const;

    int getPrice() const;
    int getPrice(int price_discount) const;

    std::string getCode() const;
    std::string getDate() const;

};

#endif // TICKET_H
