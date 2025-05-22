#ifndef VIPTICKET_H
#define VIPTICKET_H

#include <string>

class VIPTicket : public Ticket {
private:
    std::string benefits;
public:
    VIPTicket(int price, std::string code, std::string date, std::string benefits);

    std::string showDetails() override;
};

#endif

