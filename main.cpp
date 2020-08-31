#include <iostream>
#include "ticketlist.h"


void interface()
{
    TicketList list;

    while(true)
    {
        std::cout << "Interface\n";
        std::cout << "1.Add a ticket\n";
        std::cout << "2.Delete a ticket\n";
        std::cout << "3.Show list\n";
        std::cout << "4.Close program\n";
        int action{ 0 };
        std::cout << "Choose an action:";
        std::cin >> action;

        switch(action)
        {
        case 1: list.addTicket(); break;
        case 2: list.deleteTicket(); break;
        case 3: list.showList(); break;
        case 4: return;
        }
    }
}

int main()
{
    interface();
    return 0;
}
