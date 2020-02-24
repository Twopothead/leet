import java.util.LinkedList;
import java.util.Queue;

public class S283_move_zeroes {
    public void moveZeroes(int[] nums) {
    	Queue<Integer> queue = new LinkedList<>();
    	for (int i = 0; i < nums.length; i++) {
			if(nums[i] == 0) {
				queue.offer(i);
			}else {
				if(!queue.isEmpty() && queue.peek()<i) {
					int zero_index = queue.poll();
					nums[zero_index] = nums[i];
					nums[i] = 0;
					queue.offer(i);
				}
			}
		}
    }
	public static void main(String[] args) {
		S283_move_zeroes s = new S283_move_zeroes();
		s.testcases();
	}
	private void test(int[] nums) {
		for ( int num : nums) {
			System.out.print(num + " ");
		}
		moveZeroes(nums);
		System.out.println("");
		for ( int num : nums) {
			System.out.print(num + " ");
		}
	}
	private void testcases() {
//		Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//
//		Example:
//
//		Input: [0,1,0,3,12]
//		Output: [1,3,12,0,0]
//
//		Note:
//
//		You must do this in-place without making a copy of the array.
//		Minimize the total number of operations.
		int[] nums = {0,1,0,3,12};
		test(nums);
	}
}
