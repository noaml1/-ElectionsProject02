
#include <iostream>
#include "Date.h"
using namespace std;

namespace electionProject
{
    /*bool Date::setDay(int day)
{
     if ((day >= 1) && (day <= maxDayPerMonthArr[this->_month]))
     {
          this->_day = day;
          return true;
     }
     cout << "Please enter a valid day  (1-31)" << endl;
     return  false;

}


bool Date::setMonth(int month)
{
     if ((month>=1) && (month <=12))
     {
          this->_month = month;
          return true;
     }
     cout << "Please enter a valid month (1-12)" << endl;
     return  false;

}

bool Date::setYear(int year)//////////////////////////////////////////////////////////////////////////??????????????????????????????????
{
     this->_year = year;
     return true;
}*/

    void Date::operator=(const Date& otherDay)
    {
        if (this != &otherDay)
        {
            this->_day = otherDay._day;
            this->_month = otherDay._day;
            this->_year = otherDay._year;

        }

    }

    Date::Date(int day, int month, int year)
    {
        _day = day;
        _month = month;
        _year = _year;

    }

    Date::Date(const Date& otherDate) :_day(otherDate._day), _month(otherDate._month), _year(otherDate._year)
    {
    }
}

