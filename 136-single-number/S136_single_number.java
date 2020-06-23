package com.company.Leetcode;

import java.util.HashSet;

public class S136_single_number {
    public int singleNumber(int[] nums) {
        HashSet<Integer> intSet =  new HashSet<Integer>();
        for(int n:nums){
            if(intSet.contains(n))
                intSet.remove(n);
            else
                intSet.add(n);
        }
        return (int)intSet.toArray()[0];
    }
    public void test(){
        int[] nums1 = {4,1,2,1,2};
        testcase(nums1);
        int[] nums2 = {2,2,1};
        testcase(nums2);
    }
    public void testcase(int[] nums){
        for(int n : nums)
            System.out.print(n+" ");

        System.out.println("\n"+singleNumber(nums));
    }
    public static void main(String[] args) {
        S136_single_number s = new S136_single_number();
        s.test();
        //s.singleNumber(nums);
    }
}
