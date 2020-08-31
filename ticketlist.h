#ifndef TICKETLIST_H
#define TICKETLIST_H

#include "airticket.h"

class TicketList
{
public:
    TicketList(int count = 0);
    ~TicketList() { delete [] m_list; }
    void addTicket();
    void deleteTicket();
    void showList() const;

private:
    AirTicket *m_list;
    int m_count_tickets;
};

#endif
