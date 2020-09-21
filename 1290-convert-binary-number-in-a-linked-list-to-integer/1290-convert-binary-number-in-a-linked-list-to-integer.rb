# [AC] 1290-convert-binary-number-in-a-linked-list-to-integer
# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} head
# @return {Integer}
def get_decimal_value(head)
    r = 0
    p = head
    begin
        print(p.val)
        r=r+p.val
        r=r<<1
        p=p.next
    end while p!=nil
    r=r>>1
    return r
end