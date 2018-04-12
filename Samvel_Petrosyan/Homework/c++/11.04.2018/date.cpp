#include <iostream>
using namespace std;

int first_date_month;
int first_date_days;
int first_date_year;
int second_date_month;
int second_date_days;
int second_date_year;
int days;

int month_days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    cout << "Enter first date: ";
    cin >> first_date_year >> first_date_month >> first_date_days;
    cout << "Enter second date: ";
    cin >> second_date_year >> second_date_month >> second_date_days;

    if(first_date_year == second_date_year)
    {
        if(first_date_month == second_date_month)
            days = second_date_days - first_date_days;
        else
        {
            for(int i = first_date_month; i < second_date_month-1;i++)
                days += month_days[i];
        days += month_days[first_date_month-1]-first_date_days+second_date_days;
        }
    }
    else
    {
        for(int i = 0;i < second_date_month-1; i++);
            days += month_days[i];
        for(int i = first_date_month; i < 12; i++)
            days += month_days[i];
        if(second_date_year - first_date_year >= 0);
            days += (second_date_year - first_date_year - 1)*365 + 
            month_days[first_date_month-1] - first_date_days + second_date_days;
    }

    cout << "Days  between the two dates:"<< days;

    return(0);  
}
