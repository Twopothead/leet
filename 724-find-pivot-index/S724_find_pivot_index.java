public class S724_find_pivot_index {
	private int getSum(int[] nums) {
		int sum = 0;
		for (int i : nums) {
			sum += i;
		}
		return sum;
	}
	private boolean judge(int sumbf,int val,int sum) {
		int sumaf = sum - sumbf - val;
		return (sumbf == sumaf) ? true : false;
	}
    public int pivotIndex(int[] nums) {
    	int sum = getSum(nums);
    	int sumbf = 0;
    	for (int i = 0; i < nums.length; i++) {
			if(i-1>=0) 
				sumbf += nums[i-1];
			if(judge(sumbf, nums[i], sum))
				return i;
		}
        return -1;
    }
	public static void main(String[] args) {
		S724_find_pivot_index s = new S724_find_pivot_index();
		s.testcases();
	}
	private void test(int[] nums) {
		for (int num : nums) {
			System.out.print(num + " ");
		}
		System.out.println("\nPivot index is: " + pivotIndex(nums));
	}
	private void testcases() {
//		Given an array of integers nums, write a method that returns the "pivot" index of this array.
//
//		We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.
//
//		If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index.
//
//		Example 1:
//
//		Input:
//		nums = [1, 7, 3, 6, 5, 6]
//		Output: 3
//		Explanation:
//		The sum of the numbers to the left of index 3 (nums[3] = 6) is equal to the sum of numbers to the right of index 3.
//		Also, 3 is the first index where this occurs.
//
//		Example 2:
//
//		Input:
//		nums = [1, 2, 3]
//		Output: -1
//		Explanation:
//		There is no index that satisfies the conditions in the problem statement.
//
//		Note:
//
//		The length of nums will be in the range [0, 10000].
//		Each element nums[i] will be an integer in the range [-1000, 1000].
		int[] nums1 = {1, 7, 3, 6, 5, 6};
		test(nums1);
		int[] nums2 = {1, 2, 3};
		test(nums2);
// Input: [-1,-1,-1,-1,-1,0]
// Expected: 2
		int[] nums3 = {-1,-1,-1,-1,-1,0};
		test(nums3);
	}
}
