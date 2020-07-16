# 1507-reformat-date
# @param {String} date
# @return {String}
def reformat_date(date)
    mmp = {"Jan"=>1,"Feb"=>2, "Mar"=>3, "Apr"=>4, "May"=>5, "Jun"=>6, "Jul"=>7, "Aug"=>8, "Sep"=>9, "Oct"=>10, "Nov"=>11, "Dec"=>12}
    d = date.split(' ')[0].gsub('st','').gsub('nd','').gsub('rd','').gsub('th','')
    m = mmp[date.split(' ')[1]]
    y = date.split(' ')[2]
    d = ('%02d' % d).to_s
    m = ('%02d' % m).to_s
    y = ('%04d' % y).to_s
    return [y,m,d].join('-')
end

