# 067-add-binary
# @param {String} a
# @param {String} b
# @return {String}
def add_binary(a, b)
    (Integer(['0b',a].join)+Integer(['0b',b].join)).to_s(2)
end

