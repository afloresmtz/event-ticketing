#include "GeneralTicket.h"
#include <string>

GeneralTicket::GeneralTicket(int price, std::string code, std::string date, std::string zone):
    Ticket(price, code, date),zone(zone) { }

std::string GeneralTicket::showDetail() {
    std::ostringstream detail;
    detail <<"General Ticket detail: \n"<<"======================\n"
    << "Code: " << code << "\n"
    << "Date: " << date << "\n"
    << "Zone" << zone << "\n"
    << "Final Price: " << price * (0.95) << "\n"
    <<"======================\n";

    return detail.str();
}
