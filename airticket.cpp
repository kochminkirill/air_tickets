#include "airticket.h"
#include <iostream>

AirTicket::AirTicket(const std::string& destination, int number_flight, const std::string& fio, const std::string& date_departure) :
    m_destination{ destination }, m_number_flight{ number_flight }, m_fio{ fio }, m_date_departure{ date_departure }{}

void AirTicket::printTicket() const
{
    std::cout << "destination\t|" << m_destination << '\n';
    std::cout << "number flight\t|" << m_number_flight << '\n';
    std::cout << "fio\t\t|" << m_fio << '\n';
    std::cout << "date departure\t|" << m_date_departure << "\n\n";
}

std::istream& operator>>(std::istream &in, AirTicket &ticket)
{
    std::cout << "enter destination:";
    in >> ticket.m_destination;
    std::cout << "enter a number flight:";
    in >> ticket.m_number_flight;
    in.ignore(INT_MAX, '\n');
    std::cout << "enter fio:";
    std::getline(std::cin, ticket.m_fio);
    std::cout << "enter a date departure:";
    in >> ticket.m_date_departure;
    std::cout << "\n";
    return in;
}



