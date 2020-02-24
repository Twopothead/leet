public class S189_rotate_array {
	private int addIndex(int index,int k,int nums_length) {
		index += k;
		while (index < 0) {
			index += nums_length; 
		}
		while (index >= nums_length) {
			index -= nums_length;
		}
		return index;
	}
    public void rotate(int[] nums, int k) {
    	int[] nums_clone = nums.clone();
    	for (int i = 0; i < nums.length; i++) {
    		nums[addIndex(i, k, nums.length)] = nums_clone[i];
		}
    }
    private void test(int[] nums,int k) {
    	System.out.println("Input: ");
    	for (int num : nums) {
			System.out.print(num + " ");
		}
    	System.out.println("\nOutput: ");
    	rotate(nums, k);
    	for (int num : nums) {
			System.out.print(num + " ");
		}
	}
	public static void main(String[] args) {
		S189_rotate_array s = new S189_rotate_array();
		s.testcases();
	}
    public void testcases() {
// Input: [1,2,3,4,5,6,7] and k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5] 
// rotate 3 steps to the right: [5,6,7,1,2,3,4]	
    	int[] nums = {1,2,3,4,5,6,7};
    	int k = 3;
    	test(nums,k);
    }
}
