#include <iostream>
#include <string>

using namespace std;

bool isLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short ReadYear()
{
    short year;
    cout << "Enter a Year: ";
    cin >> year;
    return year;
}



string namemonth(int month)
{
    string arrMonths[] = {
          "Jan", "Feb", "Mar", "Apr", "May", "Jun",
          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    return arrMonths[month - 1];
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short DayOfWeekOrder(short year, short month, short day)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;

    return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short dayOfWeekOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[dayOfWeekOrder];
}

void printdays(short year, short month)
{
    short NumberOfDays = NumberOfDaysInAMonth(month, year);
    short current = DayOfWeekOrder(year, month, 1);

    int i;

  
    printf("\n_______________%s_______________\n\n", namemonth(month).c_str());
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (i = 0; i < current; i++)
        printf("     ");

    for (int j = 1; j <= NumberOfDays; j++)
    {
        printf("%5d", j);

        if (++i == 7)
        {
            i = 0;
            cout << "\n";
        }
    }
    cout << "\n";
}

void printcalandie(short year)
{
    printf("\n=================================");
    printf("\n        Calendar - %d", year);
    printf("\n=================================\n");

    for (int month = 1; month <= 12; month++)
    {
        printdays(year, month);
        cout << "_________________________________\n";
    }
}

int main()
{
    short year = ReadYear();

    printcalandie(year);

    system("pause>0");
    return 0;
}