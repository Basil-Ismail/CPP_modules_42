#include <utils.hpp>

bool yearCheck(std::string &year)
{
    if (year.length() != 4)
        return true;

    char *endptr;
    size_t yearValue = strtol(year.c_str(), &endptr, 10);

    if (*endptr != '\0')
        return true;
    if (yearValue < 1960 || yearValue > 2050)
        return true;

    return false;
}

bool monthCheck(std::string &month)
{
    if (month.length() != 2)
        return true;

    char *endptr;
    size_t monthValue = strtol(month.c_str(), &endptr, 10);

    if (*endptr != '\0')
        return true;
    if (monthValue < 1 || monthValue > 12)
        return true;

    return false;
}

static bool isLunarYear(int year)
{
    return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}

bool dayCheck(std::string &day, int month, int year)
{
    if (day.length() != 2)
        return true;
    char *endptr;
    size_t dayValue = strtol(day.c_str(), &endptr, 10);

    if (*endptr != '\0')
        return true;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (dayValue < 1 || dayValue > 31)
            return true;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (dayValue < 1 || dayValue > 30)
            return true;
        break;
    case 2:
        if (isLunarYear(year))
        {
            if (dayValue < 1 || dayValue > 29)
                return true;
        }
        else if (dayValue < 1 || dayValue > 28)
            return true;
        break;
    default:
        return true;
    }
    return false;
}