#ifndef AIRTICKET_H
#define AIRTICKET_H

#include <string>
#include <istream>

class AirTicket
{
public:
    AirTicket(const std::string& = "", int = 0, const std::string& = "", const std::string& = "");
    void printTicket() const;
    friend std::istream& operator>>(std::istream&, AirTicket&);

private:
    std::string m_destination;
    int m_number_flight;
    std::string m_fio;
    std::string m_date_departure;
};

#endif
