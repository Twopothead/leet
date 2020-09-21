# @param {String} s
# @param {String} t
# @return {Boolean}
def remain(s)
    stack = []
    for i in 0..(s.size-1)
        if(s[i]!="#")
            stack.push(s[i])
        else
            if(stack.size > 0)
                stack.pop()
            end
        end
    end
    return(stack)
end
def backspace_compare(s, t)
    return remain(s)==remain(t)
end

# ruby判断字符串用"=="就可以。判断对象可以用"equal?"方法。此处与java相反。