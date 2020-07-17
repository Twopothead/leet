# 1491-average-salary-excluding-the-minimum-and-maximum-salary
# @param {Integer[]} salary
# @return {Float}
def average(salary)
    max = salary[0]
    min = salary[0]
    salary.each{|i|
        if(i>max)
            max = i
        end
        if(i<min)
            min = i
        end
    }
    count = 0
    sum = 0
    average = 0
    salary.each{|i|
        if i!=min && i!=max then
            sum += i
            count +=1
        end
    }
    average = (1.0*sum)/count
    return average
end
