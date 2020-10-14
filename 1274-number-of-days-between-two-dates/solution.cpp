struct Solution 
{
    constexpr static int MONTHS_TO_ADDED_DAYS[] { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

    int get_total_days(const std::string& d) const
    {
        const auto [day, month, year] = std::array{ std::stoi(d.substr(8, 2)), std::stoi(d.substr(5, 2)), std::stoi(d.substr(0, 4)) };
        
        const int non_leap_days = day + MONTHS_TO_ADDED_DAYS[month] + (year - 1) * 365;
        const int previous_leap_days = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
        const int current_year_has_leap_day = (month >= 3 && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)));
        
        return non_leap_days + previous_leap_days + current_year_has_leap_day;
    }
    
    int daysBetweenDates(std::string date1, std::string date2) 
    {
        return std::abs(get_total_days(date1) - get_total_days(date2));
    }
};
