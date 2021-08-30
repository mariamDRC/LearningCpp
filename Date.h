#pragma once;
#include <string>
class Date
{
    private:
    int m_day;
    int m_month;
    int m_year;
    public:
    int setday (int day){
        m_day = day;
    }
    int getday(){
        return m_day;
    }
        Date(int day , int month , int year);
};
