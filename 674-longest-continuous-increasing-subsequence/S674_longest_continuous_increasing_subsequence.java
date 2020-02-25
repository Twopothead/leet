
public class S674_longest_continuous_increasing_subsequence {
	// Input:[1,3,5,4,2,3,4,5] Expected: 4
    public int findLengthOfLCIS(int[] nums) {
    	if(nums.length == 0)
    		return 0;
    	int lastOne = (nums.length >= 1) ? (nums[0] -1) : 0;
    	int count = 0,max_seq = 0;
    	for (int i = 0; i < nums.length; i++) {
			if(nums[i] > lastOne) {
				count += 1;
				max_seq = (count >= max_seq) ? count : max_seq;
			}else {
				count = 1;
			}
			lastOne = nums[i];
		}
        return max_seq;
    }
	public static void main(String[] args) {
		S674_longest_continuous_increasing_subsequence s = new S674_longest_continuous_increasing_subsequence();
		s.testcases();
	}
	private void test(int[] nums) {
		System.out.print("Input: ");
		for (int num : nums) {
			System.out.print(num + " ");
		}
		System.out.println("\nOutput: " + findLengthOfLCIS(nums));
	}
	private void testcases() {
//		Given an unsorted array of integers, find the length of longest continuous increasing subsequence (subarray).
//
//		Example 1:
//
//		Input: [1,3,5,4,7]
//		Output: 3
//		Explanation: The longest continuous increasing subsequence is [1,3,5], its length is 3.
//		Even though [1,3,5,7] is also an increasing subsequence, it's not a continuous one where 5 and 7 are separated by 4.
//
//		Example 2:
//
//		Input: [2,2,2,2,2]
//		Output: 1
//		Explanation: The longest continuous increasing subsequence is [2], its length is 1.
//
//		Note: Length of the array will not exceed 10,000.
		int[] nums1 = {1,3,5,4,7};
		int[] nums2 = {2,2,2,2,2};
		test(nums1);
		test(nums2);
		int[] nums3 = {1,3,5,4,2,3,4,5};
		test(nums3);

// Input:[1,3,5,4,2,3,4,5] Expected: 4
		
	}
}
