# [AC] 1185-day-of-the-week
# @param {Integer} day
# @param {Integer} month
# @param {Integer} year
# @return {String}
def is_leap(year)
    return (year%4==0 && year%100!=0) ||
        (year%400==0)
end
def since_1970_01_01(day, month, year) 
    marr = [31,29,31,30,31,30,31,31,30,31,30,31]
    narr = [31,28,31,30,31,30,31,31,30,31,30,31]
    r = 0
    arr = (is_leap(year)) ? marr : narr
    for i in 1..(year-1970)
        r += is_leap(1970+i-1) ? 366:365
    end
    for i in 0..(month-1)
        r += arr[i] 
    end
    r = r - arr[month-1] + day
    return r
end
def day_of_the_week(day, month, year)
    days = since_1970_01_01(day, month, year)
    week = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"]
    return week[(days+2)%7]
end