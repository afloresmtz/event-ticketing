#include "Ticket.cpp"
#include "VIPTicket.cpp"
#include "GeneralTicket.cpp"
#include <iostream>

int main(){
    Ticket ticket(100, "TCK00", "2025-09-15");
    std::cout << ticket.showDetail();
    GeneralTicket generalTicket(100, "GEN123", "2025-09-15", "B");
    std::cout << generalTicket.showDetail();
    VIPTicket vipTicket(125, "VIP456", "2025-09-15", "Backstage access");
    std::cout << vipTicket.showDetail();
    return 0;
}
