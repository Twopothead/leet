# head = [1,0,0,1,0,
#     0,1,1,1,0,
#     0,0,0,0,0]
class ListNode
    attr_accessor :val, :next
    def initialize(val = 0, _next = nil)
        @val = val
        @next = _next
    end
end
n15 = ListNode.new(0,nil)
n14 = ListNode.new(0,n15)
n13 = ListNode.new(0,n14)
n12 = ListNode.new(0,n13)
n11 = ListNode.new(0,n12)

n10 = ListNode.new(0,n11)
n9 = ListNode.new(1,n10)
n8 = ListNode.new(1,n9)
n7 = ListNode.new(1,n8)
n6 = ListNode.new(0,n7)

n5 = ListNode.new(0,n6)
n4 = ListNode.new(1,n5)
n3 = ListNode.new(0,n4)
n2 = ListNode.new(0,n3)
n1 = ListNode.new(1,n2)
head  = n1