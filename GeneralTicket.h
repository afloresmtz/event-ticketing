#ifndef GENERALTICKET_H
#define GENERALTICKET_H

#include <string>
#include "Ticket.h"

class GeneralTicket : public Ticket {
private:
    std::string zone;
public:
    GeneralTicket(int price, std::string code, std::string date, std::string zone);

    std::string showDetail() override;
};

#endif
