#include "ticketlist.h"
#include <iostream>

TicketList::TicketList(int count)
{
    if(count == 0)
    {
        m_list = nullptr;
        m_count_tickets = 0;
        return;
    }

    m_count_tickets = count;
    m_list = new AirTicket[count];
    for(int ticket{ 0 }; ticket < count; ++ticket)
        std::cin >> m_list[ticket];
}

void TicketList::addTicket()
{
    AirTicket *list = new AirTicket[m_count_tickets + 1];

    if(m_count_tickets > 0)
        for(int elem{ 0 }; elem < m_count_tickets; ++elem)
            list[elem] = m_list[elem];


    std::cin >> list[m_count_tickets];
    ++m_count_tickets;
    delete[] m_list;
    m_list = list;
}

void TicketList::showList() const
{
    if(m_count_tickets == 0)
    {
        std::cout << "You don't have tickets!\n";
        return;
    }

    system("cls");
    for(int ticket{ 0 }; ticket < m_count_tickets; ++ticket)
    {
        std::cout << "\t#" << ticket + 1 << '\n';
        m_list[ticket].printTicket();
    }
}

void TicketList::deleteTicket()
{
    if(m_count_tickets == 0)
    {
        std::cout << "You don't have tickes!\n";
        return;
    }

    int index{ 0 };
    showList();
    std::cout << "What ticket do you want to delete?:";
    std::cin >> index;

    --index;
    AirTicket *list = new AirTicket[m_count_tickets - 1];

    for(int before = 0; before < index; ++before)
        list[before] = m_list[before];

    for(int after = index + 1; after < m_count_tickets; ++after)
        list[after - 1] = m_list[after];

    --m_count_tickets;
    delete [] m_list;
    m_list = list;
}
