#include "Ticket.cpp"
#include "VIPTicket.cpp"
#include "GeneralTicket.cpp"
#include <iostream>
#include <vector>

int main(){
    //Ticket ticket(100, "TCK00", "2025-09-15");
    //std::cout << ticket.showDetail();
    // this object cannot be created anymore now that Ticket is an abstract class

std::vector<Ticket*> tickets;
    tickets.push_back(new GeneralTicket(100, "GEN123", "2025-09-15", "B"));
    tickets.push_back(new VIPTicket(100, "VIP456", "2025-09-15", "Backstage access"));
    return 0;
}
