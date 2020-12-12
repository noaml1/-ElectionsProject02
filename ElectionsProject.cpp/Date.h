#pragma once

namespace electionProject
{
    class Date
    {
    private:
        int _day;
        int _month;
        int _year;

    public:

        int getDay() const { return _day; }
        int getMonth() const { return _month; }
        int getYear() const { return _year; }
        void operator=(const Date& otherDay);

        Date(int day = 1, int month = 1, int year = 2000); //:ToDO
        Date(const Date& otherDate);

        const int maxDayPerMonthArr[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };

    };
}



